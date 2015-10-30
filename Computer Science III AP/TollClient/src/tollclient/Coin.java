/** 
 *	Programmer -- Kyle Beadle
 *	Computer Science III - AP
 *	Third Period
 *	Assignment Number 3
 *	Date: October 2, 2015
 */

/**
 *	Simulates a U.S. coin by name and value.
 */

package tollclient;

public class Coin
{
	private final double PENNY = 0.01;	   //Value of a penny
	private final double NICKEL = 0.05;	   //Value of a nickel
	private final double DIME = 0.10;	   //Value of a dime
	private final double QUARTER = 0.25;	   //Value of a quarter
	private final double HALF_DOLLAR = 0.50;   //Value of a half dollar coin
	private final double DOLLAR = 1.00;	   //Value of a dollar coin
	private String name;
	
	/** Constructor that sets a default coin name.
	 */
	
	public Coin()
	{
		name = "penny";
	}
	
	/** Constructor that allows the user to set the coin name.
	 *	@param n - name of the coin that the user assigns
	 */
	
	public Coin(String n)
	{
		String lower = n.toLowerCase();
		name = lower;
	}
	
	/** Method that gets the name of the coin in the object.
	 *	@return name - the name of the coin
	 */
	
	public String getName()
	{
		return name;	
	}
	
	/** Method that gets the value of a coin based on its name.
	 *	@return value - the value of the coin
	 */
	
	public double getCoinValue()
	{
		double value=0;
		//Assigns the value of a coin based on its name
		switch(name){
			case "penny": value = PENNY; break;
			case "nickel": value = NICKEL; break;
			case "dime": value = DIME; break;
			case "quarter":value = QUARTER; break;
			case "half":value = HALF_DOLLAR; break;
			case "dollar":  value = DOLLAR; break;
			
		}
		return value;
	}
	
	/** Method that returns the name and value of a coin in one string.
	 *	@return combined - the string that contains both the name and 
         *                         the value
	 */
	
	public String toString()
	{
		String formatted = String.format("%.2f",getCoinValue());
                //formats the coin
		//value
		String combined = name + " : $" + formatted;
		return combined;
	}
}
