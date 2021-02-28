#include <iostream>
using namespace std;

int main()
{
    int d, resto;
    cin >> d;
    d-=3;
    resto = d % 8;
    if(resto == 3)
    {
      cout << "1";
    }
    else if(resto == 4)
    {
      cout << "2";
    }
    else
    {
      cout << "3";
    }
    return 0;
}
