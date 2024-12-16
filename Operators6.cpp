# include <iostream>
using namespace std;

int main(){
// Operator	 |  Description
// &	     | Bitwise AND Operator
// |	     | Bitwise OR Operator
// ^	     | Bitwise XOR Operator
// ~	     | Bitwise Complement Operator

// --------------- Bitwise AND Operator ---------------

// The bitwise AND & operator returns 1 if and only if both the operands are 1. Otherwise, it returns 0.

// a   b	a & b
// --------------
// 0	0	  0
// 0	1	  0
// 1	0	  0
// 1	1	  1

// ----------------- Bitwise OR Operator ---------------
// The bitwise OR | operator returns 1 if at least one of the operands is 1. Otherwise, it returns 0.

// a	b	a | b
//---------------
// 0	0	 0
// 0	1	 1
// 1	0	 1
// 1	1	 1

// ----------------- Bitwise XOR Operator----------
// The bitwise XOR ^ operator returns 1 if and only if one of the operands is 1. However, if both the operands are 0, or if both are 1, then the result is 0.


// a	b	a ^ b
// --------------
// 0	0	  0
// 0	1	  1
// 1	0	  1
// 1	1	  0


// ----------------- Bitwise Complement Operator ------------
// The bitwise complement operator is a unary operator (works on only one operand). It is denoted by ~ that changes binary digits 1 to 0 and 0 to 1.





// It is important to note that the bitwise complement of any integer N is equal to -(N + 1). For example,

// Consider an integer 35. As per the rule, the bitwise complement of 35 should be -(35 + 1) = -36. Now, let's see if we get the correct answer or not.

// 35 = 00100011 (In Binary)

//  Using bitwise complement operator
// ~ 00100011 
//  __________
//   11011100


// bool a = true;
// bool b = false;
// bool c= true;
// cout<<(a&b)<<endl;

// cout<<(a&c)<<endl;

// cout<<(a|c)<<endl;

// cout<<(a|b)<<endl;

// cout<<(b|b)<<endl;

// cout<<(~b);
// cout<<!b;

// cout<<(b^b)<<endl;
// cout<<(a^b)<<endl;
// cout<<(b^a)<<endl;
// cout<<(a^c)<<endl;

// cout<<(2&3)<<endl;
// cout<<(10&5)<<endl;
// cout<<(2&8)<<endl;


// cout<<(2|3)<<endl;
// cout<<(10|5)<<endl;
// cout<<(7|5)<<endl;

// cout<<~35;


// ------------------ Right Shift Operator(>>)---------


// The right shift operator shifts all bits towards the right by a certain number of specified bits. It is denoted by >>.
// When we shift any number to the right, the least significant bits are discarded, while the most significant bits are replaced by zeroes.


// NOTE:::--- here we divide by 2 evry number
// Example ;;
// a = 4; then apply >> operator then the answer is 2;
// int a = 4;
// cout<<(a>>1)<<endl; 



// ------------------ Left Shift Operator-------------------
// The left shift operator shifts all bits towards the left by a certain number of specified bits. It is denoted by <<.


// NOTE:::--- here we multiply by 2 evry number
// Example ;;
// a = 4; then apply << operator then the answer is 8;
// int b = 4;
// cout<<(b<<1);


// int a = 12;
// a=a<<3;
// cout<<a;

// int a = 12;
// a= a << -1;
// cout<<a;




// int a = 25;
// a=a>>2;

// cout<<a<<endl;


    // int num = 212, i;

    // // Shift Right Operation
    // cout << "Shift Right:" << endl;

    // // Using for loop for shifting num right from 0 bit to 3 bits 
    // for (i = 0; i < 4; i++) {
    //     cout << "212 >> " << i << " = " << (212 >> i) << endl;
    // }

    // // Shift Left Operation
    // cout << "\nShift Left:" << endl;

    // // Using for loop for shifting num left from 0 bit to 3 bits
    // for (i = 0; i < 4; i++) {
    //     cout << "212 << " << i << " = " << (212 << i) << endl;
    // }

// int a = -27;
// a = a>> 1;
// cout<<a<<endl;

// int a = 27;
// a = a>>- 1;
// cout<<a<<endl;

// int a = -7;
// a = a>> 1;
// cout<<a<<endl;


// int a = 5;
// // cout<<++a;

// // cout<< a++<<endl;
// // cout<<a;
// int c = (a++) +2;
// cout<<c;
// cout<<endl<<a<<endl;

// cout<<c;

// int a =3;
// int c = (a--)+4;
// cout<<c<<endl;
// cout<<a<<endl;
  
// int a = 5;
// cout<<(a++)*(a++)<<endl;
// cout<<a;
// cout<<(++a)*(++a)<<endl;
// cout<<(++a)*(a++)<<endl;


// ------- VARIABLE SCOPING------------

// int b;
// b= (++a)*(++a);

// cout<<b<<endl;

// int b =8;
// int y = b++ + ++b;

// cout<<y;





}
