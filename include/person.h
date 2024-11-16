#ifndef H_personType
#define H_personType

#include <string>
 
class Person
{
public:
   virtual void print(std::ostream&) const;
   //Function to output the first name and last name
   //in the form:
	//"firstName lastName"
	//Note a newline is not printed.

   std::string getFirstName() const;
   //Function to return the first name.
   //Postcondition: The value of the data member firstName
   //is returned.

   std::string getLastName() const;
   //Function to return the last name.
   //Postcondition: The value of the data member lastName
   //is returned.

   //Copy constructor and copy assignment operator (preview of coming attractions)
   //Do not need to implement for this assignment
   Person(const Person&) = delete;
   Person& operator=(const Person&) = delete;
   //Default constructor: do not need to implement for this assignment
   virtual ~Person() noexcept = default;
   
   Person(const std::string & first, const std::string & last);
   //constructor
   //Sets firstName and lastName according to the parameters.
   //The default values of the parameters are empty strings.
   //Postcondition: firstName = first; lastName = last  

private:
   std::string firstName; //variable to store the first name
   std::string lastName;  //variable to store the last name
};

#endif