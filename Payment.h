#include<iostream>
#include<cstring>
using namespace std;
class Payment
{
  private:
  	char PaymentID[10];
    char PaymentDate[11];
    char Amount[10];
    char CardType[20];
    char CardNumber[20];
    char ExpirationDate[11];
    int CVC;

  public:
  	Payment() ; // default constructor
    Payment(char pay_ID[], char pay_Date[], char pay_Amount[], char card_type[],    char card_nu[], char exp[],  int cardCVC);// overloaded constructor
    void displaypaymentDetails();
    void authorizePayment();
    void issueReciept();
    ~Payment() ; //destructor

};
