/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */


 /* Konstruktorfunktion:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
 /* Constructorfunction:store all parameters in the attributes of the base class, call the constructor of the base class */
  function Gaertnerei() {

    /* Attribute der Klasse */
    /* Attributes of the class */
    var pflanzen = [];
    //var pflanzen = new Array();


  /* Hinzufügen eines neuen Elementes zur ArrayList */
  /* add a new element to the ArrayList */
  this.einkaufen = function(g) {
    pflanzen.push(g);
  }


  /* Das Element mit geg. Art UND geg. Pflanzjahr wird aus der ArrayList entfernt */
  /* The element with given Art AND given. Pflanzjahr is removed from the ArrayList */
  this.verkaufen = function(art, pflanzjahr) {
    var tmp  = null;
    for(var count=0; count<pflanzen.length; count++) {
      tmp = pflanzen[count];
      if( tmp.getArt() == art && tmp.getPflanzjahr() == pflanzjahr) {
        pflanzen = pflanzen.slice(0,count).concat( pflanzen.slice(count+1) );
        //this.pflanzen.remove(count);
        return tmp;
      }
    }

    return null;
  }

  /* ArrayList mit allen Elementen erzeugen, deren Verkaufspreis kleiner wie der geg. ist */
  /* ArrayList generate with all elements whose selling price is less as the given */
  this.getWoodByLimit = function(preis) {
    var liste = [];
    tmp  = null;
    for(var count=0; count<pflanzen.length; count++) {
      tmp = pflanzen[count];
      if( tmp.getPreis() < preis) {
        liste.push(tmp);
      }
    }
    return liste;
  }

}
