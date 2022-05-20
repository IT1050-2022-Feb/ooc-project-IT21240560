#include<iostream>
#include<cstring>
Using namespace std;
class Support 
{ 
  Private: 
    char staffName[20];
    char staffId[20];  
    char staffTime [20]; 

  public: 
    Support();
    Support(char s_name[], char staffId [], char s_time[] ); 
    void displaystaff Details(); 
    
    
    Void setStaffName (char s_name []);
    Void setStaffId (char staffId [] );
    Void setStaffTime (char s_time[] );	 
    
    Void addSupport();
    Void removeSupport();
    Void updateSupport();
    Void connectSupport();
    Void addrequesttime();
    ~Support ();
};
