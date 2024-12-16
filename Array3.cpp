# include <iostream>
# include <limits.h>
# include<vector>
using namespace std;



bool findkey(int arr[][4],int row,int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == key)
            return true;
        }
        
    }

    // value is not present
    return false;
    
}

int getMaxi(int arr[][4],int row, int col){
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j]>maxi)
            maxi = arr[i][j];
        }
        
    }

    return maxi;
    

}

int getMini(int arr[][4],int row, int col){
    int mini = INT_MAX;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j]<mini)
            mini = arr[i][j];
        }
        
    }

    return mini;
    

}


void transpose(int arr[][3],int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < i; j++){
            swap(arr[i][j],arr[j][i]);
            
        }
        
    }

}
void printArray(int arr[][3],int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<< arr[i][j]<<" ";
            
            
        }
        cout<<endl;
        
    }
    


}

int main(){

    // declare 2D Array
    // int arr[3][3];

    // initialise
    // int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout<<brr[2][2]<<endl;

    // cout<<brr[0][0]<<endl; // 1
    // cout<<brr[0][1]<<endl; // 2
    // cout<<brr[0][2]<<endl; // 3
    // cout<<brr[1][0]<<endl;  // 4 
    // cout<<brr[1][1]<<endl;  // 5
    // cout<<brr[1][2]<<endl;  // 6
    // cout<<brr[2][0]<<endl;  // 7
    // cout<<brr[2][1]<<endl;  // 8
    // cout<<brr[2][2]<<endl;  // 9 


    
        // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        // row wise access

        // outer loop 
        // for (int i = 0; i < 3; i++)
        // {
        //     // for every row ,we need to print value in each column
        //     for (int j = 0; j < 3; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }

        //     cout<<endl;
            
        // }

        // cout<<"column wise"<<endl;
        // cout<<endl;


        // // column wise

        // // outer loop 
        // for (int i = 0; i < 3; i++)
        // {
        //     // for every row ,we need to print value in each column
        //     for (int j = 0; j < 3; j++)
        //     {
        //         cout<<arr[j][i]<<" ";
        //     }

        //     cout<<endl;
            
        // }


        // INPUT


        // row wise 

        // int arr[3][3];
        // int row =3;
        // int col = 3;

        // for (int i = 0; i < row; i++)

        // {
        //     /* code */
        //     for (int j = 0; j < col; j++)
        //     {
        //         cin>>arr[i][j];
        //     }
            
        // }

        // for (int i = 0; i < row; i++)

        // {
        //     /* code */
        //     for (int j = 0; j < col; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
            
        // }

    // COLUMN WISE

        // int arr[3][3];
        // int row =3;
        // int col = 3;

        // for (int i = 0; i < row; i++)

        // {
        //     /* code */
        //     for (int j = 0; j < col; j++)
        //     {
        //         cin>>arr[j][i];
        //     }
            
        // }

        // for (int i = 0; i < row; i++)

        // {
        //     /* code */
        //     for (int j = 0; j < col; j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
            
        // }
        
 /// QUEstion



 // row sum print

//  int arr[3][3] = {{2,5,7},
//  {12,0,3},
//  {2,6,8}};
//  int row = 3;
//  int col = 3;
//  // int sum = 0;

//  for (int i = 0; i < row; i++)
//  {
//     int sum = 0;
//     for (int j = 0; j < col; j++)
//     {
//        sum = sum + arr[i][j];
//        //cout<<sum<<" ";
       
//     }
//     cout<<sum<<" ";
           
            
//     }



// KEY SEARCHING

// int arr[3][4] = {{12,23,45,7},
// {11,34,55,66},
// {8,9,10,15}};

// int row = 3;
// int col = 4;
// int key;
// cout<<"Enter the key "<<endl;
// cin>>key;

// int result = findkey( arr ,row,col,key);

// if (result)
// {
//     cout<<"FOUND KEY "<<endl;
// }
// else{
//     cout<<"NOT FOUND KEY "<<endl;

// }    


// FIND THE MAXIMUM  AND MANIMUM

// int arr[3][4] = {{1,23,45,7},
// {110,34,55,66},
// {8,9,40,15}};

// int row = 3;
// int col = 4;

// cout<< getMaxi(arr,row,col);

// cout<< getMini(arr,row,col);



// TRANSPOSE A MATRIX


// int arr[3][3] = {{2,4,7},
// {9,3,5},
// {8,9,7}};

// int row = 3;
// int col = 3;

// cout << " print Actual Array "<<endl;
// printArray(arr,row,col);
// cout<<"transpose array "<<endl;
// transpose(arr,row,col);
// cout<< "print array again"<<endl;
// printArray(arr,row,col);
    





// vector<vector<int>> V;
// cout<<"hhiiii";

// vector<vector<int>> arr;
// vector<int> a{1,2,3};
// vector<int> b{4,5,6};
// vector<int> c{7,8,9};

// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// for (int  i = 0; i < arr.size(); i++)
// {
//     for(int j =0 ; j< arr[0].size(); j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }


// vector<vector<int>> arr(3,vector<int>(5,-1));

// for (int  i = 0; i < arr.size(); i++)
// {
//     for(int j =0 ; j< arr[0].size(); j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
    


    
}