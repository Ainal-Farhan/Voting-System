#include <iostream>

using namespace std;

class Voter{
  public:
    Voter* first;
    Voter* next;
    string name;
    string ic;
    int age;
    bool voteStatus;
};

int main(){
  cout << "Hello World!" << endl;
  return 0;
}
