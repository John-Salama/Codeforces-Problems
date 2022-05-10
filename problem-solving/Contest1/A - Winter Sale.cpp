#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float X;
    float P;
    float R;
    cin >> X >> P;
    X = 100-X;
    P = P*100;
    R = P/X;
    cout << R;

}
