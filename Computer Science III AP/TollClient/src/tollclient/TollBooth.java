/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 3 Part 2
 * Date:
 */

package tollclient;

/**
 * Simulates a toll booth and the various methods that toll booths carry out.
 */

public class TollBooth 
{
    private double tollCharge, chargePayed;
    private boolean gateState;
    
    /** Constructor that allows the user to create the charge for a tollbooth.
     * @param charge - the charge that must be paid to open the toll gate
     */
    
    public TollBooth(double charge)
    {
        tollCharge = charge;
        chargePayed = 0;
        gateState = false;
    }
    
    /** Method that returns if the gate is open
     * @return gateState - true if the gate is open; false otherwise
     */
    
    public boolean getStatus ()
    {
        return gateState;
    }
    
    public double getTollCharge()
    {
        return tollCharge;   //Make sure to distinguish what true and false are
    }
    
    /** Method that allows the user to pay the charge based on the Coin class.
     * @param payment - the coin that will be deposited to pay the charge
     */
    
    public void pay (Coin payment)
    {
        double value = payment.getCoinValue();
        chargePayed += value;
        if (chargePayed >= tollCharge)
        {
            openGate();
        }
        else System.out.println("Please enter another coin.");
    }
    
    /** Method that gets the amount that the user has paid to the tollbooth.
     * @return chargePayed - the amount that has been paid to the tollbooth
     */
    
    public Double getAmountPaid ()
    {
        return chargePayed;
    }
    
    /** Method that sets the state of the gate to open, and prints it.
     */
    
    public void openGate()
    {
        if (chargePayed > tollCharge)
        {
            gateState = true;
            System.out.println("Gate open...");
        }
        else
        {
            System.out.println("Please enter more money to open the gate!");
        }
    }
    
    /** Method that sets the state of the gate to close, and prints it.
     */
    
    public void closeGate()
    {
        gateState = false;
        chargePayed = 0;
        System.out.println("Gate closed...");
    }
    
    /** Method that returns all the data of the object.
     * @return allData - all of the object's data formatted into a string
     */
    
    public String toString()
    {
        String gate ="";
        if (gateState==true)gate = "Open";
        else gate="Closed";
        String allData=String.format("Toll Charge: $%.2f | Gate Condition: " + 
                 gate + " | Amount Paid: $%.2f",tollCharge,chargePayed);
        return allData;
    }
}
