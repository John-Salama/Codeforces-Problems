#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int x,x2;
  string num;
  cin >> x;
  num = to_string(x);
  reverse(num.begin(), num.end());
  x2 = stoi(num);
  cout << x2 << endl;
  if(x==x2)
        cout << "YES";
    else
        cout << "NO";
}
