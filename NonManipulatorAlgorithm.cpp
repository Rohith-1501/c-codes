#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(2);
    for (vector<int>::iterator i =vec.begin();i!=vec.end();i++) {
      std::cout << *i << " ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());   //acending order
     for (vector<int>::iterator i =vec.begin();i!=vec.end();i++) {
      std::cout << *i << " ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end(),greater<int>());   //descending order
     for (vector<int>::iterator i =vec.begin();i!=vec.end();i++) {
      std::cout << *i << " ";
    }
     cout<<endl;
    reverse(vec.begin(),vec.end());//reverse the vector
     for (vector<int>::iterator i =vec.begin();i!=vec.end();i++) {
      std::cout << *i << " ";
    }
     cout<<endl;
    vector<int>::iterator max = max_element(vec.begin(),vec.end());//Maximum element in the vector returns iterator
    cout<<"Maximum element in the vector: "<<*max;
    
     cout<<endl;
    vector<int>::iterator min = min_element(vec.begin(),vec.end());//Maximum element in the vector returns iterator
    cout<<"Minimum element in the vector: "<<*min;
    
    cout<<"The sum of this vector is: "<<accumulate(vec.begin(),vec.end(),0);//calculate the total values in vector
    
}
