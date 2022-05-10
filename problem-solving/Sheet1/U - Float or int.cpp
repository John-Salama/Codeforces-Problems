#include <iostream>
using namespace std;

int main()
{
    float x;
    float FLOAt;
    int INT;
    cin >> x;
    INT = (int) x;
    FLOAt = x-INT;
    if(FLOAt == 0)
        cout << "int " << INT ;
    else
        cout << "float " << INT << " " << FLOAt ;



}
