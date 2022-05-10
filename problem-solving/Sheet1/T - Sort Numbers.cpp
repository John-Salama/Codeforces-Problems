#include <iostream>
using namespace std;

int main()
{
    int x[3] = {0};
    int temp = 0;
    int flag = 1;
    int store[3] = {0};

    for(int i=0;i<3;i++)
        cin >> x[i];

    for(int i=0;i<3;i++)
        store[i] = x[i];


    while(flag !=0){
        for(int i=0;i<2;i++){
            if(x[i]>x[i+1]){
                temp = x[i+1];
                x[i+1] = x[i];
                x[i] = temp;
                flag = 1;
        }
        else
            flag =0;
        }
    }

    for(int i=0;i<3;i++)
        cout << x[i] << endl;

    cout << endl;

    for(int i=0;i<3;i++)
        cout << store[i] << endl;
}
