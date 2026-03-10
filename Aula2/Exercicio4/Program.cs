using System;
using static System.Console;

class Aula2
{
    static void Main()
    {
        int codePeca1,codePeca2;
        float valUnit1, valUnit2;
        int numPeca1, numPeca2;

        Write("\nEntre com o código, valor e número de compras da primeira peça: ");
        codePeca1 = int.Parse(ReadLine());
        numPeca1 = int.Parse(ReadLine());
        valUnit1 = Convert.ToSingle(ReadLine());

        Write("\nEntre com o código, valor e número de compras da segunda peça: ");
        codePeca2 = int.Parse(ReadLine());
        numPeca2 = int.Parse(ReadLine());
        valUnit2 = Convert.ToSingle(ReadLine());

        float valorPagar = (valUnit1 * numPeca1) + (numPeca2 * valUnit2);
        Write($"\nPeça {codePeca1}: R${valUnit1.ToString("N2")}, Qnt. x{numPeca1}, Total: R${(valUnit1*numPeca1).ToString("N2")}.");
        Write($"\nPeça {codePeca2}: R${valUnit2.ToString("N2")}, Qnt. x{numPeca2}, Total: R${(valUnit2*numPeca2).ToString("N2")}.");
        Write($"\nO valor à pagar para todas as peças será de R${valorPagar.ToString("N2")}"); // toString("N2") para fazer mostrar duas casas decimais em forma especifica pra moeda

    }
}