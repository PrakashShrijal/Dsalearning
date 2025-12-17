class RegularTv{
void showChannel(){
System.out.println("Showing basic cable channels.");
}
}

class SmartTv extends RegularTv{
@Override
void showChannel(){
System.out.println("Showing basic cable channels + Youtube, Netflix and PrimeVideos.");
}
}

class TvTest{
public static void main(String [] args){

RegularTv myTv = new RegularTv();
SmartTv mySmartTv = new SmartTv();

System.out.println("Regular Tv :");
myTv.showChannel();

System.out.println("\nsmart Tv :");
mySmartTv.showChannel();



}
}