#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    char p[n][m];


    //construindo a matriz
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> p[i][j];
        }
    }

    //refazendo a matriz
    for(int i=0; i<n; i++)
    {
        //colocar agua pra direita
        for(int j = 0; j<m; j++)
        {
            if(p[i][j] == 'o' && p[i+1][j] == '#')
            {
               p[i][j+1] = 'o';
            }
            //condicao pra agua escorrer
            if(p[i+1][j+1] == '.' && p[i][j+1] == 'o')
            {
                p[i+1][j+1] = 'o';
            }

        }

        //colocar agua pra esquerda
        for(int j = m-1; j>=0; j--)
        {
            if(p[i][j] == 'o' && p[i+1][j] == '#')
            {
               p[i][j-1] = 'o';
            }
            //condicao pra agua escorrer
            if(p[i+1][j-1] == '.' && p[i][j-1] == 'o')
            {
                p[i+1][j-1] = 'o';
            }

        }

    }


    //escrevendo a matriz final
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout << p[i][j];
        }
        cout << endl;

    }
}
/*
9 14
.......o......
.###..#####.#.
..............
..######......
..............
.#.####....##.
..............
.....####.....
..............
*/
