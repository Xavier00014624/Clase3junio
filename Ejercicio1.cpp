#include <iostream>
using namespace std;

int suma(int n1, int n2)
{
    int resultado = 0;
    resultado = (n1 + n2);

    return resultado;
}
int resta(int n1, int n2)
{
    int resultado = 0;
    resultado = (n1 - n2);

    return resultado;
}
int multiplicacion(int n1, int n2)
{
    int resultado = 0;
    resultado = (n1 * n2);

    return resultado;
}
double division(double n1, double n2)
{
    double resultado = 0;
    resultado = (n1 / n2);

    return resultado;
}
int main()
{
    double n1, n2, respuesta, respuesta2, respuesta3, respuesta4;
    n1 = 5;
    n2 = 1;
    respuesta = suma(n1, n2);
    respuesta2 = resta(n1, n2);
    respuesta3 = multiplicacion(n1, n2);
    respuesta4 = division(n1, n2);

    cout << "El resultado de la suma es " << respuesta<<"\n";
    cout << "El resultado de la resta es " << respuesta2<<"\n";
    cout << "El resultado de la multiplicacion es " << respuesta3<<"\n";
    cout << "El resultado de la division es " << respuesta4<<"\n";

    return 0;
}
