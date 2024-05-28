#include <iostream>
using namespace std;

class sample{
  
  public:
  void operator()(){
      cout<<"...........Functors..............";
  }
};

int main()
{
    sample s;
    s(); // Here the object is represented as function by operator overloading ()

    return 0;
}
