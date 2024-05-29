/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
   
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3(5);
    vector<int> vec4{5,4,3,2,1};
    
    //copy
    //copy(vec1.begin(),vec1.end(),vec2.begin());
    //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
  
    //copy_n
    //copy_n(vec1.begin(),3,vec2.begin()+1);
    //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    
    //copy_backward
    //copy_backward(vec1.begin(),vec1.end(),vec2.end());
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
   
   //copy_if
   //copy_if(vec1.begin(),vec1.end(),vec2.begin(),[](int n){return n<4;});
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
   
   //fill
   //fill(vec2.begin()+2,vec2.end()-2,8);
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
   
   //fill_n
   //fill_n(vec2.begin(),3,9);
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
   
   //move
   //move(vec1.begin(),vec1.end(),vec2.begin());
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
   
   //move_backward
   //move_backward(vec1.begin(),vec1.end(),vec2.end());
   //copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    
   //transform type-1
   //transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), [](int x, int y) { return x + y; });
   //copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
   
   //transform type-2
   //transform(vec4.begin(),vec4.end(),vec3.begin(), [](int x) { return x + 2; });
  //copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
  
  //generate
  //generate(vec3.begin(),vec3.end(),[](){return rand()%100;});
 //copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
  //generate_n
  //generate_n(vec3.begin(),3,[](){return rand()%100;});
  //copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
  //swap
}
