#include <iostream>
using namespace std;

int main()
{
    long long x,y,sum;
    while(cin>>x>>y, x>0 and y>0){
        sum=0;
        for (long long i = min(x,y); i < max(x,y)+1; ++i) {
            cout<<i<<" ";sum+=i;
        }
        cout<<"sum ="<<sum<<"\n";
    }
}
