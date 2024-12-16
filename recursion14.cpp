# include <iostream>
# include <limits.h>
# include <vector>
using namespace std;

int climbSt(int n){
    //base case 
    if(n==0|| n == 1){
        return 1;

    }
    int ans = climbSt(n-1) + climbSt(n-2) ;



    return ans ;

}






void print(int arr[],int n, int i){
    if(i>=n){
        return;
    }


    cout<<arr[i]<<" ";
    print(arr,n,i+1); // i+1
}


void maxvalue(int arr[], int n, int i,int& maxi) {
    if(i>=n){
        return ;
    } 
    if(arr[i]>maxi){

        maxi = arr[i];
    }  

    maxvalue( arr , n,  i+1, maxi);
 

}



int getFibo(int n){
 //   cout<<"fun call "<<n<<endl;
    // Base case
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
        
    }


    // Recursive relation
    int ans = getFibo(n-1) + getFibo(n-2);
// cout<<"fun call "<<n<<endl;
    return ans;


}

void ReverseC(int n){
    // BC
    if(n==0){
        return ;

    }
    // process
    cout<<n<<" ";
// recursive relation
    ReverseC(n-1);

}




////              find the factorial


int factorial(int n ){
    cout<<"Fun call "<<n<<endl;
    // base case 
    if (n==1){
        return 1;

    }
    
   
    // recursion relation
    return n * factorial(n-1);

}

void getkey(string& str,int& i,int& n ,char& key,vector<int>& ans){
    
    if(i>n){
        return ;
    }

    if(str[i]==key){
        // cout<<"Found at "<<i<<endl;
        ans.push_back(i);
    
    }
    int val = i+1;
    return getkey(str,val,n,key,ans);



}

void print_digit(int N){
    if(N==0){
        return;
    }

    int newvalueofN = N/10;
    //int newvalueofN = N/10;
    print_digit(newvalueofN);

    // int digit = N%10;
    // cout<< digit<<" ";
    // int newvalueofN = N/10;
    int digit = N%10;
    cout<< digit <<" ";

}

bool Vsort(vector<int> &v, int i, int n){
    if( i == n-1){
        return true ;
    }
    if(v[i+1] > v[i]){
        return true ;
    }
    return Vsort( v, i+1, n);
}

int binarySearch(vector<int> &v,int s,int e,int &key){
   if(s>e){
    return -1;
   }
   int mid = (s+e)/2;

   if(v[mid]== key ){
    return mid;
   }
//    if(v[mid]<key){
//     return binarySearch(v,mid+1,e,key);
//    }
//    else{
//     return binarySearch(v,s,mid-1,key);

//    }
    return (v[mid]<key) ? binarySearch(v,mid+1,e,key):binarySearch(v,s,mid-1,key);




}

void printSubsequences(string str,string output,int i){
    if(i>=str.length() ){
        cout<< output<<endl;
        return;

    }
    // exclude
    printSubsequences(str,output,i+1);
    // include 
    output.push_back(str[i]);
    printSubsequences(str,output,i+1);
   
   




}




int main (){
//     int  n;
//     cout<<"Enter ";
//     cin>>n;
    
//     int ans = climbSt(n);
//     cout<<"Answer "<<ans<<endl;


// int arr[5] = {1,2,3,4,5};
// int n = 5;
// int i =0;
// print(arr,n,i);

// int arr[5] = {10,200,23,34,15};
// int n = 5;
// int i =0;
// int maxi = INT_MIN;
// maxvalue( arr , n,  i, maxi);
// cout<<maxi<<endl;

// int n;
// cout<<"Enter the number : "<<endl;

// cin>>n;
// int ans = getFibo(n);
// cout<<"fibonacci is "<<ans<<endl;


// int n;
// cout<<"Enter the number : "<<endl;

// cin>>n;
// ReverseC(n);

// int n;
// cout<<"Enter the number : "<<endl;

// cin>>n;
// int find = factorial(n);

// cout<<"factorial is "<<find;


// string str = "danisnhgfn";
// int i = 0;
// int n = str.length();
// char key = 'n';
// vector<int>ans;
// // int ans = getkey(str,i,n,key);
// // cout<<ans;
// getkey(str,i,n,key,ans);
// if(ans == true){
//     cout<<key<<" is existing in str "<<endl;

// }
// else{
//     cout<<key<<" is not existing  in str "<<endl;
// }
// cout<<"print ans "<<endl;
// for(auto val :ans){
//     cout<<val<<" ";
// }
// cout<<endl;

// int N = 0647;
// print_digit(N);


// vector<int>v {10,10,30};
// int n = v.size();
// int i = 0;
// bool isSorted = Vsort(v,i,n);
// if(isSorted){
//     cout<<"Array is sorted"<<endl;
// }
// else{
//     cout<<"Array is not sorted"<<endl;

// }

// vector<int>v {10,12,23,30,40,50};
// int n = v.size();
// int s = 0;
// int e = n-1;
// int key;
// cin >> key;
// int ans = binarySearch(v,s,e,key);
// cout<<"Aswer is "<<ans<<endl;

string str = "abc";
string output = "";
int i = 0;
printSubsequences(str,output,i);



return 0;
}