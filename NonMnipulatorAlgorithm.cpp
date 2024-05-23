#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int> vec;
    for (int i = 1; i <=10; i++) {
       if(i%2==0){
           vec.push_back(i);
           vec.push_back(2);
       }
    }
    // return the value what we are finding as a iterator
    find(vec.begin(),vec.end(),6)!=vec.end()?cout<<"Element is found":cout<<"Element is not found";//return iterator value as 6!=0
    cout<<endl;
    find(vec.begin(),vec.end(),7)!=vec.end()?cout<<"Element is found":cout<<"Element is not found";//return iterator value as 0==0
    cout<<endl;
    cout<<count(vec.begin(),vec.end(),2);//count how many Element in the vector
    sort(vec.begin(),vec.end());
    cout<<endl;
    if(binary_search(vec.begin(),vec.end(),8)){//find whether the element is there or not
        cout<<"element found in the vector"<<endl;
    }
    else{
        cout<<"Element not found in the vector"<<endl;
    }
    std::vector<int>::iterator i= lower_bound(vec.begin(),vec.end(),2);//return the first Element which is equal and greater than the target element
     std::vector<int>::iterator it= upper_bound(vec.begin(),vec.end(),2);//return the first Element  greater than the target element
    cout<<*i<<endl;
    cout<<*it<<endl;
    
}

/*input - {2,2,4,2,6,2,8,2,10}*/
/*output-
Element is found
Element is not found
6
element found in the vector
2
4




*/
