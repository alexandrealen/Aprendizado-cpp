#include <iostream>
using namespace std;

int main()
{
  int m, a, b, c;

  cin >> m >> a >> b;

  c = m-a-b;

  if(a > b && a > c)
  {
    cout << a;
  }
  else if(b > c && b > a)
  {
    cout << b;
  }
  else if(c > a && c > b)
  {
    cout << c;
  }
}
