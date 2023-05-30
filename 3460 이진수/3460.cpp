#include <iostream>

using namespace std;

int main()
{
    int T, n;
    int index=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin >>n;
        index=0;
        while(n>1){
            if(n%2==1){
                cout<<index<<" ";
            }
            n/=2;
            index++;
        }
        cout<<index<<endl;
    }

}
