#include <iostream>
#include <cstring>
#include "Customer.h"
#include "Feedback.h"
#include "Vehicle.h"
#include "Staff.h"
#include "Payment.h"
#include "Package.h"
#include "Support.h"
using namespace std;

int main() 
{
  //IT21241628
  Customer c1 = Customer(2);
  Feedback f1 = Feedback(3);

  //IT21240560
  Vehicle *vehicle1;
	vehicle1 = new Vehicle("V001", "GQ-3384", "Van", "Toyota Dolphin", "white");
	vehicle1->checkAvailablePackages();

  //IT21243912
  Staff emp1; //object creation using default constructor
  //object creation using overloaded constructor
  Staff emp2 ("EMP00001" , "@#$2345_7swq ","Sandun Gaurawa" ,"Male" ,"0786543501","sandungaurawa@gmail.com", "50/A Honnathara, Piliyandala");
  
  //IT21243912
  Payment pay1 ; //object creation using default constructor
  Payment pay2 ("P003","19/05/2022", "30,000", "Visa card", "3456789233345", "10/28", 106) ; //object creation using overloaded constructor

  //IT21241550
  Package pkg1;// //object creation using default constructor
  //object creation using overloaded constructor
  Package pkg2("0002","Full insurace",200000,"1");

  //IT21238376
  Support sname1;// //object creation using default constructor
  //object creation using overloaded constructor
  Support sname("Suboda","A0001","11.10 AM");

  
  return 0;
}