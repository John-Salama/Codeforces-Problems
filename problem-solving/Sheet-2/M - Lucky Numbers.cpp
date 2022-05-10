#include <iostream>
using namespace std;

int main() {

    int x;
    int y;
    int num;
    int digit;
    bool check = false;
    bool acheck = false;
    cin >> x >> y;
    for(int i=x;i<=y;i++){
            num = i;
        while(num>0){
            digit = num%10;
        if(digit==4)
            check = true;
        else if(digit==7)
            check = true;
        else{
        check = false;
        break;
        }
        num /=10;
        }
        if(check){
            cout << i << " ";
            acheck = true;
        }
    }
    if(!acheck)
            cout << -1 << endl;

}
