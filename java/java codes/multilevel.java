class Game {
String gameName;
String developer;

void setGamedetail(String gn, String dv ){
gameName = gn;
developer = dv;
}
}
class PUBG  extends Game{
String mode;
String map;
 void setPUBGDetails(String mo, String ma){
mode = mo;
map = ma;
}
}
class Match extends PUBG{
int  totalPlayer;
String  winner;
 void setMatchDetails(int tp, String wi){
totalPlayer = tp;
winner = wi;
}
 void display(){
System.out.print("Game name :" + gameName +"\n");
System.out.print("Developer  name :" + developer +"\n");

System.out.print("Mode  name :" + mode +"\n");
System.out.print("Map name :" + map +"\n");

System.out.print("Total player   :" + totalPlayer +"\n");
System.out.print("Game Winner  :" + winner +"\n");


}
}

class multilevel{
public static void main (String[] args){
Match match = new Match();
match.setGamedetail("PUBG Mobile","Tencent Games");
match.setPUBGDetails("Classic","Erangel");
match.setMatchDetails(100,"PRAKASH SHRIJAL ");
match.display();

}
}