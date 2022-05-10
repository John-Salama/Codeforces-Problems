#include <iostream>
using namespace std;

int main() {

    char x;
    int Size;
    cin >> x >> Size;
    int* arr = new int[Size];
    for(int i=0;i<Size;i++)
        cin >> arr[i];
    for(int j=0;j<Size;j++){
        for(int k=0;k<arr[j];k++)
            cout << x;
    cout << endl;
    }


}
