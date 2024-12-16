# include <iostream>
#include <cstring>
#include <limits.h>
using namespace std;


// // array declare
// int arr[7];
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<"Array creat success";

// int s[53];
// char br[106];
// bool bc[23];

// // aray initialise
// int arr[] = {2,3,4,5};
// // int brr[5] = {2,3,4,5,6,7};
// int crr[10] = {1,2,3,4,5}; // bachi space pr 0 fill haga 


// int n;
// cin>>n;   // but ye bad practise hai.
// int ar[n];
// cout<<"Run";



// int arr[] = {1,2,3,4,5};
// // cout<<arr[0]<<endl;
// // // 3
// // cout<<arr[3]<<endl;

// // printing all value

// for(int i =0; i<5; i++){
//     cout<<arr[i]<<endl;
// }

// int arr[10];
// cout<<"Enter the input value in array "<<endl;
// for(int i =0;i<5;i++){
//     cin>>arr[i];
//     cout<<endl;
// }
// cout<<"Print array"<<endl;
// for(int i =0; i<5; i++){
//     cout<<arr[i]<<" ";


// }

// int arr[]= {2,3,4,5,6};
// for(int i = 0;i<5;i++){
//     cout<<arr[i]*2<<" ";
// }
    

// int ar[5] = {2,34,5,6,7};
// for(int i = 0; i<5; i++){
//     ar[i] =1;
//     cout<<ar[i]<<" ";
// }

// int d[10] = {1,2,3,4};
// for(int i =0 ; i<10;i++){
//     cout<<d[i]<<" ";  // remainning space pr 0 aa jata hai.
// }

// int arr[5];
// for(int i =0 ; i<5;i++){
//     cout<<arr[i]<<" ";  // garbage value hold karega jab koi value nahi diye hai
// }


// pure array ko 0 se initialise karna ho toh


// int arr[5]={0};
// for(int i =0 ; i<5;i++){
//     cout<<arr[i]<<" ";
// }

// int printarr(int arr[],int  size){
//     for(int i =0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
// }
// void inc(int arr[],int size){
//     arr[0] = arr[0]+ 10;
//     printarr(arr,size);
// }
// int main(){
// int arr[]={2,3};
// int size =2;
// inc(arr,size);


// printarr(arr,size);


// void inc(int brr[], int size){
//     cout<<"pass address"<<endl;
//     brr[0]= brr[0] + 10;
//     for(int i =0;i<2;i++){
//     cout<<brr[i]<<" ";
// }
// cout<<endl;
// }



// int main(){
// int arr[2]={5,3};
// cout<<"Real arr"<<endl;
// for(int i =0;i<2;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// int size =2;
// inc(arr,size);
// cout<<"pass by refernce coming arr"<<endl;
// for(int i =0;i<2;i++){
//     cout<<arr[i]<<" ";
// }

// bool find(int arr[],int size,int key){
//     //
//     for(int i = 0; i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }

// return false;
// }

// int main(){
// int arr[5]= {12,3,43,56,5};
// int size =5;
// cout<<"enter the key to find"<<endl;
// int key;
// cin>>key;

// if(find(arr,size,key)){
//     cout<<"Found "<< endl;

// }
// else{
//     cout<<"Not found "<<endl;
// }
int main(){
// int arr[5]= {12,3,43,56,5};
// int size = 5;
// int key = 6;
// bool flag=0 ;
// for(int i = 0; i<size;i++){
//     if(arr[i]==key){
//         flag = 1;
//     }
  
// }
// if(flag){
//      cout<<"Found "<< endl;
// }
// else{
//     cout<<"Not found "<<endl;}

// int arr[] = {1,0,0,0,1,0,1,0,1,1,1,0,1,1,1,0};
// int size = 16;
// int countZero=0;
// int countOne=0;
// for(int i =0; i<size;i++){
//     if(arr[i]==0){
//        countZero++; 
//     }
//     // (arr[i]==1)
//     else
//     {
//         countOne++;
//     }

// }
// cout<<"number of zeros "<<countZero<<endl;
// cout<<"number of ones "<<countOne<<endl;


// Maximum number in array------------------



// int arr[] = {21,44,5,66,12,78,4,67,69};
// int maxi = INT_MIN;
// for(int i =0; i<9;i++){
//     if(arr[i]>maxi){
//     maxi = arr[i];
//     }
// }
// cout<<maxi;




// Minimum number in array------------------



// int arr[] = {0,44,15,66,12,78,41,67,69};
// int min = INT_MAX;
// for(int i =0; i<9;i++){
//     if(arr[i]<min){
//     min = arr[i];
//     }
// }
// cout<<min;



// int arr[] = {0,-4,-5,-6,-12,-8,-41,-7,-6};
// int min = INT_MAX;
// for(int i =0; i<9;i++){
//     if(arr[i]<min){
//     min = arr[i];
//     }
// }
// cout<<min;


// int arr[] = {-3,-4,-5,-6,0,-8,-41,-7,-6};
// int maxi = INT_MIN;
// for(int i =0; i<9;i++){
//     if(arr[i]>maxi){
//     maxi = arr[i];
//     }
// }
// cout<<maxi;



// -------------- ETREME PRINT IN ARRAY --------------
// EVEN

// int arr[] = {1,2,3,4,5,6,7,8};
// int size = 8;
// int start = 0;
// int end = size -1;

// while(true){
//   //  rukana hai toh 
//     if(start>end)
//         break;

    

//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     start++;
//     end--;
// }



// EVEN OR ODD


// int arr[] = {1,2,3,4,5,6,7,8};
// int size =8;
// int start = 0;
// int end = size -1;

// while(true){
//   //  rukana hai toh 
//     if(start>end)
//         break;
//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
    
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";


//     }
//         start++;
//         end--;
// }

// -----reverse array----


// int arr[] = {2,3,4,5,6,7,8};
// int size =7;
// int start = 0;
// int end = size -1;
// while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }

// for(int i =0; i<size;i++){
//     cout<<arr[i]<<" ";
// }

// int arr[] = {2,3,4,5,6,7,8};
// // cout<<sizeof(arr);
// for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
//     cout<<arr[i]<<" ";
// }





return 0;
}