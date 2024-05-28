#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{6,7,8,9,10};
    
    vector<int>::iterator i = vec2.begin();
    vector<int>::iterator j = vec2.end();
    vector<int>::iterator itr = find(vec1.begin(),vec1.end(),5);
    insert_iterator<vector<int>> bitr(vec1,itr+1);
    
    copy(i,j,bitr);
    
    copy(vec1.begin(),vec1.end(),ostream_iterator<int>(cout," "));
    return 0;
}
