#include <iostream>
#include <iomanip>

using namespace std;

double calcular_pi()

{
    double pi_estimado = 0.0;
    int denominador = 1;
    int signo = 1;
    double precision = 0.000001;

    while (true)
    {
        double termino = static_cast<double>(signo) / denominador;
        pi_estimado += termino;

        if (abs(pi_estimado - 3.141592) < precision)
            break;

        denominador += 2;
        signo *= -1;
    }

    return pi_estimado;
}

int main()
{
    double valor_pi = calcular_pi();

    cout << fixed << setprecision(7);
    cout << "El valor aproximado de π es: " << valor_pi << endl;
    cout << "Program finished" << endl;

    return 0;
}

