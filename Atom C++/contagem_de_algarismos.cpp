#include <iostream>
using namespace std;

int main()
{

	int n, zero = 0, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis =  0, sete = 0, oito = 0, nove = 0;

	cin >> n;
	string numero[n];
	for(int i=0; i<n; i++)
	{
		cin >> numero[i];
		for(int j=0; j<numero[i].size(); j++)
		{
			if(numero[i][j] == '0') zero++;
			else if(numero[i][j] == '1') um++;
			else if(numero[i][j] == '2') dois++;
			else if(numero[i][j] == '3') tres++;
			else if(numero[i][j] == '4') quatro++;
			else if(numero[i][j] == '5') cinco++;
			else if(numero[i][j] == '6') seis++;
			else if(numero[i][j] == '7') sete++;
			else if(numero[i][j] == '8') oito++;
			else if(numero[i][j]== '9') nove++;
		}

	}

	cout << "0" << " - " << zero << endl;
	cout << "1" << " - " << um << endl;
	cout << "2" << " - " << dois << endl;
	cout << "3" << " - " << tres << endl;
	cout << "4" << " - " << quatro << endl;
	cout << "5" << " - " << cinco << endl;
	cout << "6" << " - " << seis << endl;
	cout << "7" << " - " << sete << endl;
	cout << "8" << " - " << oito << endl;
	cout << "9" << " - " << nove << endl;

	return 0;
}
