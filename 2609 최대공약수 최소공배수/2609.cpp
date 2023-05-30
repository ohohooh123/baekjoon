#include <iostream>
using namespace std;

int main()
{   
    int num1, num2;
    int min, max;
    cin>>num1>>num2;
    max=num1*num2;
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            if(num2%i==0){
                min=i;
            }
        }
    }
    for(int i=1;i<=num2;i++){
        if((num1*i)%num2==0){
            max=num1*i;
            break;
        }
    }
    cout<<min<<endl<<max;

}