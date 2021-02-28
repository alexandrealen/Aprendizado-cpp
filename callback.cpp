#include <iostream>
#include <string>
using namespace std;

string somarUm(int x)
{
    string foo = "valor final = " + to_string(x+1);
    return foo;
}

void printar(int x, string(*moo)(int))
{
    cout << moo(x);
}

int main()
{
    string(*func_ptr)(int);

    func_ptr = somarUm;

    printar(1, somarUm);
    
}


