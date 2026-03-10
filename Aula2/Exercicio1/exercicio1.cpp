#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <locale>
using namespace std;
float raioCirculo, areaCirculo;

int main()
{
    SetConsoleOutputCP(65001); // permite que o terminal mostre caracteres utf-8 corretamente
    setlocale(LC_ALL, "pt_BR.utf8"); // permite usar acentuação e interpretar caracteres utf-8
    cout << "Digite o raio do círculo: ";
    cin >> raioCirculo;
    areaCirculo = M_PI * raioCirculo * raioCirculo; // M_PI é uma função do <cmath> combinado com #define _USE_MATH_DEFINES que armazena o valor de PI
    cout << "A área do círculo é: " << fixed << setprecision(4) << areaCirculo << endl; // setprecision(4) para mostrar somente 4 casas decimais.
    return 0;
}