# include <iostream>
using namespace std;

int main(){ //Comments
// C++ supports two ways of commenting code:

// line comment
/* block comment */




// DATA TYPE 


// int:-----

// The int keyword is used to indicate integers.
// Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.
int a = 4000;
cout<<a<<'\n';
cout<<sizeof(a)<<endl;


// float and double:------

// float and double are used to store floating-point numbers (decimals and exponentials).
// The size of float is 4 bytes and the size of double is 8 bytes. 

float f = 64.74;
double d = 134.64534;
cout<<f<<'\n';
cout<<sizeof(f)<<endl;
cout<<d<<'\n';
cout<<sizeof(d)<<endl;
double dis = 45E12 ;   // 45E12 is equal to 45*10^12
cout<<dis<<'\n';


// char:------

// Keyword char is used for characters.
// Its size is 1 byte.
// Characters in C++ are enclosed inside single quotes ' '.


char c = 'h';
cout<<c<<'\n';
cout<<sizeof(c)<<endl;

// bool:------

// The bool data type has one of two possible values: true or false.
// Booleans are used in conditional statements and loops
bool f_0 = false;
bool t_1 = true;
cout<<f_0<<'\n';
cout<<t_1<<'\n';


//--------------------Declaration of variables-------------
int a1, b1, c1;
int a2;
int b2;
int c2;

// ------------------Initialization of variables-----------------
// When the variables in the example above are declared, they have an undetermined value until they are assigned a value for the first time.
// But it is possible for a variable to have a specific value from the moment it is declared.

int x1 = 21;
int x2 (5);
int x4 {0};
cout<<x1<<endl;
cout<<x2<<endl;
cout<<x4<<endl;


//  strings

string mystring = "This is a string";
cout << mystring<<endl;

string mystring1 = "This is a stringD";
string mystring2 ("This is a stringF");
string mystring3 {"This is a stringG"};
cout << mystring1<<endl;
cout << mystring2<<endl;
cout << mystring3<<endl;

//-----------------------Arithmetic Operators-------------
// Arithmetic operators are used to perform arithmetic operations on variables and data. 
int a22, b22;
    a22 = 7;
    b22 = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a22 + b22) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a22 - b22) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a22 * b22) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a22 / b22) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a22 % b22) << endl;

// 7/2 is 3
// 7.0 / 2 is 3.5
// 7 / 2.0 is 3.5
// 7.0 / 2.0 is 3.5

// The modulo operator % computes the remainder. When a = 9 is divided by b = 4, the remainder is 1.

//-** Note: The % operator can only be used with integers.

// ----------------Compound assignment----------------
//  (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
// Compound assignment operators modify the current value of a variable by performing an operation on it

// expression	| equivalent to...
// y += x;  	| y = y + x;
// x -= 5;  	| x = x - 5;
// x /= y; 	    | x = x / y;

  int aa, bb=3;
  aa = bb;
  aa+=2;             // equivalent to a=a+2
  cout << aa;

}