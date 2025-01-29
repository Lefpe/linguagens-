using System;

class Program
{
    // Método que calcula o quadrado de um número
    static int Quadrado(int num)
    {
        int resultado = num * num; // Variável local
        return resultado;
    }

    // Método que calcula o dobro de um número sem modificar o original
    static int DobroSemModificar(int num)
    {
        return num * 2;
    }

    // Método que modifica o valor original usando ref
    static void DobroModificando(ref int num)
    {
        num *= 2;
    }

    // Métodos sobrecarregados para soma
    static int Soma(int a, int b)
    {
        return a + b;
    }

    static int Soma(int a, int b, int c)
    {
        return a + b + c;
    }

    static double Soma(double a, double b)
    {
        return a + b;
    }

    static void Main()
    {
        int num = 5;
        Console.WriteLine($"Quadrado de {num}: {Quadrado(num)}");
        
        Console.WriteLine($"Dobro de {num} sem modificar: {DobroSemModificar(num)}");
        
        DobroModificando(ref num);
        Console.WriteLine($"Dobro de {num} modificando: {num}");
        
        Console.WriteLine($"Soma de 2 e 3: {Soma(2, 3)}");
        Console.WriteLine($"Soma de 1, 2 e 3: {Soma(1, 2, 3)}");
        Console.WriteLine($"Soma de 1.5 e 2.5: {Soma(1.5, 2.5)}");
    }
}
