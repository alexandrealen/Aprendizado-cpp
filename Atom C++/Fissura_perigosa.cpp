#include <iostream>
using namespace std;

int main()
{
  int n, f;
  cin >> n >> f;

  char mapa[n][n];
  int mapaint[n][n];

  //recebendo a matriz
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      cin >> mapa[i][j];
      if(mapa[i][j] == '1') mapaint[i][j] = 1;
      else if(mapa[i][j] == '2') mapaint[i][j] = 2;
      else if(mapa[i][j] == '3') mapaint[i][j] = 3;
      else if(mapa[i][j] == '4') mapaint[i][j] = 4;
      else if(mapa[i][j] == '5') mapaint[i][j] = 5;
      else if(mapa[i][j] == '6') mapaint[i][j] = 6;
      else if(mapa[i][j] == '7') mapaint[i][j] = 7;
      else if(mapa[i][j] == '8') mapaint[i][j] = 8;
      else if(mapa[i][j] == '9') mapaint[i][j] = 9;
    }
  }

  //manipulando a matriz
  if(mapaint[0][0] <= f)
  {
    mapa[0][0] = '*';
  }
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(mapaint[i][j] <= f && (mapa[i+1][j] == '*' || mapa[i-1][j] == '*' || mapa[i][j+1] == '*' || mapa[i][j-1] == '*'))
      {
        mapa[i][j] = '*';
      }
    }
  }


  //escrevendo matriz final
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      cout << mapa[i][j];
    }
    cout << endl;
  }
}

/*
8 6
27755478
29985439
34899989
22115569
66736689
99886555
44433399
99986991
*/
