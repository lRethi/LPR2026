#include <iostream>
#include <windows.h>
#include <iomanip>
#include <locale>
using namespace std;
float raioCirculo, areaCirculo;
int numA, numB, numC, numD, produtoAB, produtoCD, difABxCD;

int main()
{
    SetConsoleOutputCP(65001); // permite que o terminal mostre caracteres utf-8 corretamente
    setlocale(LC_ALL, "pt_BR.utf8"); // permite usar acentuação e interpretar caracteres utf-8
    cout << "Digite os 4 primeiros números inteiros que serão usados:" << endl;
    cin >> numA >> numB >> numC >> numD;
    produtoAB = numA * numB; // multiplica A por B
    produtoCD = numC * numD; // multiplica C por D
    difABxCD = produtoAB - produtoCD; // pega o valor da diferença dos dois
    cout << "A diferença dos produtos de " << numA << " e " << numB << " por " << numC << " e " << numD << " é de " << difABxCD << "." << endl;
    return 0;
}