/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 2
 * Date: September 28, 2015
 * 
 * Problem Statement - Allow a user to enter a date a reprint it in various ways
*/

package daycalculator;

import javax.swing.JOptionPane;  //Library for a GUI

public class DayCalculator {
    
    public static void main(String[] args) {
       String str = JOptionPane.showInputDialog("Enter the date in mm/dd/yyyy"+ 
                    " format: \n Please include necessary leading zeros.");
                    //str - date that the user inputs
       int mNum = Integer.parseInt(str.substring(0,2)); //number of the month
       int day = Integer.parseInt(str.substring(3,5));  //day of the month
       int year = Integer.parseInt(str.substring(6));   //year
       DayCalculatorClass day1 = new DayCalculatorClass(mNum,day,year);
                                //creating a new object based on users input
       
       //Dialog boxes that tell the user their data in various formats
       JOptionPane.showMessageDialog(null, day1.getNumberFormat());
       JOptionPane.showMessageDialog(null, day1.getDayOfTheWeek());
       JOptionPane.showMessageDialog(null, day1.getFullFormat());
    }
}
