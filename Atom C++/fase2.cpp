#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cout.precision(2);
     cout.setf(ios::fixed);
	int n;
	float p, g;

	cin >> n;
	float preco[n];

	for(int i=0; i<n; i++)
	{
		cin >> p >> g;
		preco[i] = ((1000*p)/g);
	}


	sort(preco, preco+n);
	cout << preco[0];

	return 0;
}
