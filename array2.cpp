# include <iostream>
#include <cstring>
# include <limits.h>
# include<vector>
using namespace std;


int uniqueElement(vector<int>arr){

    int ans  = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans^arr[i];
    }

    return  ans;
    

}


int main(){
    // creating vector
    // vector<int> arr{12,12,2,3};

    // cout<< arr.size()<<endl;
    // cout<<arr.capacity()<<endl;


    // // inset

    // arr.push_back(4);
    // arr.push_back(23);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<< arr.at(i)<<" ";
    // }

    // arr.pop_back();

    // cout<<endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    // cout<<endl;


    // vector<int>vector2(10);
    // vector<int>vector1(10,-1);



    // cout<<vector2.size()<<endl;
    //  for (int i = 0; i < vector1.size(); i++)
    // {
    //     cout<< vector1[i]<<" ";
    // }
    // cout<<endl;
    // int n;
    // cout<<"Enter the n :"<<endl;
    // cin>>n;

    // vector<int>brr(n,-2);
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout<< brr[i]<<" ";


    // }

    // vector<int> a  = {1,2,3,4};
    // for (int i = 0; i < a.size(); i++)
    // {
    //     /* code */
    //     cout<<a.at(i)<<" ";
    // }
    // cout<<endl;

    // vector<int> as;
    // cout<<as.empty()<<endl;
    // cout<<a.empty();
    

    // FIND  UNIQUE NUMBER

    // int n;
    // cout<<"enter :"<<endl;

    // cin>>n;

    // vector<int> arr(n);
    // cout<<" Enter the element :"<<endl;

    // // taking input
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }

    // int findelement = uniqueElement(arr);

    // cout<< " Unique element is :"<<findelement<<endl;



   // UNION IN ARRAY


//    int a[] = { 1,3,5,7,9};
//    int size1 = 5;
//    int a[] = {2,4,6,8};
//    int size2 = 4;

//    vector<int>ans;

//    for (int  i = 0; i < 5; i++)
//    {
//      ans.push_back(a[i]);
//    }
//    for (int  i = 0; i < 5; i++)
//    {
//      ans.push_back(b[i]);
//    }
   
//    // print
//     for (int  i = 0; i < ans.size(); i++)
//    {
//     cout<<ans[i]<<" ";
     
//    }


//    vector<int> a = { 1,3,5,7,9};
//    vector<int> b = { 2,4,6,8};

//    int s = a.size() + b.size();

//    for (int i = 0; i < s ; i++)
//    {
//     a.push_back(b[i]);
    
//    }
//     // print
//    for (int  i = 0; i < s; i++)
//    {
//     cout<<a[i]<<" ";
     
//    }
   

// INTERSECTION IN ARRAY


// vector<int>a{ 3,3,5,7,9};
// vector<int>b{ 3,3,9,51,7,19};

// vector<int>ans;

// // outer loop for a vector
// for (int i = 0; i < a.size(); i++)
// {
//     int element = a[i];
//     // for every element run loop on b array
//     for (int j = 0; j < b.size(); j++)
//     {
//         if(element== b[j]){
//             // mark 
//             b[j] = -1;
//             ans.push_back(element);
//         }
//     }
    
// }

// for(auto value : ans){
//     cout<< value <<" ";
// }



//          PAIR SUM


// vector<int> arr{1,3,5,7,2,4,6};
// int sum =9;

// // outer loop 
// for (int i = 0; i < arr.size(); i++)
// {
//     for (int j = i+1; j < arr.size(); j++)
//     {
//         if(arr[i]+arr[j]==sum){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//         }
//     }
    
// }



// TRIPLET SUM

// vector<int> arr{10,20,30,40};
// int sum =80;

// // outer loop 
// for (int i = 0; i < arr.size(); i++)
// {
//     int element1 = arr[i];
//     for (int j = i+1; j < arr.size(); j++)
//     {
//         int element2 = arr[j];
//         for (int k = j+1; k < arr.size(); k++)
//         {
//             int element3 = arr[k];
//             if(element1 + element2 + element3==sum){
//             cout<<"("<<element1 <<","<< element2 <<","<< element3 <<")"<<endl;
//         }
           
//         }
        

        
//     }
    
// }


    
// vector<int>arr {10,20,30,40,50,60,70,80,90};
// int sum = 110;

// for (int i = 0; i < arr.size(); i++)
// {
//     int element1 = arr[i];
//     for (int j = i+1; j < arr.size(); j++)
//     {
//         int element2 = arr[j];
//         for (int k = j+1; k < arr.size(); k++)
//         {
//             int element3 = arr[k];
//             for (int p = k+1; p < arr.size(); p++)
//             {
//                 int element4 = arr[p];
//                 if(element1 + element2 + element3 + element4==sum){
//                 cout<<"("<<element1 <<","<< element2 <<","<< element3 << ","<< element4 <<")"<<endl;
//         }
                
//             }
            
     
           
//         }
        

        
//     }
    
// }




// SORT 1'S AND 0'S


vector<int> arr {1,0,0,0,0,1,1};

int i= 0;
int start =0;
int end = arr.size() -1;

while (start < end)
{
    if(arr[i]==0){
        swap(arr[start],arr[i]);
        start++;
        i++;
    }
    else
    {
        swap(arr[end],arr[i]);
        end--;
    }

}

for (int i = 0; i < arr.size(); i++)
{
    cout<< arr[i] <<" ";
}
























}

