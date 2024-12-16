# include <iostream>
#include <cstring>
# include <limits.h>
using namespace std;

void inr(int arr[], int size){
    arr[0] = arr[0] + 10;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" "<<endl;
    }
    

}
bool find(int arr[], int size, int key){
    // linear search 
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]==key)
        return true;
    }

    return false;
    
}

// Array1
int main(){
    // array declare 
    //int arr[5];
    //cout<<arr<<endl;
    //cout<<endl<<&arr; // show the base address
    //int a[53];
    //char c[106];
    //bool d[34];



    // initialization

    // int arr[] = {1,2,3,4,5};
    // int brr[5] = {2,4,6,8,10};
    // int crr[10] = {1,3,5,7,9};
    // // error 
    // //int s[3] = {1,2,3,4};

    // cout<< "Array initialization is done"<<endl;
    // int brr[5] = {2,4,6,8,10};
    // cout<<brr[2]<<endl;
    // printing all value

    // cout<<brr[0]<<endl;
    // cout<<brr[1]<<endl;
    // cout<<brr[2]<<endl;
    // cout<<brr[3]<<endl;
    // cout<<brr[4]<<endl;
    // cout<<brr[5]<<endl; // return garbage value or error

    // printing all value

    // for(int i=0; i< 5; i++){
    //     cout<<brr[i]<<" ,";
    // }
    // cout<<endl;
    // for(int i=0; i < 5; i++){
    //     cout<<brr[i]<<endl;
    // }


    // Input

    // int a[100];
    // cout<<"Enter the value in array "<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>a[i];

        
    // }
    // // printing
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout<<a[i]<<" ";


    // }

    // que

    // int a[5] = {1,3,5,7,9};
    // for(int i =0  ; i<5;i++){
    //     cout<<a[i]*2<<",";
       
    // }

    
    // int a[5] = {1,3,5,7,9};
    // for(int i =0  ; i<5;i++){
    //     a[i] = 1;
    //     cout<<a[i]<<" ";

       
    // }

    // int arr[10] = {1,2,3};
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout<<arr[i]<<endl;
    // }
    
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout<<arr[i]<<" ,"; // provide garbage value
    // }

    // initialize with 0 
    // int s[5] = {};
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     cout<<s[i]<<" ,";

    // }


    //  memset()    FUNCTION

    // int s[10];
    // int a =2;
    // memset(s,a,sizeof(s));
    //  cout << "dest contains " << s[2];

    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout<<s[i]<<",";
    // }
//     int n;
// cin>>n;
// int a[10];
// memset(a, -1, sizeof(a));
// cout<<a[2];

// function in arry (pass by refference)
// int arr[] = {1,2};
// int size =2;
// inr(arr,size);
// for (int i = 0; i < 2; i++)
// {
//     /* code */
//     cout<<arr[i]<<endl;
// }


// LINEAR Search in array


// int arr[5] = { 1,2,3,4,5};

// int size =5;
// int key;
// cout<<"Enter the key"<<endl;
// cin>>key;

// if(find(arr,size,key)){
//     cout<<"Found"<<endl;

// }
// else{
//     cout<<"Not Found"<<endl;
// }


// int arr[] = {1,0,0,1,1,1,0,1,1};
// int size = 10;

// int numZeros=0;
// int numOnes=0;

// for (int i = 0; i < size; i++)
// {
//     /* code */
//     if(arr[i]==0){
//         numZeros++;

//     }
//     if(arr[i]==1){
//         numOnes++;

//     }
// }

// cout<<"total zeros "<<numZeros<<endl;
// cout<<"total ones "<<numOnes<<endl;



// Find the maximum number in array


// int arr[] = {-7,-12, -3,-3, -12,-5};
// int size = 6;

// int maxi = INT_MIN;

// for (int i = 0; i < size; i++)
// {
//     if (arr[i]> maxi)
//     {
//         maxi = arr[i];
        
//     }
    
// }


// cout<<"Maximum number is :"<<maxi <<endl;



// Find the minimum number in array

// int arr[] = {7,12, 3,8, 12,5};
// int size = 6;

// int mini = INT_MAX;

// for (int i = 0; i < size; i++)
// {
//     if (arr[i]< mini)
//     {

//         mini = arr[i];
        
//     }
    
// }


// cout<<"Minimum number is :"<< mini <<endl;
    
    




// Extreme print



    
// int arr[] = {1,2,7,12, 5,3, 12,5};  
// int size = 8;

// int start = 0;
// int end = size -1;

// while (true)
// {
//     if (start>end)
//     break;

//     cout<< arr[start]<<" ";
//     cout<< arr[end]<<" ";
//     start++;
//     end--;
    
    
// }



// Extreme print

    
// int arr[] = {1,2,7,12,3, 12,5,7};  
// int size = 8;

// int start = 0;
// int end = size -1;

// while (true)
// {
//     if (start>end)
//     break;

//     if (start==end)
//     {
//         cout<<arr[start]<<" ";
//     }
//     else{
//         cout<< arr[start]<<" ";
//         cout<< arr[end]<<" ";

//     }
    
//     start++;
//     end--;
    
    
// }



// Reverse the array

int arr[] = {1,2,7,12,3, 12,5,};
int size = 7;

int start = 0;
int end = size -1;

while (start<=end)
{
    
    
    // step 1

    swap(arr[start],arr[end]);
    // step 2

    start++;
    // step 3

    end--;
    
    
}

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";

}


























}