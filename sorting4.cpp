# include <iostream>
# include <vector>
using namespace std;

int main(){
    // vector<int>arr{11,1,4,81,5,7};
    // int n = arr.size();

    // // SELECTION SORT

    // // OUTER LOOP --> (n-1)rounds
    // for (int i = 0; i < n-1; i++)
    // {
    //     int minIndex = i;
    //     // INNER LOOP --> index of minimum element in range i -> n
    //     for (int j = i+1; j < n ; j++)
    //     {
    //         if (arr[j]<arr[minIndex])
    //         {
    //             minIndex = j;
                
    //         }
            
    //     }
    //     // swap
    //     swap(arr[i],arr[minIndex]);
        
    // }
    
                   // BUBBLE SORT

    vector<int> arr{12,45,23,51,19,8};
    int n = arr.size();

    for (int round = 1; round < n ; round++)
    {
        for (int j = 0; j < n-round; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
            
        }
        
    }
    




    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    
return 0;
}