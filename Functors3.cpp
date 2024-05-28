#include <iostream>
using namespace std;

class Add{
 public:
  int operator()(int a,int b){//parameter passed and the value is returned
     return a+b;
  }
};

int main()
{
   Add add;
   int result = add(2,3);//functors object represented as function
   cout<<"The sum is "<<result;

    return 0;
}
