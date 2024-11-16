#ifndef dateType_H
#define dateType_H
   
#include <iosfwd>

class Date
{
public:
    int getDay() const;
    //Function to return the day.
    //Postcondition: The value of dDay is returned.

    int getMonth() const;
    //Function to return the month.  
    //Postcondition: The value of dMonth is returned.

    int getYear() const;
    //Function to return the year.     
    //Postcondition: The value of dYear is returned.

    void printDate(std::ostream& out) const;
    //Function to output the date in the form:
	  //"mm-dd-yyyy"
	  //Note a newline is not printed

    Date(): dMonth(0), dDay(0), dYear(0) {};
    Date(int month, int day, int year);
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day; dYear = year;
      //               If no values are specified, the default 
      //               values are used to initialize the member
      //               variables.

    bool operator==(const Date& other) const noexcept;

private:
    int dMonth; //variable to store the month
    int dDay;   //variable to store the day
    int dYear;  //variable to store the year

};

#endif