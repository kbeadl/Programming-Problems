/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 5
 * Date: November 20, 2015
 * 
 * Problem Statement - A client program for the Walk class that simulates an
 *                     inebriated man walking down a hallway. This client
 *                     tests three times, two based on the clock and the third
 *                     on a seed.
 */
package randomwalk;


public class RandomWalk 
{
    
    public static void main(String[] args) 
    {
        //Test One
        System.out.println("Test One:");
        WalkClass walk = new WalkClass(); //Creates a new object
        int counter = walk.timeCounter();  //number of steps
        walk.toPrint();  //prints the amount of times each block has been 
                         //stepped on.
        //Outputs the amount of steps taken to the door.
        System.out.println("It took "+counter+" time units to get to the"+
                " door");
        System.out.println();
   
        //Test Two
        System.out.println("Test Two:");
        WalkClass walk2 = new WalkClass(); //Creates a new object
        int counter2 = walk2.timeCounter(); //number of steps
        walk2.toPrint(); //prints the amount of times each block has been 
                         //stepped on.
        //Outputs the amount of steps taken to the door.
        System.out.println("It took "+counter2+" time units to get to the "
                + "door");
        System.out.println();
        
        //Test three
        System.out.println("Test Three:");
        WalkClass walk3 = new WalkClass(111315); //Creates a new object
        int counter3 = walk3.timeCounter(); //number of steps
        walk3.toPrint(); //prints the amount of times each block has been 
                         //stepped on.
        //Outputs the amount of steps taken to the door.
        System.out.println("It took "+counter3+" time units to get to the"+
                " door");
        System.out.println();
 
    }
    
}

