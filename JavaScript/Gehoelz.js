
/*
 * Konstruktormethode um alle Attribute zu initialisieren
 */
function Gehoelz(art, pflanzjahr, preis) {
    
	if (this.constructor === Gehoelz) {
        throw new Error("Fehler abstract class!");
      }
    
	/*
	 * Alle übergebene Parameter in die Attribute der Klasse speichern,
	 * da diese sonst nach dem Konstruktor nicht mehr vorhanden sind!
	 */
	var art		= art;
	var pflanzjahr	= pflanzjahr;
	var preis		= preis;
	
	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	this.getArt = function() {
		return art;
	}

	this.setArt = function(art) {
		this.art = art;
	}

	this.getPflanzjahr = function() {
		return pflanzjahr;
	}

	this.setPflanzjahr = function(pflanzjahr) {
		this.pflanzjahr = pflanzjahr;
	}

	this.getPreis = function() {
		return preis;
	}

	this.setPreis = function(preis) {
		this.preis = preis;
	}

	/*
	 * Methode getInfo, diese muss von jeder (ausser Liane) überschriben werden,
	 * wenn die Methode gleich lautet und die gleichen Parameter übernimmt und dennoch
	 * in der ableitenden Klasse eine andere Funktionalität aufweist, dann ist das 
	 * Polymorph!!
	 */
	this.getInfo = function() {
		return "Art: ".concat( art, " Pflanzjahr: ", pflanzjahr, " Preis: ", preis);
	}	
	
}