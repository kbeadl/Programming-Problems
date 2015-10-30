/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 3 Part 2
 * Date: October 26, 2015
 * 
 * Problem Statement: Simulates a the movement of cars through a tollbooth and
 * tracks the amount that needs to be paid and the amount that each car has paid
 */

package trafficsimulator;

import java.util.Scanner;  //class that allows users to input date

public class TrafficSimulator {

    public static void main(String[] args) {
        
        //Takes in the amount of the toll charge from the user
        Scanner input = new Scanner(System.in);
        System.out.print("What is the toll charge? $");
        double tollCharge = input.nextDouble();
        System.out.println("");
        //Creates a tollbooth object with the tollcharge that the user entered
        TollBooth toll = new TollBooth(tollCharge);
        double amountPaid = 0.0;  //tracks the amount of the charge that the 
                                  //user has paid
        
        String carPresent="yes";  //variable that checks for a car at the toll
	System.out.println(toll.toString());
        
        //Checks to see if there is a car at the tollbooth
        do
        {
            //Checks to see if the tollCharge paid has been met
            while(amountPaid<tollCharge)
            {
                //Gets the coin that the user will enter
                System.out.print("Please enter a coin :  ");
                Scanner coinInput = new Scanner(System.in);
                String coinEntered = coinInput.next();
                Coin coin = new Coin(coinEntered);
                //Gets the value of the coin entered by the user
                double coinValue = coin.getCoinValue();
                amountPaid+=coinValue;
                //Pays the toll with the coin entered by the user
                toll.pay(coin);
            }
            System.out.println("Car passes...Vroom Vroom");
            toll.closeGate();
            //Allows the user to enter if there is another car at the booth
            Scanner input2 = new Scanner(System.in); //User input
            amountPaid=0;  //sets the amountPaid tracker back to 0
            System.out.println("");
            //Allows the user to enter if there is another car at the booth
            System.out.print("Is there another car in line? Yes or No? ");
            carPresent = input2.next();
        }
        while(carPresent.toLowerCase().equals("yes"));  //Checks to see a car is
                                                        //present
    }
    
}

