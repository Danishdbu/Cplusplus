# include <iostream>
using namespace std;


// void printName(){
//     int n;
//     cout<<"Enter the value";
//     cin>>n;
//     for(int i = 0 ; i<n;i++){
//         cout<<"Danish"<<endl;
//     }
// }

// int main(){
//     // function call 
//     printName();
// int main(){
// int a = 5, b = 2;
 
//     if (b == 0) {
 
//         // The below line is used to print
//         // the message in the error window
//         // fprintf(stderr, "Division by zero"
//         //                 " is not possible.");
 
//         // Print the error message
//         // as return is -1
//         printf("Division by zero is"
//                " not possible.");
//         return -1;
// }
//     cout << a / b << endl;
 
//     return 0;
// }

// --- pass by value -----

// void printN(int a){
//     cout<<a<<endl;
//     cout<<a++<<endl;
//     ++a;
//     cout<<a<<endl;
// }

// int main(){
//     int a = 5;
//     printN(a);
//     a--;
//     cout<<a<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     cout<<"Address of a is "<<&a<<endl;
// }

// void printN(int a){
//     cout<<"Address of a2 is "<<&a<<endl;//Address of a2 is 0x61fef0
//     cout<<a<<endl;
//     cout<<a++<<endl;
//     ++a;
//     cout<<a<<endl;
// }

// int main(){
//     int a = 5;
//     cout<<"Address of a1 is "<<&a<<endl; //Address of a is 0x61ff0c
//     printN(a);
//     a--;
//     cout<<a<<endl;
//     cout<<"Address of a is "<<&a<<endl; //Address of a is 0x61ff0c
//     return 0;
// }

//  WAF to add two number



// int add_num(int a,int b){
//     return a+b;
// }


// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int sum = add_num(n1,n2);
//     cout<<"Addition result : "<<sum<<endl;
// }


// int add_num(int a,int b){
//    int c = a+b;
// //    cout<<c<<endl;
// }


// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     add_num(n1,n2);
//     cout<<add_num;
// //    return 0;
// }




// int add_num(int a,int b){
//     int c = a+b;
// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int sum = add_num(n1,n2);
//     cout<<"Addition result : "<<sum<<endl;
// }




// int add_num(int a,int b){
//     int c = a+b;
//     cout<<c<<endl;
// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int sum = add_num(n1,n2);
//     cout<<"Addition result : "<<sum<<endl;
// }



// // Declearation of function
// int add_num(int a,int b);

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int sum = add_num(n1,n2);
//     cout<<"Addition result : "<<sum<<endl;
//     return 0;
// }

// int add_num(int a,int b){
//     return a+b;
// }

// ----  FIND MAX OF 3 NUMBERS ----


// int Max_num(int a,int b,int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if (b>a && b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter a "<<endl;
//     cin>>a;
//     cout<<"Enter b "<<endl;
//     cin>>b;
//     cout<<"Enter c "<<endl;
//     cin>>c;
//     cout<<"maximum number is : "<<Max_num(a,b,c)<<endl;
//     return 0;
// } 


// ------------------ COUNTING FROM 1 TO N ----------------

// void counting(int n){
//     for(int i =0; i<n;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout <<"Enter the n ";
//     cin>>n;
//     counting(n);
// }



// --------------------------------------

// void garde(int marks){


// if(marks>=90){
//     cout<<"you got A grade"<<endl;
// }
// else if(marks>=75){
//     cout<<"you got B grade"<<endl;
// }
// else if(marks>=60){
//     cout<<"you got C grade"<<endl;
// }
// else{
//     cout<<"you got D garde"<<endl;
// }

// }
// int main(){
// int marks;
// cout<<"Enter the marks "<<endl;
// cin>>marks;
// garde( marks);
// return 0;
// }




// ----------------------- sum of even num. upto n

// int evensum(int n){
//     int sum = 0;
//     for(int i =2;i<=n;i=i+2){
//         sum = sum + i;
       
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<< "Enter the value of n "<<endl;
//     cin>>n;

//     int ans = evensum(n);
//     cout<<"Sum upto "<<n<<" is "<<ans<<endl;
//     return 0;
// }


// ----------------Program to find area of a circle

// void Area_circle(int r){
//     float pi = 3.14;
//     float area ;
//     area = pi*r*r;
//     cout<< area;
// }
// int main (){
//     int n;
//     cin>>n;
//      Area_circle(n);
    
// }



//  ---- Find the num is even or odd 

// void evenorodd(int n){
//     if(n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"odd";
//     }
// }

// int main (){
//     int a;
//     cin >>a;
//     evenorodd(a);
// }

//  ------------------ factorial --------------



// Factorial Function

// long factorial(int n) {
//     int counter;
//     long fact = 1;

//     //for Loop Block
//     for (int counter = 1; counter <= n; counter++) {
//         fact = fact * counter;
//     }

//     return fact;
// }
// int main() {

//     // Variable Declaration
//     int counter, n;

//     // Get Input Value
//     cout << "Enter the Number :";
//     cin>>n;

//     // Factorial Function Call
//     cout << n << " Factorial Value Is " << factorial(n);

//     // Wait For Output Screen
   
//     return 0;
// }

// --------- prime number ---------------

// bool primeN(int n){
//     int i =2;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n ;
//     cin>> n;
//     bool isPrime = primeN(n);
//     if(isPrime){
//         cout<<"yes prime "<<endl;

//     }
//     else{
//         cout<<"Not prime "<<endl;
//     }

// }



// PRINT PRIME NUMBER

bool primeN(int n){
    int i =2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n ;
    cin>> n;
    for(int i =2; i<=n;i++){
        bool isPrime = primeN(i);
        if(isPrime){
        cout<<i<<" "<<endl;

    }

    
}
}






