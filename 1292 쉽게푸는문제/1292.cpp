#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int A,B;
    int sum=0;
    
    cin>>A>>B;
    
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=i;j++){
        v.push_back(i);
        }
    }
    for(int k=A-1;k<B;k++){
        sum+=v[k];
    }
    cout<<sum;
    
}