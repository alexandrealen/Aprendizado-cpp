#include <iostream>
using namespace std;

int main()
{
    int n, c, l, z;z = 0;cin >> n;while(n>0){cin >> l >> c;if(l>c){z = z + c;}n = n - 1;}cout << z;
}
