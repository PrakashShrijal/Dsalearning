limport java.rmi.*;
import java.rmi.server.*;
public class AdderRemote extends UnicastRemoteObject
eqrit
ecur
implements Adder{
AdderRemote() throws RemoteException{super();}
public int add(int x,int y) throws RemoteException
{return x+y;}}
Firefo
Goog