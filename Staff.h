#include <iostream>
#include <cstring>

using namespace std;

class Staff
{
  private:

    char staffID[4] ;
    char password[20] ;
    char name[20];
    char gender[8];
    char telephone_Number[11];
    char email[30];
    char address[50];

    
  public:
  	Staff();
    Staff(char StaffID[],char S_password[], char S_name[], char Gender[], char S_Pnum[],char S_email[], char S_addres[]); 
    void displaystaffdetails();
    void assignEmpID (char staff_ID[]) ;
    void assignPassword (char PassW[]) ;
    void login (char staff_ID[], char PassW[]) ;
    void addVehicle();
    void removeCustomer(int uid);
    void addNewPackages();
    void generateServiceReport();
    ~Staff();//destructor
};
