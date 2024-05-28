#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){

 //Two vectors are defined, vec1 and vec2, with some initial values.  

    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{6,7,8,9,10};

//find function is used to find the element 9 in the vector vec2. If found, i will point to that element, otherwise, it will point to vec2.end().
    vector<int>::iterator i =find(vec2.begin(),vec2.end(),6);

    //An insert iterator i_itr is created, which inserts elements into vec2 at the position specified by i + 1. This means it will insert elements right after the element 9.
    insert_iterator<vector<int>> i_itr (vec2,i);\

//The copy function is used to copy elements from vec1 to vec2, starting from vec1.begin() to vec1.end(), and inserting them at the position specified by i_itr.
    copy(vec1.begin(),vec1.end(),i_itr);
    for(int  vec:vec2){
        cout<<vec<<" ";
    }

}
