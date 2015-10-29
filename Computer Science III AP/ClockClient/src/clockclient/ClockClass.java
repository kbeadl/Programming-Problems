/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Second Period
 * Assignment Number 1
 * Date: September 14, 2015
 *
 * Problem Statement - Design a class that represents a 12 hour clock.
 */
 
/**
 * Represents a 12 hour clock that displays hours and minutes only
 */

package clockclient;
 
class ClockClass {
    
    private int minutes, hour;  //minutes - amount of minutes
    							//hour - amount of hours on a 12-hour clock
    
    /**
     * Constructor that sets the minutes and hour.
    */
    
    public ClockClass()
    {
        minutes = 30;
        hour = 12;
    }
    
    /**
     * Constructor that sets the minutes and hour based on the client.
     * @param h - integer representing hours
     * @param min - integer representing minutes
    */
    
    public ClockClass(int h, int min)
    {
        minutes = min;
        hour = h;
    }
    
    /**
     * Adds one minute to the current time.
    */
    
    public void plusOneMinute()
    {
    	//Checks for 12:59 so the hours stay on the 12-hour clock format
    	
        if (hour == 12 && minutes == 59)
        {
            hour = 1;
            minutes = 0; 
        }
        
        //Checks for just 59 minutes to raise the hour by one
        
        else if (minutes == 59) //
        {
            hour++;
            minutes = 0;
        }   
        
        //Raises the minutes by one
        
        else
        {
            minutes++;
        }
    }
    
    /**
     * Gets the current hour.
     * @return hour - the current hour
    */
    
    public int getHour()
    {
        return hour;
    }
    
    /**
     * Gets the current amount of minutes.
     * @return minutes - the current amount of minutes
    */
    
    public int getMinutes()
    {
        return minutes;
    }
    
    /**
     * Formats minutes and hours into HH:MM format.
     * @return format - the formatted string
    */
    
    public String getFormatted()
    {
        String minFormat, hourFormat;
        
        //Checks to see if amount of minutes is less than ten
        
        if (minutes<10)
        {
            minFormat = "0" + Integer.toString(minutes);
        }
        else
        {
            minFormat = Integer.toString(minutes);
        }
        if (hour<10)
        {
            hourFormat = "0" + Integer.toString(hour);
        }
        else
        {
            hourFormat = Integer.toString(hour);
        }
        //Adds the minute and hour strings together
        
        String format = hourFormat + ":" + minFormat;
        return format;
    }
}
