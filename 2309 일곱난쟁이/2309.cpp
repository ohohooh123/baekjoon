
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    int tall[9];
    int sum=0;
    int flag=0;
    for(int i=0;i<9;i++){
        cin>>tall[i];
        sum+=tall[i];
    }
    sum-=100;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(tall[i]+tall[j]==sum){
                tall[i]=100;
                tall[j]=100;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    sort(tall,tall+9);
    for(int i=0;i<7;i++){
        cout<<tall[i]<<endl;
    }

}
