# include <iostream>
using namespace std;
int main(){

//------------------------ The for loop -----------------------
// The for loop is designed to iterate a number of times. Its syntax is:
// for (initialization; condition; update) {
//     * body of-loop *
// }
// for(int i = 0; i<=5;i=i+1){
//     cout<<"Danish"<<endl;
// for(int i=0;i<=5;i=i+1){
//     cout<<i<<endl;
// for(int i=10;i>=1;i=i-1){
//      cout<<i<<endl;
// }
// cout<<"hiiiijkngfjkgfd"<<"\n";
// for(int i=10;i>=1;i=i-2){
//      cout<<i<<endl;


// for(int i = 2 ; i<=20;i=i+2){
//     cout<<i<<endl;
// }


// for(int i = 20 ; i>=2;i=i-2){
//     cout<<i<<endl;
// }

// for(int i =1;i<=10;i=i*2){
//     cout<<i<<endl;
// }


// for(int i = 5;(i>=0 && i<=10);i=i+1){
//     cout<<i<<endl;
// }

// int p=0;
// for(;p<5;p=p+1){
//     cout<<p;
// }

// for(int i = 0;i<=5;i=i+1){
//      cout<<"Danish"<<endl;
//   }


// int i = 0;
// for(;;){
//     if(i<5){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }



// ------------------- Solid Ractangle Pattern ----------------------


// int row_num,col_num;
// cout<<"Enter the row number";
// cin>>row_num;
// cout<<"Enter the col number ";
// cin>>col_num;
// OUTER LOOP FOR ROW:
// for(int row = 0;row<row_num;row=row+1){
    // INNER LOOP FOR COLUMN:
//     for(int col = 0;col<col_num;col=col+1){
//         cout<<"* ";

//     }
//     cout<<endl;
// }

// ------------------- Squre Pattern ----------------------

// int num;
// cout<<"Enter the number";
// cin>>num;

// for(int row = 0;row<num;row=row+1){
//     for(int col = 0;col<num;col=col+1){
//         cout<<" * ";

//     }
//     cout<<endl;
// }

// ------------------- hollow rectangle Pattern ----------------------


// int rowcount,colcount;
// cout<<"Enter the row Number";
// cin>>rowcount;
// cout<<"Enter the col Number";
// cin>>colcount;
// for row loop
// for(int row = 0; row<rowcount;row=row+1){
//     // for column loop
//     if(row==0||row==rowcount-1){
//         for(int col = 0; col<colcount;col=col+1){
//             cout<<"* ";
//         }
//     }
//     else{
//         // remaining middle rows
//         // first star
//         cout<<"* ";
//         // space
//         for(int i =0; i<colcount -2; i=i+1){
//             cout<<"  ";
//         }
//         // last star
//         cout<<"* ";
//     }
//     cout<<endl;

// }


// ------------------- Half Pyramid Pattern ----------------------

// int num;
// cin>> num;
// // for outer loop --- row
// for(int row=0;row<num;row=row+1){
//     // for column                                                           
//     // in 0 row we print 1*
//     // in 1 row we print 2*
//     // in 2 row we print 3*
// // logic here jis row pr hai utne number row se aaik jada 
// // col<row+1
// for(int col =0;col<row+1;col=col+1){
//     cout<<"* ";                                      
// }
// cout<<endl;

// }



// ------------------- Inverted Half Pyramid Pattern ----------------------


// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col =0; col<n-row;col=col+1){
//         cout<<"* ";

//     }
//     cout<<endl;
// }


// ------------------NUMERIC Half Pyramid Pattern ----------------------

// int num;
// cin>> num;
// // // for outer loop --- row
// for(int row=0;row<num;row=row+1){

// //     // for column                                                           

//     for(int col =0;col<row+1;col=col+1){
//      cout<<col+1;                                      
//     }
// cout<<endl;
// }




int num;
cin>> num;
// // for outer loop --- row
for(int row=1;row<=num;row=row+1){

//     // for column                                                           

    for(int col =1;col<row+1;col=col+1){
     cout<<row;                                      
    }
cout<<endl;
}











return 0 ;

}