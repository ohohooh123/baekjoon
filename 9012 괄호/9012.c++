#include <iostream>
#include <string>
#include <stack>

using namespace std;
string str;

int main()
{
    int T, i, flag;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        flag = 0;
        getline(cin,str);
        stack<char> st;
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                st.push('(');
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                } else {
                    //cout<<"NO"<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(!st.empty() || flag==1) cout<<"NO\n";
        else if( st.empty() && (i==str.size())) {
                cout<<"YES"<<endl;
        }
    }
}