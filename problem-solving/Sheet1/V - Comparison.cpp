#include <iostream>
using namespace std;

int main()
{
    int x;
    char z;
    int y;
    cin >> x >> z >> y ;
    if(x>y&&z=='>')
        cout << "Right";
    else if(x==y&&z=='=')
        cout << "Right";
    else if(x<y&&z=='<')
        cout << "Right";
    else
        cout << "Wrong" ;
}
