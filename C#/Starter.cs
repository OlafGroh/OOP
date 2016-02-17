using System;

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Starter
{
    static public void Main ()
    {
      /* einige Testdaten */
      /* some testdata */
      Baum    b1 = new Baum("Eiche", 2012, 299, 25);
      Baum    b2 = new Baum("Pappel", 2010, 199, 15);
      Liane   l1 = new Liane("Gemeiner Efeu", 1990, 15);
      Strauch s1 = new Strauch("Stechapfel", 1999, 2.5f, true);

      Console.WriteLine("Baum: "    + b1.getInfo());
      Console.WriteLine("Baum: "    + b2.getInfo());
      Console.WriteLine("Liane: "   + l1.getInfo());
      Console.WriteLine("Strauch: " + s1.getInfo());
    }
}
