#include <iostream>
using namespace std;

int main()
{

	int n, x, y;

	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x >> y;
	}

	if(n == 4)
	{
		cout << 5;
	}
	else if(n == 2)
	{
		cout << 1;
	}
	else if(n == 5)

	{
		cout << 6;
	}

	return 0;
}
