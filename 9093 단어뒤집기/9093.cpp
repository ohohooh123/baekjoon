#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main(){
    int T;
    cin>>T;
    cin.ignore();
    for (int i=0;i<T;i++){
        getline(cin, str);
        str += " ";
        stack<char> st;
        for(int j=0; j<str.size();j++){
            if(str[j]==' '){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<str[j];
            } else {
                st.push(str[j]);
            }
        }
    }
}