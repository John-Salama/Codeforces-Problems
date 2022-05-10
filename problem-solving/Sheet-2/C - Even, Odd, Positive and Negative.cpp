#include <iostream>
using namespace std;

int main()
{
    int Size = 0;
    int Count = 0;
    cin >> Size;
    int* arr = new int[Size];
    for(int i =0;i<Size;i++)
    cin >> arr[i];

    for(int i =0;i<Size;i++)
        if(arr[i]%2==0)
            Count++;
    cout << "Even: " << Count << endl;
    cout << "Odd: " << Size-Count << endl;
    Count=0;

    for(int i =0;i<Size;i++)
        if(arr[i]>0)
            Count++;
    cout << "Positive: " << Count << endl;
    Count=0;

    for(int i =0;i<Size;i++)
        if(arr[i]<0)
            Count++;
    cout << "Negative: " << Count << endl;
    Count=0;
}
