using System;
using System.Collections.Generic;
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

      /* Objekt vom Typ Gaertnerei erstellen */
      /* create an object from type Gaertnerei */
      Gaertnerei gae1 = new Gaertnerei();

      /* testen der einkaufen Methode einkaufen */
      /* test the einkaufen method */
      gae1.einkaufen(b1);
      gae1.einkaufen(b2);
      gae1.einkaufen(l1);
      gae1.einkaufen(s1);

      /* testen der verkaufen Methode einkaufen */
      /* test the verkaufen method */
      gae1.verkaufen("Eiche" , 2012);

      /* testen der getWoodByLimit Methode einkaufen */
      /* test the getWoodByLimit method */
      List<Gehoelz> tmp;
      tmp = gae1.getWoodByLimit(199.01f);

      /* testen ob die Methode die richtigen Werte zurück liefert */
      /* test if the returnvalues of the method are right */
      Console.WriteLine();
      for(int c=0; c<tmp.Count; c++) {
        Console.WriteLine("[" + c + "] = " + tmp[c].getInfo() );
      }

      /* die Methodeerweiterungen der Klassen Baum und Strauch testen */
      /* test of the extension of the classes Baum and Strauch */
      Console.WriteLine();
      for(int c=0; c<tmp.Count; c++) {
        Gehoelz objtmp = tmp[c];
        if( objtmp is Baum) {
            Baum baum = (Baum)objtmp;
            Console.WriteLine("Instanz war vom Typ Baum: Art=" + baum.getArt() + " maximale Höhe=" + baum.getMaxHoehe() );
        }else if( objtmp is Liane) {
          Liane liane = (Liane)objtmp;
          Console.WriteLine("Instanz war vom Typ Liane : Art=" + liane.getArt() );
        }else if( objtmp is Strauch) {
          Strauch strauch = (Strauch)objtmp;
          Console.WriteLine("Instanz war vom Typ Strauch : Art=" + strauch.getArt() + " ist Giftig=" + strauch.getIstGiftig() );
        }
      }
    }
}
