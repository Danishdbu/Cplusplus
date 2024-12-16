# include<iostream>
# include <vector>
using namespace std;

int findSquareRoot(int n){
    int target = n;
    int s =0;
    int e = n;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        if (mid*mid==target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid -1;
         

        }
        else{
            // store 
             ans = mid;

            // right search
            s = mid + 1;

        }

        mid = s+(e-s)/2;
        
        
    }
    return ans;


}

int FindPivot(vector<int> arr){
    int start =0;
    int end = arr.size() -1 ;
    int mid = start  + (end-start)/2;

    while(start <= end){
        if(mid +1 < arr.size() && arr[mid] > arr[mid+1]){
            return arr[mid ];
        }

        if (mid -1 >= 0 && arr[mid-1]>arr[mid])
        {
            return arr[mid -1];
        }

        if (arr[start] < arr[mid])
        {
            start = mid +1;
        }
        else{
            end = mid - 1;
        }

        mid = start  + (end-start)/2;

        
        
    }
    return -1;


}


int binarySearch(vector<int>arr,int target){
    int s= 0;
    int e = arr.size()-1;

    int mid = s + (e-s)/2;


    while (s<=e){
        if (arr[mid]==target)
        return mid;
        
        if (mid-1 >= s && arr[mid-1]==target)
        return mid -1;
        
        if (mid+1 <= e && arr[mid+1] == target)
        return mid + 1;
        

        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }

        mid = s + (e-s)/2;
        
        
        
        
        
    }
    return -1;
    

}

int main(){

    // find the Pivot Element

    // vector<int> arr {3,4,5,6,7,1,2};

    // int ans = FindPivot(arr);
    // cout<<"Pivot Element is "<< ans << endl;

// find the squareRoot of a number using binary search

    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;

    // int ans = findSquareRoot(n);
    // cout << "Ans is " << ans << endl;

    // int precision;
    // cout << "Enter the number of floating digits in precison "<<endl;
    // cin >> precision;

    // double step = 0.1;
    // double finalAns = ans;
    // for(int i=0; i<precision; i++) {

    // for(double j=finalAns; j*j<=n; j = j + step) {
    //     finalAns = j;
    // }
    //     step = step / 10;
    // }
    // cout << "Final ans is. "<< finalAns << endl;


    //  BINARY SEARCH IN A NEARLY SORTED ARRAY

    vector<int> arr{10,3,40,20,50,80,70};
    int target =70;

    int ans = binarySearch(arr,target);
    
    cout<<"index of "<< target <<" is " <<ans<<endl;


  
   

 return 0;
}
