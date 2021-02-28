#include <iostream>
using namespace std;

int main()
{
    int n, a, aT, z;
        cin >> n;
        aT = 0;
        z = 0;
    while(n>0)
    {
        while(aT<1000000)
        {
        cin >> a;
        aT = aT + a;
        z = z + 1;
        n = n - 1;
        }
        if(aT>=1000000 and n > 0)
        {
            cin >> a;
        }
        n = n -1;


    }
    cout << z;
}




