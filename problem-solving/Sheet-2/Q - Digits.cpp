#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int Size;
  cin >> Size;
  int* x = new int[Size];
  string* num = new string[Size];

  for(int i=0;i<Size;i++)
    cin >> x[i];


  for(int j=0;j<Size;j++){
  num[j] = to_string(x[j]);
  reverse(num[j].begin(), num[j].end());
  }

  for(int k=0;k<Size;k++){
    for(int l=0;l<num[k].length();l++)
        cout << num[k][l] << " ";
    cout << endl;
  }

}
