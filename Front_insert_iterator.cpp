#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{6,7,8,9,10};
    
    // Get front_insert_iterator for vec2
    front_insert_iterator<vector<int>> front_i_itr(vec2);
    
    // Copy elements from vec1 to the beginning of vec2
    copy(vec1.begin(), vec1.end(), front_i_itr);
    
    // Output vec2 after insertion
    for (int elem : vec2) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
