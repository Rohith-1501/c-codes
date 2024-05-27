#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    
    vector<int>::iterator first = vec.begin();
    vector<int>::iterator second =vec.end()-1;
    
    cout<<"First Element is "<<*first<<endl;//* to read values from the iterator
    first[1]=10;//[] is to write value to iterator
    cout<<"the second element is "<<first[1]<<endl; //[] this operator is also used to read in iterator
     for(auto i:vec){
         cout<<i<<" ";
     }
     cout<<endl;
     cout<<"the last elment is "<<*second<<endl;
     cout<<"The element before last element "<<second[-1]<<endl;
     second[-1]=9;
     cout<<"After inserting the value : ";
       for(auto i:vec){
         cout<<i<<" ";
     }
     
}
