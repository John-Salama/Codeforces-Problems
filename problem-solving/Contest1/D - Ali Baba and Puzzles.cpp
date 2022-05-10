#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long x;
    long long y;
    long long z;
    long long w;

    cin >> x >> y >> z >> w;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){

            if(i ==0&&j==1)
                {
                if(x+y-z==w){
                    cout << "YES" ;
                return 0;
                }
                }
             if(i ==0&&j==2)
                {
                if(x+y*z==w){
                    cout << "YES" ;
                    return 0;}
                }
             if(i ==1&&j==0)
                {
                if(x-y+z==w){
                    cout << "YES" ;
                    return 0;}
                }
             if(i ==1&&j==2)
                {
                if(x-y*z==w){
                    cout << "YES" ;
                    return 0;}
                }
             if(i ==2&&j==0)
                {
                if(x*y+z==w){
                    cout << "YES" ;
                    return 0;}
                }
             if(i ==2&&j==1)
                {
                if(x*y-z==w){
                    cout << "YES" ;
                    return 0;}
                }
        }

        cout << "NO";

}
