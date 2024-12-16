# include <iostream>
# include <limits.h>
using namespace std;

int climbStairs(int n){
    // base case
    if (n==0||n==1)
    {
        return 1;
    }
    // r.r
    int ans = climbStairs(n-1)+climbStairs(n-2);
    return ans;


}

void printArray(int arr[],int n,int i){
    // base case 
    if (i>=n)
    {
        return;
    }
    // 1 case solve krdo
    cout<<arr[i]<<" ";
    // baki ka recursion solve kr lega
    printArray(arr,n,i+1);

}

void findMax(int arr[],int i,int n,int& maxi){
    // base case
    if (i>=n){
        return;

    }
    // 1 case solve krdo
    if (arr[i]>maxi)
    {
        maxi = arr[i];
    }

    // R.R
    findMax(arr,i+1,n,maxi);
    



}

void findMini(int arr[],int i,int n,int& mini){
    // base case
    if (i>=n){
        return;

    }
    // 1 case solve krdo
    if (arr[i]<mini)
    {
        mini = arr[i];
    }

    // R.R
    findMini(arr,i+1,n,mini);
    



}

int main(){
    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;

    // int ans = climbStairs(n);
    // cout<<"Answer is: " <<ans<<endl;

    // int arr[5] ={11,22,33,44,55};
    // int n =5;
    // int i= 0;
    // printArray(arr,n,i);


    // int arr[5] ={11,22,3,44,7};
    // int n =5;
    // int maxi = INT_MIN;
    // int i =0;
    // findMax(arr,i,n,maxi);
    // cout<<maxi<<endl;


    int arr[5] ={11,22,13,44,7};
    int n =5;
    int mini =  INT_MAX;
    int i =0; 
    findMini(arr,i,n,mini);
    cout<<mini<<endl;


}