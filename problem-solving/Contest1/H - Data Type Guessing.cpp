#include <iostream>
using namespace std;

int main()
{
    long double x;
    long double y;
    long double z;
    long double sum;
    long long Dsum;
    cin >> x >> y >> z;
    sum = (x*y)/z;
    Dsum = sum;
    if(sum-(long double)Dsum != 0)
        cout << "double";
    else if(sum <= 2147483647)
        cout << "int";
    else
        cout << "long long";
}
