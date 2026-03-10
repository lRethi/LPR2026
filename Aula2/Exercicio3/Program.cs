using System;
using System.Linq.Expressions;
using static System.Console;
class Aula2
{
    static void Main()
    {
        int numFunc;
        float horasTrab;
        float valHora;

        Write("\nEntre com o número do funcionário: ");
        numFunc = int.Parse(ReadLine());
        Write("\nEntre com quanto ele recebe por hora: ");
        valHora = Convert.ToSingle(ReadLine());
        Write("\nEntre com quantas horas ele trabalhou: ");
        horasTrab = Convert.ToSingle(ReadLine());
        Write($"\nO funcionário nº{numFunc} terá um salário de R${(horasTrab*valHora).ToString("N2")}"); // toString("N2") para fazer mostrar duas casas decimais em forma especifica pra moeda
    }
}