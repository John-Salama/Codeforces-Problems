#include <iostream>
using namespace std;

int main()
{
    int Size = 0;
    int num = 0;
    long long ans = 1.0;
    cin >> Size;
    long long* arr = new long long[Size];

    for(int i =0;i<Size;i++)
        cin >> arr[i];


    for(int i=0;i<Size;i++){
        num = arr[i];
        ans = 1;
        while(num>1){
            ans *= num;
            num--;
        }
        arr[i] = ans;
    }

    for(int i =0;i<Size;i++)
        cout << arr[i] << endl;

}
