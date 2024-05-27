#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    // Forward iteration
    vector<int>::iterator i = vec.begin();
    while (i != vec.end()) {
        cout << *i << " ";
        i++;
    }
    cout << endl;

    // Reverse iteration
    i = vec.end()-1; // Resetting i to the end
    while (i != vec.begin()-1) {
      
            cout << *i << " ";
            i--;
        }
    

    return 0;
}
