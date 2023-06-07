#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, temp;
    int arr[4];
    vector <int> num;
    vector <int> oper;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        num.push_back(temp);
    }
    for(int i=0;i<4;i++){
        cin>>temp;
        if(temp!=0){
            for(int j=0;j<temp;j++){
                oper.push_back(i);
            }
        }
    }
}