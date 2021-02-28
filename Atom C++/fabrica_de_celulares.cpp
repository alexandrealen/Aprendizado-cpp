#include <iostream>
using namespace std;

int main()
{
  int n, c1=0, c2=0, c3=0, c4=0, c5=0, a=0, b=0, cc=0;

  cin >> n;
  int c[n];
  for(int i=0; i<n; i++)
  {
	  cin >> c[i];
	  if(c[i] == 1) c1++;
	  else if(c[i] == 2) c2++;
	  else if(c[i] == 3) c3++;
	  else if(c[i] == 4) c4++;
	  else if(c[i] == 5) c5++;
	  if(c1>= 1 && c3>=1 && c5>=1)
	  {
		  while(c1>= 1 && c3>=1 && c5>=1)
		  {
		  	a++;
		  	c1--;
		  	c3--;
		  	c5--;
		  }
	  }
	  if(c1>= 1 && c4>=1)
	  {
		  while(c1>= 1 && c4>=1)
		  {
		  	b++;
		  	c1--;
		  	c4--;
		  }
	  }
	  if(c2>=1 && c4>=1)
	  {
		  while(c2>=1 && c4>=1)
		  {
		  	cc++;
		  	c2--;
		  	c4--;
		  }
	  }

  }

  cout << "A: " << a << endl << "B: " << b << endl << "C: " << cc << endl;

}
