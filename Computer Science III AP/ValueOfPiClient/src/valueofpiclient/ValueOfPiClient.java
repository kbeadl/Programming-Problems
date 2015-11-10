/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 4
 * Date: November 9, 2015
 * 
 * Problem Statement: Calculates an approximation of pi based on user I/O
 *                    using dialog boxes.
 */
//package valueofpiclient;

import javax.swing.JOptionPane;  //Allows for dialog boxes

public class ValueOfPiClient {

    public static void main(String[] args) {
        //User input for the number of points that will be used
        //Parses it from a string to an int
        int number = Integer.parseInt(JOptionPane.showInputDialog
                     ("Please enter the number of points: "));
        ValueOfPi pi = new ValueOfPi(number); //Finds pi created by random
        //Turns pi into a string to be outputted
        String piString = Double.toString(pi.getPi());
        //Outputs the approximation of pi that has been calculated
        JOptionPane.showMessageDialog
        (null,"The approxamation of pi is "+piString);
    }
    
}
