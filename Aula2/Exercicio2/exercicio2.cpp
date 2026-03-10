#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
float raioCirculo, areaCirculo;
int numA, numB, numC, numD, produtoAB, produtoCD, difABxCD;

int main()
{
    SetConsoleOutputCP(65001); // arruma o output no console pra aceitar utf-8
    cout << "Digite os 4 primeiros números inteiros que serão usados:" << endl;
    cin >> numA >> numB >> numC >> numD;
    produtoAB = numA * numB; // multiplica A por B
    produtoCD = numC * numD; // multiplica C por D
    difABxCD = produtoAB - produtoCD; // pega o valor da diferença dos dois
    cout << "A diferença dos produtos de " << numA << " e " << numB << " por " << numC << " e " << numD << " é de " << difABxCD << "." << endl;
    return 0;
}