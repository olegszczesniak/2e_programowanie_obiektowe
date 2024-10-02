using System;

public class program
{
    public static void Main(string[] args)
    {

        //ZADANIE 1

        /*  Console.WriteLine("Podaj x");
          double x = Convert.ToDouble(Console.ReadLine());
          Console.WriteLine("podaj y");
          double y = Convert.ToDouble(Console.ReadLine());

          string cwiartka;

          if (x < 0 && y > 0)
          {
              cwiartka = "lewa gora";
          }
          else if (x > 0 && y > 0)
          {
              cwiartka = "prawa gora";
          }
          else if (x < 0 && y < 0)
          {
              cwiartka = "lewy dol";
          }
          else if (x > 0 && y < 0)
          {
              cwiartka = "prawa dol";
          }
          else
          {
              cwiartka = "Linia Wykresu";
          }
          Console.WriteLine(cwiartka );
        */

        //ZADANIE 2

        Console.WriteLine("Podaj a");
        int a = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Podaj b");
        int b = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Podaj c");
        int c = Convert.ToInt32(Console.ReadLine());

        double obwod = a + b + c;
        double pole = (0.25 * (Math.Sqrt(4 * a * a * b * b - (a * a + b * b - c * c) * (a * a + b * b - c * c))));

        if (b + c > a && a + b > c && a + c > b)
        {
            Console.WriteLine("Można Zbudowac trojkat");
        }
        else 
        {
            Console.WriteLine("Nie można Zbudowac trojkata");
        }

        Console.WriteLine("Pole Trojkata: " + pole);
        Console.WriteLine("Obwod Trojkata: " + obwod);
        
    }
}
