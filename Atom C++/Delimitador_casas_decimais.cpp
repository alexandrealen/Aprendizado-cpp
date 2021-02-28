#include <iostream>
using namespace std;

int main()
{
  cout.precision(2);
  cout.setf(ios::fixed);
  double i=10.12313414;

  cout << i; // printa 10.12
  return 0;

}
