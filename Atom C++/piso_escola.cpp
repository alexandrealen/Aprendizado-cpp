#include <iostream>
using namespace std;

int main()
{
  int l, c;
  cin >> l >> c;

  double areaR, area;
  area = (l*c) - 0.5;

  int lajota1 = 0, lajota2 = 0;

  lajota2 = ((2*(l-1)) + (2*(c-1)));
  areaR = (area - (lajota2/4));
  for(double i = areaR; i > 0; i-=0.5)
  {
    lajota1++;
  }

  cout << lajota1 << endl << lajota2;

}
