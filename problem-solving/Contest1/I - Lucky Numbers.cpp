#include <iostream>
using namespace std;

int main()
{
    int x;
    int r;
    cin >> x;
    r = x%10;
    x = x/10;
    if(r==0||x==0||(x%r==0||r%x==0))
        cout << "YES";
    else
        cout << "NO";
}
