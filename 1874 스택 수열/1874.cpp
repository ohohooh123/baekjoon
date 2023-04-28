#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, num, idx = 0;
    int a_idx=0; //출력 배열의 인덱스
    int flag=1; //가능한지 안가능한지
    int arr[987654321];
    cin >> n;
    stack<char> st;
    st.push(idx++);
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        while (st.top() < num)
        {
            st.push(idx);
            idx++;
            arr[a_idx++] = '1';
            //cout << "+\n";
        }
        if(st.top()==num) {
            st.pop();
            //cout << "-\n";
            arr[a_idx++] = '0';
        }
        else {
            flag=0;
        }
    }
    if(flag==1){
        for(int j=0;j<a_idx;j++){
            if(arr[j]==1) cout<<"+\n";
            else cout<<"-\n";
            //cout<<arr[a_idx]<<'\n';
            //cout<<"he";
        }
    }
}