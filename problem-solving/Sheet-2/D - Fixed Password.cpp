#include <iostream>
using namespace std;

int main()
{
    int x =0;
    int Count = 0;

    while (x !=1999){
        cin >> x;
        Count ++;
    }

    while(Count>1){
        cout << "Wrong" << endl;
        Count--;
        }

    cout << "Correct" << endl;

}
