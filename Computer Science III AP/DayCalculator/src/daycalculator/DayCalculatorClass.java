/**
 * Programmer -- Kyle Beadle
 * Computer Science III - AP
 * Third Period
 * Assignment Number 2
 * Date: September 28, 2015
 * 
 * Problem Statement - Find the day of the week for any any date, past or future
 */

package daycalculator;

/**
 * Ability to calculate the day of the week given the month number, date, and 
 * year.
 */

class DayCalculatorClass {
    int monthNumber, year, day;
	
        /** Constructor that sets the default values when an object is created.
         */
    
	public DayCalculatorClass()
	{
		monthNumber = 7;
		day = 4;
		year = 1776;
	}
	
        /** Constructor that allows the user to set the values in integer form.
         * @param mNum - number of the month
         * @param date - number for the day of the month
         * @param y - the year
         */
        
	public DayCalculatorClass(int mNum,int date,int y)
	{
		monthNumber = mNum;
		day = date;
		year = y;
	}
	
        /** Gets the number of the month.
         * @return The number of the month
         */
        
	public int getMonthNumber()
	{
		return monthNumber;
	}
	
        /** Gets the name of the month based on its number.
         * @param monthNumber - the number of the month
         * @return The name of the month.
         */
        
	public String getMonthName(int monthNumber)
	{
		String monthList = "January  February March    April    May    "
                                   +"  June     July     August   September"
                                   +"October  November December ";
		int start = monthNumber*9-9;
		String monthName = monthList.substring(start,start+9);
                monthName = monthName.trim();
		return monthName;
	}
        
        /** Gets the number of the day of the week
         * @return The number for the day of the week.
         */
        
	public int getDayOfTheWeekNumber()
	{
                //Calculates the day of the week
		int y = year - (14-monthNumber) / 12;
		int x = y + y/4 - y/100 + y/400;
		int m = monthNumber + 12 * ((14-monthNumber)/12) - 2;
		int dw = (day + x + (31*m) / 12) % 7;
		return dw; //number for the Day of the Week
	}
        
        /** Gets the day of the week based on its number.
         * @return The name of the day of the week.
         */
        
	public String getDayOfTheWeek()
	{
		int weekNumber = getDayOfTheWeekNumber(); 
                                //number for the Day of the Week
		String weekDayList = "Sunday   Monday   Tuesday  Wednesday"
                                     +"Thursday Friday   Saturday ";
		int start = weekNumber*9;
		String weekDayName = weekDayList.substring(start,start+9);
                weekDayName = weekDayName.trim(); //name for the Day of the Week
		return weekDayName;
	}
        
        /** Formats the date into mm/dd/yyyy format
         * @return The date in mm/dd/yyyy format
         */
        
        public String getNumberFormat()
        {
            String formatted = String.format("%02d/%02d/%04d",monthNumber,day,
                                year);
                               //all of the data formatted
            return formatted;
        }
        
        /** Formats the date into full dayName, monthName, date, year format
         * @return The date in dayName, monthName, date, year format
         */
        
        public String getFullFormat()
        {
            String mName = getMonthName(monthNumber); //name of the month
            String weekDay = getDayOfTheWeek();  //name for the Day of the Week
            String formatted= String.format("%s %s %02d, %04d",weekDay,mName,
                              day,year);
                              //all of the data formatted
            return formatted;
        }
}
