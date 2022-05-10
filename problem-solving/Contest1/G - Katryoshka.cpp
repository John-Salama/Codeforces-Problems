#include <iostream>
using namespace std;

int main()
{
    long long x,y,z;
    long long Count = 0;
    cin >> x >> y >> z;
    Count = min(x,min(y,z));
    x-=Count;
    z-=Count;
    Count += min(x/2,z);
    cout << Count;
}
