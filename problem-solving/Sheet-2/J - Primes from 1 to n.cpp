#include <iostream>
using namespace std;

int main() {

    int x;
    bool c = true;
    cin >> x;
    for(int j=2;j<=x;j++){
    c = true;
      for (int i = 2; i <= j/2; ++i) {
        if (j % i == 0) {
        c = false;
        break;
    }
    }
    if(c == true)
        cout << j << " ";
}
}
