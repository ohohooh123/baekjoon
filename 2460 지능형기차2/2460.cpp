#include <iostream>

using namespace std;

int main()
{
    int sum = 0, max = 0;
    int in,out;
    
    for(int i=0;i<10;i++){
        cin>>out>>in;
        sum=sum+in-out;
        if(max<=sum) max=sum;
    }
    cout<<max;

}
