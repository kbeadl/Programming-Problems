import java.util.ArrayList;
/**
 *
 * @author kb139167
 */
public class BankClient {
    public static void main(String [] args)
	{
            PiggyBank  pig = new PiggyBank( );
		System.out.println ("bank contents at the beginning : ");
		System.out.println (pig.toString() + "\n");
		pig.add( new Coin ("quarter"));
		pig.add( new Coin ("dime"));
		pig.add( new Coin ("penny"));
		pig.add( new Coin ("penny"));
		System.out.println ("bank contents at the point 1 : ");
		System.out.println (pig.toString( ) + "\n");		
				
		for  ( int times = 0; times < 10; times ++)
		{ 
		    if (times % 2 == 0 ) pig.add(new Coin ("quarter"));
		    if (times % 3 == 0 ) pig.add(new Coin("dime"));
		    if (times % 4 == 0 ) pig.add(new Coin("nickel"));
		    pig.add(new Coin("penny"));
		}
		
		System.out.println ("bank contents at point 2 : ");
		System.out.println (pig.toString( ) + "\n");
		
		Coin c1 = pig.remove("nickel");
		Coin c2 = pig.remove("penny");
		Coin c3 = pig.removeRandomCoin( );
		System.out.println ("coins removed are " + c1 + "\n" + c2 + 
                        "\n"+c3 + "\n");
		
		
		
		System.out.println ("bank contents at point 3 : ");
		System.out.println (pig.toString( ) + "\n");
		
		ArrayList<Coin> coinList = pig.getAmount (0.41);
		System.out.println ("coins removed " + coinList);
		System.out.println( );
		System.out.println ("nickel in the bank ? " + 
                        pig.contains("nickel"));
		System.out.println ("dime in the bank ? " + 
                        pig.contains("dime"));
		
		System.out.println ("bank contents at point 4 : ");
		System.out.println (pig.toString( ) + "\n");
	}
}
