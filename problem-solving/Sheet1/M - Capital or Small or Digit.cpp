#include <iostream>
using namespace std;

int main()
{
    char y;
    cin >> y;
    int x = (int) y;
    if(x>=48&&x<=57)
        cout << "IS DIGIT";
    else if(x>=65&&x<=90)
        cout << "ALPHA" << endl << "IS CAPITAL" ;
    else if(x>=97&&x<=122)
        cout << "ALPHA" << endl << "IS SMALL" ;
}
