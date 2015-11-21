/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 5
 * Date: November 20, 2015
 * Tim is the name of the inebriated man.
 */

package randomwalk;

import java.util.*;

/**
 * This class simulates an inebriated man, Tim, walking down a hallway.
 */

public class WalkClass 
{

    private boolean facing;  //direction Tim is facing
    private int stepsToDoor; //Amount of steps to door
    private int[] stepsOnBlock;  //Array that hold the amount of times a block
                                 //is stepped on.
    private Random rand;  //random class
    private int timed;
    
    /** 
     * Constructs WalkClass without a seed.
     */
    public WalkClass()
    {
        facing = true;
        stepsToDoor = 50;
        stepsOnBlock = new int[50];
        stepsOnBlock[0]=1;
        rand = new Random();  //instantiates an object of Random class
    }
    
    /**
     * Constructs the WalkClass with a seed.
     * @param seed - the seed that will be used by Random
     */
    public WalkClass(int seed)
    {
        facing = true;
        stepsToDoor = 50;
        stepsOnBlock = new int[50];
        stepsOnBlock[0]=1;
        rand = new Random(seed); //instantiates an object of Random class
    }
    
    /**
     * Simulates the movement of Tim after a move has been received.
     */
    private void stepSimulator()
    {
        int position = 0;  //starting position at elevator
        int time = 0;
        //If the last block has not been stepped on, continue moving
        while(position<49)
        {
                int move;
                String moved = "";
                //Performs this block if Tim is facing the door
                if(facing)
                {
                    move = getForwardMove();
                    if(move==1)
                    {
                        stepsOnBlock[position++]++;  //adds one to the next 
                                                     //block
                        moved = "he moves forward one block";
                    }
                    if(move==2)
                    {
                        //If position is 0 and Tim is going backwards
                        //add one to the current block
                        if(position==0)
                        {
                            stepsOnBlock[position]++;
                            moved = "he does nothing";
                        }
                        else{
                            stepsOnBlock[position--]++; //adds one to the 
                                                        //previous block
                            moved = "he moves backward one block";
                        }  
                    }
                    if(move==3)
                    {
                        stepsOnBlock[position]++;  //add one to the current 
                                                   //block
                        changeState();  //change the direction Tim is 
                                        //facing
                        moved = "he turns around";
                    }
                    if(move==4){
                        stepsOnBlock[position]++;  //add on to the current
                                                   //block
                        moved = "he does nothing";
                    } 
                    time++;
                    System.out.println("Position: "+position+" "+"Time: "
                            +time+" Looking at the door, "+moved);
                }
                //Performs this block if Tim is facing the elevator
                else
                {
                    move = getBackwardMove();
                    if(move==1)
                    {
                        //If position is 0 and Tim is going backwards
                        //add one to the current block
                        if(position==0)
                        {
                            stepsOnBlock[position]++;
                            moved = "he does nothing";
                        }
                        else
                        {
                            stepsOnBlock[position--]++; //adds one to the 
                                                        //previous block
                            moved = "he moves forward one block";
                        } 
                    }
                    if(move==2)
                    {
                        stepsOnBlock[position++]++; //add one to the next
                                                    //block
                        moved = "he moves backward one block";
                    }
                    if(move==3)
                    {
                        stepsOnBlock[position]++; //add one to the
                                                  //current block
                        changeState(); //change the direction Tim is 
                                       //facing
                        moved = "he turns around";
                    }
                    if(move==4)
                    {
                        stepsOnBlock[position]++;  //adds one to the current
                                                   //block
                        moved = "he does nothing";
                    }
                    System.out.println("Position: "+position+" "+"Time: "+time
                            +" Looking at the the elevator, "+moved);
                }
                timed = time;
        }
    }
    
    /**
     * Creates a number tied to a certain move based on Random when he is 
     * facing the door.
     * @return the number of the move
     */
    private int getForwardMove()
    {
        double d = rand.nextDouble()*100;  //gets a random double
        //Returns one if d is 55
        if (d<55) return 1;
        //Returns two if d is 25
        else if (d<80) return 2;
        //Returns three if d is 25
        else if (d<85) return 3;
        //Returns four if d is anything else
        return 4;
    }
    
    /**
     * Creates a number tied to a certain move based on Random when he is 
     * facing the elevator
     * @return the number of the move
     */
    private int getBackwardMove()
    {
        double d = rand.nextDouble()*100;  //gets a random double
        //Returns one if d is 55
        if (d<25) return 1;
        //Returns two if d is 25
        else if (d<50) return 2;
        //Returns three if d is 25
        else if (d<85) return 3;
        //Returns four if d is anything else
        return 4;
    }
    
    /**
     * Changes the direction that Tim is facing
     */
    private void changeState()
    {
        facing = !facing;
    }
    
    public int timeCounter()
    {
        stepSimulator();
        return timed;
    }
    
    /**
     * Prints the amount of times each block has been stepped on.
     */
    public void toPrint()
    {
        stepsOnBlock[stepsOnBlock.length-1]=1;
        for(int x=0;x<stepsToDoor;x++)
        {
            System.out.println("Block " + x+": "+ stepsOnBlock[x] 
                    + " steps");
        }
    }
    
}
