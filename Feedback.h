#include <string>
using namespace std;

class Feedback {
  private:
    int index, cid;

  public:
    Feedback();
    Feedback(int cid); //index will be given by the code
    ~Feedback();
    int getIndex();
    void sendFeedback(string text);
};