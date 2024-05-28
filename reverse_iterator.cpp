#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    
    vector<int> vec{1,2,3,4,5};
    
    reverse_iterator<vector<int>::iterator> ritr;
    for(ritr=vec.rbegin();ritr!=vec.rend();ritr++){
        cout<<*ritr<<" ";
    }
}
