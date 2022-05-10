#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long x;
    long long y;
    long long z;
    cin >> x >> y >> z;

    if(x%z==0&&y%z==0)
        cout << "Both";
    else if (x%z==0&&y%z!=0)
        cout << "Memo";
    else if (x%z!=0&&y%z==0)
        cout << "Momo";
    else
        cout << "No One";
}
