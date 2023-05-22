#include <iostream>
#include <stack>
#include <string>


using namespace std;

int main(){
    stack<char> s;
    int sum=0;
    string arr;
    cin>>arr;

    for(int i=0;i<arr.length();i++){
        if(arr[i]=='('){
            //막대 시작이면 push 어차피 레이저면 걍 바로 나감
            s.push(arr[i]);
        } else if(arr[i]==')' && arr[i-1]=='('){
            //레이저면 앞 괄호 pop 후 개수더함
            s.pop();
            sum+=s.size();
        } else {
            s.pop();
            sum++;
        }
    }

    cout<<sum<<endl;

}