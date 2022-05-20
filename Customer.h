#include <string>
#include "Feedback.h"
using namespace std;

class Customer {
  private:
    int uid;
    string name, nic, email, address, dob, phoneNum;

  public:
    Customer();
    Customer(int iud); // uses database to get user details for other attributes
    ~Customer();
    void feedback(Feedback fe);
    void support();
    void pay(int type, string cNum, string expDate);
    void claim();
    int getCID();
    string getName();
    string getNIC();
    string getEmail();
    string getAddress();
    string getDob();
    string getPhoneNum();
};
