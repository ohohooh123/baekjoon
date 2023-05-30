#include <iostream>

using namespace std;

int main()
{
    int N, num;
    int max=-1000000, min=1000000;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        if(num>=max) max=num;
        if(num<=min) min=num;
    }
    cout<<min<<" "<<max;    

}
