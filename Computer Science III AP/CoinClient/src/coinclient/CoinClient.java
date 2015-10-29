/** 
 *	Programmer -- Kyle Beadle
 *	Computer Science III - AP
 *	Third Period
 *	Assignment Number 3
 *	Date: October 2, 2015
 *
 */
 
package coinclient;

public class CoinClient {
    
    public static void main(String[] args) {
        Coin c1 = new Coin("dollar");
        Coin c2 = new Coin("half");
        Coin c3 = new Coin("quarter");
        Coin c4 = new Coin("dime");
        Coin c5 = new Coin("nickel");
        Coin c6 = new Coin("penny");
        
        System.out.println("c6 is a " + c6.getName() + " and it is worth "
        					+ c6.getCoinValue());
        System.out.println("c5 is a " + c5.getName() + " and it is worth "
        					+ c5.getCoinValue());
        System.out.println("c4 is a " + c4.getName() + " and it is worth "
        					+ c4.getCoinValue());
        System.out.println("c3 is a " + c3.getName() + " and it is worth "
        					+ c3.getCoinValue());
        System.out.println("c2 is a " + c2.getName() + " and it is worth "
        					+ c2.getCoinValue());
        System.out.println("c1 is a " + c1.getName() + " and it is worth "
        					+ c1.getCoinValue());
        					
        System.out.println("\n");
        System.out.println("coin 1 is " + c1);
    }
}
