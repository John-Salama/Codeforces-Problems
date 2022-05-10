#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    if(x==0&&y==0)
        cout << "NO";
    else{
    if(x-y==1||y-x==1||x-y==0)
        cout << "YES";
    else
        cout << "NO";
        }
}
