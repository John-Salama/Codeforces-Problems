#include <iostream>
using namespace std;

int main()
{
    int x;
    char z;
    int y;
    char Equal;
    int w;
    cin >> x >> z >> y >> Equal >> w ;
    switch (z){

case '+':
    if (x+y==w)
        cout << "Yes" << endl;
    else
        cout << x+y << endl;
        break;
case '-':
        if (x-y==w)
        cout << "Yes" << endl;
    else
        cout << x-y << endl;
        break;
case '*':
        if (x*y==w)
        cout << "Yes" << endl;
    else
        cout << x*y << endl;
        break;
    }
}

