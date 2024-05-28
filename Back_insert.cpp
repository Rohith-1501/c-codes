#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{6,7,8,9,10};
    
    back_insert_iterator<vector<int>> b_itr(vec1);
    
    copy(vec2.begin()+1,vec2.end()-3,b_itr);
    for(auto vec:vec1){
        cout<<vec<<" ";
    }

}
