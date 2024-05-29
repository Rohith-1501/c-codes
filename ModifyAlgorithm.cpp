#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

int main() {
   
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3(5);
    vector<int> vec4{5,4,3,2,1};
    vector<int> vec5{1,1,2,2,3,3};
    
    //copy
    copy(vec1.begin(),vec1.end(),vec2.begin());
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
  
    //copy_n
    copy_n(vec1.begin(),3,vec2.begin()+1);
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
    
    //copy_backward
    copy_backward(vec1.begin(),vec1.end(),vec2.end());
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
   
    //copy_if
    copy_if(vec1.begin(),vec1.end(),vec2.begin(),[](int n){return n<4;});
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
   
    //fill
    fill(vec2.begin()+2,vec2.end()-2,8);
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
   
    //fill_n
    fill_n(vec2.begin(),3,9);
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
   
    //move
    move(vec1.begin(),vec1.end(),vec2.begin());
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
   
    //move_backward
    move_backward(vec1.begin(),vec1.end(),vec2.end());
    copy(vec2.begin(),vec2.end(),ostream_iterator<int>(cout," "));
    cout << endl;
    
    //transform type-1
    transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), [](int x, int y) { return x + y; });
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
   
    //transform type-2
    transform(vec4.begin(),vec4.end(),vec3.begin(), [](int x) { return x + 2; });
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
  
    //generate
    generate(vec3.begin(),vec3.end(),[](){return rand()%100;});
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
  
    //generate_n
    generate_n(vec3.begin(),3,[](){return rand()%100;});
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
  
    //swap_ranges
    cout<<"Before Swapping: "<<endl;
    cout<<"Vector 1: "<<endl;
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Vector 3:" <<endl;
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"After Swapping: "<<endl;
    cout<<"Vector 1: "<<endl;
    swap_ranges(vec1.begin(),vec1.end(),vec3.begin());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    cout<<"Vector 3: "<<endl;
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
    //swap
    swap(vec1,vec3);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
    //reverse
    reverse(vec1.begin(),vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
    
  
    //reverse_copy
    reverse_copy(vec1.begin(),vec1.end(),vec3.begin());
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
    //rotate
    rotate(vec1.begin(),vec1.begin()+2,vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
  
    //unique and resize and distance
    vector<int>::iterator i;
    i=unique(vec5.begin(),vec5.end());
    vec5.resize(distance(vec5.begin(),i));
    copy(vec5.begin(), vec5.end(), ostream_iterator<int>(cout, " "));
  
    //unique_copy
    unique_copy(vec5.begin(),vec5.end(),vec3.begin());
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
  
    //replace
    replace(vec1.begin(),vec1.end(),1,6);
    copy(vec1.begin(),vec1.end(),ostream_iterator<int>(cout," "));
  
    //replace_copy
    replace_copy(vec1.begin(),vec1.end(),vec3.begin(),1,6);
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
  
    //replace_if
    replace_if(vec1.begin(), vec1.end(), [](int x) { return x > 4; }, 6);
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
    //remove
    vector<int>::iterator j = remove(vec1.begin(),vec1.end(),3);
    vec1.resize(distance(vec1.begin(),j));
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
    //remove_if
    vector<int>::iterator k =remove_if(vec1.begin(),vec1.end(),[](int x){return x==3;});
    vec1.resize(distance(vec1.begin(),k));
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
  
    //remove_copy
    vec3.resize(distance(vec3.begin(),remove_copy(vec1.begin(),vec1.end(),vec3.begin(),5)));
    copy(vec3.begin(), vec3.end(), ostream_iterator<int>(cout, " "));
  
    //random_shuffle
    random_shuffle(vec1.begin(),vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
    //next_permutation or next greatest permutation
    next_permutation(vec1.begin(),vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
  
    //previous_permutation or next smaller permutation
    prev_permutation(vec1.begin(),vec1.end());
    copy(vec1.begin(), vec1.end(), ostream_iterator<int>(cout, " "));
}
