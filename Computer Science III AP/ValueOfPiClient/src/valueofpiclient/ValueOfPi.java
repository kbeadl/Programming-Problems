/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 4
 * Date: November 9, 2015
 */

//package valueofpiclient;

import java.util.*;

/**
 * Simulates the finding of pi using a Monte Carlo / Geometric approach.
 */
public class ValueOfPi {
    int numberOfPoints;     
    
    /**
     * Constructor for the class.
     */
    public ValueOfPi()
    {
        numberOfPoints = 1000;
    }
    
    /**
     * Constructor for the class that takes in the number of points to create.
     * @param num - number of points
     */
    public ValueOfPi(int num)
    {
        numberOfPoints = num;
    }
    
    /**
     * Gets the value of pi based on the Monte Carlo/ Geometric approach
     * @return pi - the value of pi
     */
    public double getPi()
    {
        double hit =0;  //Points that are inside the circle
        for(int x=0;x<numberOfPoints;x++)
        {
            //Adds to hit if the point is in the circle
            if(checkPoint()) hit++;
        }
        return 4*(hit/numberOfPoints);  //approximation of pi
    }
    
    /**
     * Gets a random point on the x axis
     * @return a random point on the x axis
     */
    
    private double getX()
    {
        Random rand = new Random(); 
        return rand.nextDouble()*2;  //The x of a point
    }
    
    /**
     * Gets a random point on the y axis
     * @return a random point on the y axis
     */
    
    private double getY()
    {
        Random rand = new Random();
        return rand.nextDouble()*2;  //The y of a point
    }
    
    /**
     * Checks to see if the point is inside the circle
     * @return bool - true if the point is in the circle; false otherwise
     */
    
    private boolean checkPoint()
    {
        double x = getX();  //Gets a random x value
        double y = getY();  //Gets a random y value
        //Gets the distace between 1,1 and the point
        double distance = (Math.pow(x-1,2)+Math.pow(y-1,2));
        return distance<=1;
    }
    
}
