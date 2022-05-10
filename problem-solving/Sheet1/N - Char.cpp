#include <iostream>
using namespace std;

int main()
{
    char y;
    cin >> y;
    int x = (int) y;

    if(x>=65&&x<=90){
        x+=32;
        y = (char) x;
        cout << y ;
    }
    else if(x>=97&&x<=122){
        x-=32;
        y = (char) x;
        cout << y ;
        }
}
