# include <iostream>
# include <limits.h>
# include <vector>

using namespace std;

int searching(int r[][3],int row,int col,int key){
    for (int i = 0;i<row;i++){
   
    for(int j =0;j<col;j++){
        if(key == r[i][j]){
            return true;
    }
   }
   }
 return false;
}


//  find max 

int findmax(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    for (int i = 0;i<row;i++){
        for(int j =0;j<col;j++){ 
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }

        }
        }

        return maxi;
}




//  find min

int findmin(int arr[][3],int row, int col){
    int mini = INT_MAX;
    for (int i = 0;i<row;i++){
        for(int j =0;j<col;j++){ 
            if(arr[i][j]<mini){
                mini = arr[i][j];
            }

        }
        }

        return mini;
}

// transpose
void transpose(int arr[][3],int row, int col,int transposeArr[][3]){
    
    for (int i = 0;i<row;i++){
        for(int j =0;j<col;j++){ 
        //   swap(arr[i][j],arr[j][i]);
        transposeArr[j][i] = arr[i][j];

        }
        
       cout<<endl;  
        }

       
}

//print array
    
void print(int arr[][3],int row, int col){
  
    for (int i = 0;i<row;i++){
        for(int j =0;j<col;j++){ 
          cout<<arr[i][j]<<" ";

        }
           cout<<endl;  
        }

}



// int N;
// cin>>N;
// for(int i = 0;i<N;i++){
//     if(i==8){
//         cout<<"eight"<<endl;
//     }
//     if(i==9){
//         cout<<"nine"<<endl;
//     }
// }
// cout<<"even"<<endl;
// cout<<"odd"<<endl;
// 

// // int arr[3][3];
// int brr[3][3] ={
// {1,2,3},
// {4,5,6},
// {7,8,9}};
// cout<<brr[2][2]<<endl; //8

// cout<<brr[1][1]<<endl;  //5

// cout<<brr[0][1]<<endl;  //2

// cout<<brr[1][6]<<endl;  

// cout<<brr[1][3]<<endl;  



// int r2d[3][3] ={
// {1,2,3},
// {4,5,6},
// {7,8,9}};
// Row wise
// Outer loop

// for(int i =0;i<3;i++){
//     // for every row ,we need to print value in each column
//     for(int j =0; j<3;j++){
//         cout<<r2d[i][j]<<" ";
        
//     }
//     cout<<endl;
// }

// // column wise

// cout<<"column wise printing"<<endl;

// for(int i =0;i<3;i++){
//     // for every row ,we need to print value in each column
//     for(int j =0; j<3;j++){
//         cout<<r2d[j][i]<<" ";
        
//     }
//     cout<<endl;
// }
// ROW WISE INPUT-------

// int a[3][3];
// int row = 3;
// int col = 3;


// for (int i = 0;i<row;i++){
//     for(int j =0;j<col;j++){
//         cin>>a[i][j];
//     }
//     cout<<endl;
// }

// cout<<"print"<<endl;

// for (int i = 0;i<row;i++){
//     for(int j =0;j<col;j++){
//         cout<<a[i] [j]<<" ";
//     }
//      cout<<endl;
// }


// // COLUMN WISE-------
// int a[3][3];
// int row = 3;
// int col = 3;


// for (int i = 0;i<row;i++){
//     for(int j =0;j<col;j++){
//         cin>>a[j][i];
//     }
//     cout<<endl;
// }

// cout<<"print"<<endl;

// for (int i = 0;i<row;i++){
//     for(int j =0;j<col;j++){
//         cout<<a[i][j]<<" ";
//     }
//      cout<<endl;
// }



// int r[3][3] ={
// {1,2,3},
// {4,5,6},
// {7,8,9}};
// int row = 3;
// int col = 3;
// // int sum =0;
// for (int i = 0;i<row;i++){
//     int sum =0;
//     for(int j =0;j<col;j++){
//         sum = sum + r[i][j];
       
//     }
//     cout<<sum<<endl;
// }


//  Linear search in 2D array

// int r[3][3] ={
// {1,2,3},
// {4,5,6},
// {7,8,9}};
// int row = 3;
// int col = 3;
// int key ;
// cout<<"enter the key";
// cin>>key;
// int ans = searching(r,row,col,key);

// if(ans==true){
//     cout<<"Got this "<<endl;
// }
// else{
//     cout<<"not Got this "<<endl;
// }

// int arr[3][3]={{5,6,91},{71,11,21},{41,13,12}};
// int row = 3;
// int col = 3;
// int maximumNum = findmax(arr,col,row);
// cout<<"maximum number "<<maximumNum<<endl;
// cout<<"minimum number "<<findmin(arr,row,col)<<endl;

// int arr[3][3]={{5,6,91},{71,11,21},{41,13,12}};
// int row = 3;
// int col = 3;
// int transposeArr[3][3];
// cout<<"before "<<endl;
// print(arr,row,col);
// transpose(arr,row,col,transposeArr);
// cout<<"after "<<endl;
// print(transposeArr,row,col);

int main(){

//--------------------------- VECTOR IN 2D ARRAY------------------

// vector<vector<int> > arr;

// vector<int> a{11,22,23};
// vector<int> b{12,26,33};
// vector<int> c{15,24,44};

// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// //  printing
// for(int i =0;i<arr.size();i++){
//     for(int j =0;j<arr[0].size();j++){
//         cout<<arr[i][j]<<" ";

//     }
//     cout<<endl;
// }



// vector<vector<int> > arr;

// vector<int> a{11,22,23};
// vector<int> b{12,26,33,7};
// vector<int> c{15,24};

// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// //  printing
// for(int i =0;i<arr.size();i++){
//     for(int j =0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";

//     }
//     cout<<endl;
// }



int r = 3;
int c= 5;
vector<vector<int> >arr(r,vector<int>(c,-8));

for(int i =0;i<arr.size();i++){
    for(int j =0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}





return 0;
}