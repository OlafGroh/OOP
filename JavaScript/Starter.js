function main() {
	
	/*
	 * ZUm Testen einige Objekte erstelt und die Methode getInfo aufgerufen
	 */
	
	var b1 = new Baum("Eiche", 2012, 299, 25);
	var b2 = new Baum("Pappel", 2010, 199, 15);
	
	var l1 = new Liane("qwe", 1990, 15);
	
	var s1 = new Strauch("Stechapfel", 1999, 2.5, true);
	
	console.log("Baum: ".concat(b1.getInfo()) );
	console.log("Baum: ".concat(b2.getInfo()) );	
	
	console.log("Liane: ".concat(l1.getInfo()) );
	
	console.log("Strauch: ".concat(s1.getInfo()) );
		
	
}
