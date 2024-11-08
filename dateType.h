#ifndef date_H 
#define date_H
 
class dateType
{
public:
    void setDate(int month, int day, int year);
    
    // Function to set the date.
    // The member variables dMonth, dDay, and dYear are set
    // according to the parameters
    // Postcondition: dMonth = month; dDay = day;
    //                dYear = year

    int getDay() const;
      //Function to return the day.
	  //Postcondition: The value of dDay is returned.

    int getMonth() const;
      //Function to return the month.  
	  //Postcondition: The value of dMonth is returned.

    int getYear() const;
      //Function to return the year.     
	  //Postcondition: The value of dYear is returned.

    void printDate();
      //Function to output the date in the form mm-dd-yyyy.

  bool everythingValid(int month, int day, int year);
	bool isLeapYear();
	  //Function to determine whether the year is a leap year.
  bool monthValid(int month); 
    //Function to determine whether the month is valid
  bool dayValid(int day, int month);
    //Function to determine whether the day is valid
  bool yearValid(int year);
    //Funciton to determine whether the year is valid.

    dateType(int month = 1, int day = 1, int year = 1900);
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters
      //Postcondition: dMonth = month; dDay = day; 
      //               dYear = year
      //If no values are specified, the default values are 
      //used to initialize the member variables.
    dateType();

private:
    int dMonth;      //variable to store the month
    int dDay;        //variable to store the day
    int dYear;       //variable to store the year
};

#endif



