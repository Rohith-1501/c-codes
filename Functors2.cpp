#include <iostream>
using namespace std;

class Add{
  
  int a,b;
  
  public:
  Add(int a1,int b1){
      a=a1;
      b=b1;
  }
  int operator()(){
     return a+b;
  }
};

int main()
{
   Add add(2,3);
   int result = add();
   cout<<"The sum is "<<result;

    return 0;
}
