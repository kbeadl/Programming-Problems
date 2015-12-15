/** 
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 5
 * Date: December 14, 2015
 */
import java.util.ArrayList;
import java.util.Random;
/**
 * Class that simulates a piggy bank that can hold coins.
 */

public class PiggyBank {

    private ArrayList <Coin> piggyBank;  //array of coins
    
    /**
     * Constructor method that creates the piggyBank array.
     */
    public PiggyBank()
    {
        piggyBank = new ArrayList<Coin>();  //instantiates arrayList
    }
    
    /**
     * Adds a coin object to the piggyBank
     * @param c - coin object that will be added
     */
    public void add(Coin c)
    {
        piggyBank.add(c);
    }
    
    /**
     * Removes a coin by name from the piggyBank
     * @param name - name of the coin to be removed
     * @return a coin object from piggyBank
     */
    public Coin remove(String name)
    {
        if(piggyBank.isEmpty())return new Coin(null);
        for(int i=0;i<piggyBank.size();i++)
        {
            String value = piggyBank.get(i).getName();
            if(value.equals(name))
            {
                Coin coin1 = piggyBank.get(i);
                piggyBank.remove(i);
                return coin1;
            }
        }
        return new Coin(null);
    }
    
    /**
     * Removes a random coin from the piggyBank
     * @return a random coin object from piggyBank
     */
    public Coin removeRandomCoin()
    {
        int minimum = 0;
        int maximum = piggyBank.size();
        int randomNum = minimum + (int)(Math.random()*maximum); 
        Coin returned = piggyBank.get(randomNum);
        piggyBank.remove(randomNum);
        return returned;  
    }
    
    /**
     * Checks to see if a certain coin is in the bank
     * @param x - a coin object that will be checked
     * @return true if the coin if in the piggyBank, false otherwise
     */
    public boolean contains(String xSS)
    {
       if(piggyBank.isEmpty()) return false;
       
       for(int i =0;i<piggyBank.size();i++)
       {
           String value1 = piggyBank.get(i).getName();
           String valuex = piggyBank.get(i).getName();
           if(value1.equals(valuex)) return true;
       }
       return false;
    }
    
    /**
     * Gets enough coins to equal or greater value of the amount needed
     * @param amount - the value that the coins should equal
     * @return an array of coins
     */
    public ArrayList<Coin> getAmount(double amount)
    {
        ArrayList<Coin> listOfCoins = new ArrayList <Coin>();
        double total = 0;
        int counter =0;
        while(total<amount&&counter<piggyBank.size())
        {
            Coin coin1 = piggyBank.get(counter);
            total += coin1.getCoinValue();
            listOfCoins.add(piggyBank.get(counter));
            piggyBank.remove(counter);
        }
        return listOfCoins;
    }
    
    /**
     * Creates a string that contains the name of all the coins in the bank.
     */
    public String toString()
    {
        String allNames = "";
        for(int x =0;x<piggyBank.size();x++)
        {
            allNames+=piggyBank.get(x).getName();
            allNames+=" ";
        }
        return allNames;
    }
}
