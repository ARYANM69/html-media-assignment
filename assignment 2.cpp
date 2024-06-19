// Assignment 2 

//   QUESTION 1
//Find the output for this code. Let input:- 2 3 6



#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}

// Answer 1 ==>
// Z = 0; as(x = 2, y = 3,m =6 , then x*y = 6, then 6 % 6 = 0)

//QUESTION 2 Find the output for this code. Let input:- 3 2
#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}


// ANSWER 2 ==> oputput = 1  1;



//QUEATION 3 Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}

// ANSWER 3 ==> OUTPUT WILL BE 2;






// QUESTION 4 WAP for finding the volume of the cylinder by taking radius and height as input.
// ANSWER 4 ==>
#include <iostream>
using namespace std;

int main() {
    
  float  radius, height, volume;

  
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;


    cout << "Enter the height of the cylinder: ";
    cin >> height;

  
    volume = 3.14159 * radius * radius * height; 

  
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}

// QUESTION 5
//WAP to find the difference between ASCII of two characters ,take them as input .
//Answer 5==>

#include<iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"Enter first character ";
    cin>>x;
    cout<<endl;

     cout<<"Enter second character ";
     cin>>y;

     int z = int(x)-int(y);
     cout<<"the difference between ASCII of two characters ,take them as input is : "<<" "<<z;

}



// QUESTION 6  Find the output of the below code
#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
 cout<<i;
}

// OUTPUT = 49


