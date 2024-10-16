using System;

class Program
{
    static void Main()
    {
        // Zadanie 13

        for (int i = 0; i <= 10; i++)
        {
            Console.WriteLine(i);
        }

        // Zadanie 2

        for (int i = 100; i >= 50; i--)
        {
            Console.WriteLine(i);
        }

        // Zadanie 3
   
        int liczba;
        int suma = 0;
        int licznik = 0;

        do
        {
            Console.Write("Podaj liczbę (0 kończy program): ");
            liczba = int.Parse(Console.ReadLine());

            if (liczba != 0)
            {
                suma += liczba;
                licznik++;
            }

        } while (liczba != 0);

        Console.WriteLine("Suma wprowadzonych liczb: " + suma);
        Console.WriteLine("Ilość wprowadzonych liczb: " + licznik);

        // Zadanie 4
     
        Console.Write("Podaj pierwszą liczbę: ");
        int pierwsza = int.Parse(Console.ReadLine());

        Console.Write("Podaj drugą liczbę: ");
        int druga = int.Parse(Console.ReadLine());

        if (pierwsza < druga)
        {
            Console.WriteLine($"Liczby podzielne przez 3 z przedziału {pierwsza} - {druga}:");
            for (int i = pierwsza; i <= druga; i++)
            {
                if (i % 3 == 0)
                {
                    Console.WriteLine(i);
                }
            }
        }
        else
        {
            Console.WriteLine("Pierwsza liczba musi być mniejsza od drugiej.");
        }

        // Zadanie 5

        Console.Write("Podaj liczbę dziesiętną: ");
        int liczbaDziesietna = int.Parse(Console.ReadLine());
        string liczbaBinarna = Convert.ToString(liczbaDziesietna, 2);
        Console.WriteLine("Liczba binarna: " + liczbaBinarna);

        // Zadanie 6
        Console.Write("Podaj wysokość trójkąta: ");
        int wysokosc = int.Parse(Console.ReadLine());

        for (int i = wysokosc; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
}