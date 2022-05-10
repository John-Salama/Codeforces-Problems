#include <iostream>
using namespace std;

int main() {

    int x,y;
    int gcd = 0;
    cin >> x >> y;
      for (int i = 1; i <= max(x,y); ++i) {
        if (x % i == 0&&y % i == 0&&i>gcd) {
        gcd = i;
    }
    }
    cout << gcd;
}
