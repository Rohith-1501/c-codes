                                                         /*string #1 - constructor and size */
#include <iostream>
#include<string>
using namespace std;

int main()
{
    /*Initializing Strings:

string s("hello");: Initializes string s with the value "hello".
string s2("hello", 4);: Initializes string s2 with the first 4 characters of "hello".
string s3(s, 2);: Initializes string s3 with substring of s starting from index 2.
string s4(s, 1, 3);: Initializes string s4 with substring of s starting from index 1 with length 3.
string s5(5, 'R');: Initializes string s5 with 5 occurrences of the character 'R'.
string S6({'A','B','C'});: Initializes string S6 with the characters 'A', 'B', and 'C'.
Printing Strings:

cout << s << endl;: Prints the string s.
Similarly for s2, s3, s4, s5, and S6.
String Operations:

s.size(): Returns the number of characters in s.
s.length(): Returns the length of s (same as size()).
s.capacity(): Returns the total capacity allocated to s.
s.shrink_to_fit(): Reduces the capacity of s to fit its size.
Checks if capacity() is equal to size() to determine if shrink_to_fit() worked.*/
    string s("hello");
    cout<<s<<endl;
    string s2("hello",4);
    cout<<s2<<endl;
    string s3(s,2);
    cout<<s3<<endl;
    string s4(s,1,3);
    cout<<s4<<endl;
    string s5(5,'R');
    cout<<s5<<endl;
    string S6({'A','B','C'});//list insize the string is innitialized
    cout<<S6<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.capacity()<<endl;
    s.shrink_to_fit();// make the capacity == size
    cout<<s.capacity()<<endl; // capacity is not changed because this method send only the request so there is no gurantee of changing capacity
    if(s.capacity()==s.size()){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    s.resize(10);//resize is used to change the size of our string
    cout<<s.size()<<endl;//now our size is changed from 5 to 10 becauce of resize function
     s.resize(10,'x');//now the size is 10 not 5 , first 5 is filled with hello and another 5 is filled with 'x' //helloxxxxx
     cout<<s<<endl;
     s.reserve(100);// reverse space in the memory for capacity 100
     cout<<s.capacity()<<endl;// because of reserved function now the capacity changed from 15 to 100
}

/*output: 
hello
hell
llo
ell
RRRRR
ABC
5
5
15
15
false
10
hello
100*/




/*single element access*/
   string s= "Rohith";
   cout<<s[3]<<endl;//printing element at the position 3 in the string
   s[3] ='x';//changing the value from i to x in position 3
   cout<<s<<endl;
   cout<<s.at(0)<<endl;
   s.at(3) = 'i';
   cout<<s<<endl;
   cout<<s[20]<<endl;// it will not trows the error
   //cout<<s.at(20)<<endl;//throwing an instance of 'std::out_of_range''
   s.push_back('R');
   cout<<s<<endl;
   s.pop_back();
   cout<<s<<endl;
   string s1(s.begin(),s.end());
   cout<<s1<<endl;
   cout<<s.front()<<endl;
   cout<<s.back()<<endl;

/*output-i
Rohxth
R
Rohith

RohithR
Rohith
Rohith
R
h
*/






