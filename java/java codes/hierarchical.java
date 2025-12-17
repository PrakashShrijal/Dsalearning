class SolarSystem{
String planet;
String Star;
SolarSystem(String p,String s){
planet = p;
Star = s;
}
}

class Planet extends SolarSystem {
String habitable;
Planet(String p,String ha){
super(p,"");
habitable = ha;
}
void displayPlanet(){
System.out.println("Planet  Name : "+planet);
System.out.println("IS Habitable : "+ habitable);
}
}

class Star extends SolarSystem{
String shines;
Star(String s,String sh){
super("",s);
shines = sh;
}
void displayStar(){
System.out.println("Star Name : "+ Star);
System.out.println("Shines : "+ shines);

}
}

class hierarchical{
public static void main(String[] args){
Planet p  = new Planet("Earth","YES ");
Star s = new Star("Sun","YES");
p.displayPlanet();
System.out.println();
s.displayStar();

}
}