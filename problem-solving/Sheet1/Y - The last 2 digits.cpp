#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int w;
    cin >> x >> y >> z >> w;
    int sum = (x%100)*(y%100)*(z%100)*(w%100);
    string s = to_string(sum%100);
        if(s.size() == 1)
        cout << "0"+s;
        else
            cout << s;


}

