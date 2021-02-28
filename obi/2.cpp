#include <iostream>
using namespace std;

int main()
{

	int  n, p, m, desejop = 0, desejom = 0;

	cin >> n;
	int desejo;

	for (int i=0; i<n; i++)
	{
		cin >> desejo;
		if(desejo == 1)
		{
			desejop++;
		}
		else
		{
			desejom++;
		}
	}
	cin >> p >> m;

	if(desejop == p && desejom == m)
	{
		cout << "S";
	}
	else
	{
		cout << "N";
	}



	return 0;
}
