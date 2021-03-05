#include <iostream>
#include<cmath>

double potencia(int index)
{
    double x = pow(2, index);
    index++;
    std::cout << x << std::endl;
    if (index > 8)
    {
        return x;
    }
    return potencia(index);
}

int main()
{
    potencia(0);

    return 0;
}