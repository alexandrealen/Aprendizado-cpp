#include <iostream>
#include <vector>

using namespace std;

int main(){
    //declaracao de variaveis
    int n, k, valor, temp;
    vector<int> quadrado;
    int contador = 0;

    //leitura dos dados de entrada
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> valor;
        quadrado.push_back(valor);
    }

    //estrutura de repeticao para fazer a contagem
    /*a intencao eh ver se o quadrado 'i' bate com o 'k'
    caso sim, aumenta o contador, caso nao parte loop debaixo
    que soma o quadrado 'i' com seu consecutivo, caso bata com k, aumenta o contador
    caso nao bata, armazena o valor em 'temp' e soma temp com o quadrado consecutivo
    isso se repete ate o fim do vetor, e entao se inicia uma nova contagem a partir do
    quadrado 'i++'
    */
    for(int i=0; i<quadrado.size(); i++)
    {
        temp = quadrado[i];
        if(quadrado[i]==k) contador++;
            for(int j=1; j<n; j++)
            {
                temp = temp + quadrado[j];

                if(temp==k)contador++;

                else if(temp>k) break;
            }
    }
    cout << contador;


}
