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
            //���� �����̸� push ������ �������� �� �ٷ� ����
            s.push(arr[i]);
        } else if(arr[i]==')' && arr[i-1]=='('){
            //�������� �� ��ȣ pop �� ��������
            s.pop();
            sum+=s.size();
        } else {
            s.pop();
            sum++;
        }
    }

    cout<<sum<<endl;

}