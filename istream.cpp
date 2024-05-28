#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> vec(n);
    istream_iterator<int> input(cin) ;//istream_iterator
    for(int i=0;i<n;i++){
        vec[i]=*input;
        input++;
    }

    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));//ostream_iterator
    return 0;
}
