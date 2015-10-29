/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Second Period
 * Assignment Number 1
 * Date: September 14, 2015
 */

package clockclient;
 
public class ClockClient {
    public static void main(String[] args) {
       ClockClass c1 = new ClockClass();
       System.out.println(c1.getFormatted());
       
       ClockClass c2 = new ClockClass(8,9);
       System.out.println(c2.getFormatted());
       
       int hours = c2.getHour();
       int minutes = c2.getMinutes();
       System.out.println("clock 2 hours is " + hours);
       System.out.println("clock 2 minutes is " + minutes);
       
       ClockClass c3 = new ClockClass(10,55);
       System.out.println ("Clock 3 times");
       System.out.print ("   "+c3.getFormatted());
       for (int t=0;t<181;t++){
       		c3.plusOneMinute();
       		System.out.print("   "+c3.getFormatted());
       }
       
       System.out.println("\n\n\n");
    }
    
}
