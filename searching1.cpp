# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

int binarySearch(int arr[],int size, int target){
    int start = 0;
    int end = size -1;

    int mid = start + (end - start)/2 ;     // (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid -1 ;
        }
        else{
            // search in right

            start = mid + 1;
        }

        mid = start + (end - start)/2 ;
        
    }
    // element not found 
     return -1;
    

}

int firstOccurence(vector<int> v ,int target){
    int start= 0;
    int end = v.size() -1;
    int mid = start + (end-start)/2;

    int ans = -1;

    while (start <= end)
    {
        if (v[mid] == target)
        {
            // store
            ans = mid;

            // left search
            end = mid -1;
            
        }

        else if (target < v[mid])
        {
            // search in left
            end = mid - 1;
        }
        else {
            // search in right
            start = mid + 1;
        }

        mid = start + (end - start)/2;


        
        
        
    }
    return ans;
    
}


int lastOccurence(vector<int> v ,int target){
    int start= 0;
    int end = v.size() -1;
    int mid = start + (end-start)/2;

    int ans = -1;

    while (start <= end)
    {
        if (v[mid] == target)
        {
            // store
            ans = mid;

            // right search
            start = mid + 1;
            
        }

        else if (target < v[mid])
        {
            // search in left
            end = mid - 1;
        }
        else {
            // search in right
            start = mid + 1;
        }

        mid = start + (end - start)/2;


        
        
        
    }
    return ans;
    
}

int MissingElement(vector<int> v ){

int s = 0 ;
int e = v.size() -1;
int mid = s + (e-s)/2;

while (s <= e)
{
    if (v[mid] != mid + 1 && v[mid - 1] == mid ) 
		{
            return mid + 1;          
        }
    
    
    else if(v[mid] == (mid + 1)){
        s = mid +1;
    }
    else{
        e = mid -1;
        
    }

    

    
    
    

    mid = s + (e - s)/2 ;
        
    }
}



int main (){
    // int arr[] = {2,4,6,8,10,12,16};
    // int target = 16;
    // int size = 7;


    // int indexOFtarget = binarySearch(arr,size,target);

    // if (indexOFtarget == -1 )
    // {
    //    cout<< "target not found "<< endl;
    // }
    // else{
    //     cout<< "target found at "<< indexOFtarget <<" index"<<endl;
    // }
    
    // vector<int> v{1,2,3,4,5};

    // int arr[] = {1,2,4,6,8};
    // int size = 5;

    // if (binary_search(v.begin(),v.end(),31))
    // {
    //     cout<<"FOUND "<<endl;
    // }
    // else{
    //     cout<< " NOT FOUND " <<endl;
    // }
    // if (binary_search(arr,arr+size,6))
    // {
    //     cout<<"FOUND "<<endl;
    // }
    // else{
    //     cout<< " NOT FOUND " <<endl;
    // }
    

 // FIND THE FIRST OCCURENCE OF AN ELEMENT

    // vector<int> V{1,2,3,3,3,4,5,3};
    // int target = 8;

    // int firstElement = firstOccurence(V,target);

    // cout<<"ans is : "<<firstElement<<endl;



 // FIND THE FIRST OCCURENCE OF AN ELEMENT

    // vector<int> V{1,2,3,3,3,3,4,5,7,7,7,7,9};
    // int target = 7;

    // int lastElement = lastOccurence(V,target);

    // cout<<"last ans is : "<<lastElement<<endl;


    // vector<int> V{1,2,3,3,3,3,4,5,7,7,7,7,9};
    // int target = 7;


    // auto ans1 = lower_bound (V.begin(),V.end(),target);
    // cout<< "ans1 is " <<ans1-V.begin() << endl;

    // auto ans2 = upper_bound (V.begin(),V.end(),target);
    // cout<< "ans2 is " <<ans2-V.begin() << endl;





// FIND MISSING ELEMENT

vector<int> v{1,2,3,4,6,7,8,9};

int result = MissingElement(v);
cout<< result;


    
































return 0;   
}