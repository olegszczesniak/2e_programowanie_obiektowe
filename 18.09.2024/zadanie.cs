using System;

public class Program
{

    public static void Main(string[] args)
    {
       Console.WriteLine("Zadanie 1");
        double a = 3.14;
        Console.WriteLine(a);

        Console.WriteLine("Zadanie 2");
        string b = "Oleg Szczesniak";
        Console.WriteLine(b);

        Console.WriteLine("Zadanie 3");
        int x = 10;
        double y = (Convert.ToDouble(x));
        Console.WriteLine(y);

        Console.WriteLine("Zadanie 4");
        double c = 10.78493;
        int d = Convert.ToInt32(c);
        Console.WriteLine(d);

        Console.WriteLine("Zadanie 5");
        Console.WriteLine("Podaj Napis: ");
        string napis = Console.ReadLine();
        Console.WriteLine(napis);
    }

}

