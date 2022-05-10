#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double x;
    long double y;
    long double z;
    long double w;
    cin >> x >> y >> z >> w;
    if(y*log10(x)>w*log10(z))
        cout << "YES";
    else
        cout << "NO";

}

