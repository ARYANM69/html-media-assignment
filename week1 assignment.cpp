
//C++ Assignments | Week1


// QUESTION 1 How can you output “Physics” and “Wallah” in two different lines in C++?
// ANSWER 1==>
#include<iostream>
using namespace std;
int main(){
   cout<<"Physics"<<endl;
    cout<<"Wallah";
}



// QUESTION 2 Write a program to print 10 using 2 positive numbers less than 6 in C++ as output.
// Answer 2==>
#include<iostream>
using namespace std;
int main(){
int x = 5;
int y = 2 ;
int z = x * y ;
cout<< z;
}

//QUESTION 3 How much space does the following data types take?
// int
// bool
// float
//Answer 3 ==>  int = 4 bytes; float = 4 bytes ; bool = 1 bytes ;

// QUESTION 4 What is the output of this program?
//Answer 4
int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a << " " << b--;
}

// output == a = 6 , b = 4;


// QUESTION 5 WAP to find the circumference of a circle with radius 10 in C++.
// Answer 5 ==>
#include <iostream>

using namespace std;

int main() {
    float radius = 10.0;      
    float pi = 3.14159;      
    float circumference  = 2 * pi * radius;;    
  

    // Output the result
    cout << "The circumference of the circle with radius " << radius << " is " << circumference << endl;

    return 0;  
}


// QUESTION 6 How many of these can be a variable name ?
// 01Pwskills
// _FLOAT
// int
// FLOAT
// You will succeed

// ANSWER==>   _FLOAT   FLOAT