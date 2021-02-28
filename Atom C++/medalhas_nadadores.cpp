#include <iostream>
using namespace std;

int main()
{

	int t1, t2, t3;

	cin >> t1 >> t2 >> t3;
	if(t1 < t2 && t2 > t3)
	{
		cout << 1 << endl << 2 << endl << 3;
	}
	else if(t1 < t2)
	{
		cout << 1 << endl << 3 << endl << 2;
	}
	else if(t2 < t3 && t1 < t3)
	{
		cout << 2 << endl << 1 << endl << 3;
	}
	else if(t2 < t3)
	{
		cout << 2 << endl << 3 << endl << 1;
	}
	else if(t3 < t2 && t1 < t2)
	{
		cout << 3 << endl << 1 << endl << 2;
	}
	else
	{
		cout << 3 << endl << 2 << endl << 1;
	}

	return 0;
}
