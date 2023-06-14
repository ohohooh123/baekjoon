

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define PLUS 0
#define MINUS 1
#define MUL 2
#define DIV 3

int main()
{
    int N, temp;
    int arr[4];
    int Min = 10000000000, Max = -10000000000;
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
    
    do{
        int sum = num[0];
        for(int i=0;i<N-1;i++){
            switch(oper[i]){
                case PLUS:
                sum+=num[i+1];
                break;
                case MINUS:
                sum-=num[i+1];
                break;
                case MUL:
                sum*=num[i+1];
                break;
                case DIV:
                sum/=num[i+1];
                break;
            }
        }
        Min=min(Min,sum);
        Max=max(Max,sum);
    }while(next_permutation(oper.begin(),oper.end()));
    
    cout<<Max<<"\n"<<Min;
    
}
