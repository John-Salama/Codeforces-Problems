#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x =0;
    double y =0;
    cin >>x;
    cin >>y;
    cout << "floor " << x << " / " << y << " = "<< floor(x/y) << endl;
    cout << "ceil " << x << " / " << y << " = "<< ceil(x/y)<< endl;
    cout << "round " << x << " / " << y << " = "<< round(x/y)<< endl;
}
