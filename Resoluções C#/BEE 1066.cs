using System;

namespace BEE1066
{
    class Program
    {
        static void Main()
        {
            int pares = 0, impares = 0, negativos = 0, positivos = 0;

            for (int i = 0; i < 5; i++)
            {
                int numero = int.Parse(Console.ReadLine());

                // Par ou ímpar
                if (numero % 2 == 0) pares++;
                else                 impares++;

                // Positivo ou negativo
                if (numero >= 0)     positivos++;
                else                 negativos++;
            }

            Console.WriteLine($"{pares} valor(es) par(es)");
            Console.WriteLine($"{impares} valor(es) impar(es)");
            Console.WriteLine($"{positivos} valor(es) positivo(s)");
            Console.WriteLine($"{negativos} valor(es) negativo(s)");
        }
    }
}
