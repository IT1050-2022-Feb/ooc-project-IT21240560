#include<iostream>
#include<cstring>
Using namespace std;
class Package
{
  Private:
    char PackegeID[20];
    char PackegeName[20];
    float PackegePrice[11];
    char PackegeType[11];

  public:
    Package();
    Packege(char pkg_ID[],char pkg_N[], float pkg_Price[], char pkg_Type[]);
    void displayPackageDetails();
    
    Void setPackageID(char pkg_ID[]);
    Void setPackegePrice(float pkg_price[]);
    Void setPackegeType(char pkg_Type[]);
    void setPackegeName (char pkg_N[]);

    ~Package();
};