#include <iostream>
using namespace std;

class Add{
    int i;
 public:
 Add(int a){
     i=a;
 }
  int operator()(int b){//parameter passed and the value is returned
     return b+i;
  }
};

int main()
{
   Add add(2);
   int result = add(3);//functors object represented as function
   cout<<"The sum is "<<result;

    return 0;
}
