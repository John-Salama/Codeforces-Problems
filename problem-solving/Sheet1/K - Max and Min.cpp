#include <iostream>
using namespace std;

int main()
{
    int Max =-9999999;
    int Min =99999999;
    int arr[3];
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }

    for(int i=0;i<3;i++){
        if(arr[i]>Max)
            Max = arr[i];

    }
    for(int i=0;i<3;i++){
        if(arr[i]<Min)
            Min = arr[i];
    }

    cout << Min << " " << Max << endl;
}
