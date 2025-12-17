class PUBG{ 
String playerName;
String Gun;

PUBG(String p, String g){
playerName = p;
Gun = g;
}
}

class Health extends PUBG{

int playerH;
int GunLoad;

Health(String p, String g, int h, int load){
super(p, g);
playerH = h;
GunLoad = load;
}
void display(){
System.out.println("player :" + playerName);
System.out.println("Gun :" + Gun);
System.out.println("playerHealth :" + playerH);
System.out.println("GunLoad :" + GunLoad);


}
}

class Main2{
public static void main(String args[]){

Health player1 = new Health("prakash","AK47",100,57);

player1.display();
}
}