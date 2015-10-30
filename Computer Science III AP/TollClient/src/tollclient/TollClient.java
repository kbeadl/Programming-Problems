/*
 *
 * Kyle Beadle
 * 
 *
 * Driver program to test TollBooth class in program 3 part 2
 *
 * Modify class and method names/parameters to match your TollBooth class
 * 
 * Print this driver, your tollbooth class, and results.
 * Place in the class box.
 */
package tollclient;

public class TollClient
{
    public static void main(String args[])
    {
        System.out.println ("starting toll booth driver");
        TollBooth boothOne = new TollBooth( 1.20); 
        TollBooth boothTwo = new TollBooth(0.95);
        System.out.println("booth one is " + boothOne.getStatus());
        double  toll = boothOne.getTollCharge();
        boothOne.pay (new Coin ("quarter"));
        double owed = toll - boothOne.getAmountPaid( );
        System.out.println("you have paid $" + boothOne.getAmountPaid( ) 
            + " towards the toll of $" + boothOne.getTollCharge( ));
        System.out.println("you still owe $" + owed);
        boothOne.pay (new Coin ("dollar"));
        //boothOne.openGate( );   // comment out if gate opens automatically 
                                // when full toll is paid
        System.out.println ("the booth is now " + boothOne.getStatus());
        boothOne.closeGate();
        System.out.println();
        System.out.println ("booth One ");
        printStatus (boothOne);
        System.out.println();
        
        System.out.println ("booth Two ");
        printStatus (boothTwo);         
        System.out.println();   
        System.out.println ("booth One is " + boothOne);
    }
    
    public static void printStatus( TollBooth booth)
    {
        System.out.println();
        System.out.println("Current conditions");
        System.out.println ("status is " + booth.getStatus());
        System.out.println("Toll amount is $" + booth.getTollCharge());
        System.out.println("Amount paid towards toll is $"
                               + booth.getAmountPaid( ) );
        System.out.println(); 
    }   
}
