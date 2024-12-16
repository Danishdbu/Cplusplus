# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

// int main(){

// void  printArray(vector<int>arr){
//     for(auto i : arr){
// cout<<i<<" ";

//     }
// cout<<endl;
// }

// //    declare
//     vector<int>arr;
//     int ans = (sizeof(arr)/sizeof(int));
//     cout<<ans<<endl;
// // size of vector
//     cout<<arr.size(); // defult size is zero (0)
//     cout<<endl<<arr.capacity()<<endl;

// // insert element
// arr.push_back(3);
// arr.push_back(5);
// arr.push_back(7);

// // printing
// for(int i = 0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// arr.pop_back();  //Removes last element.

// for(int i = 0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }

// vector<int>arr1(10);
// cout<<"Size of arr1 "<<arr1.size(); 
// cout<<endl<<"capacity of arr1 "<<arr1.capacity()<<endl;

// for(int i = 0;i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }


// vector<int>arr1(10,-1);
// cout<<"Size of arr1 "<<arr1.size(); 
// cout<<endl<<"capacity of arr1 "<<arr1.capacity()<<endl;

// for(int i = 0;i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }


// user define vector

// int n;
// cout<<"Enter the element"<<endl;
// cin>>n;
// vector<int>arr(n,2);
// for(int i = 0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }

// vector<int>crr{10,20,30,40,50};
// for(int i = 0;i<crr.size();i++){
//     cout<<crr[i]<<" ";
// }
// cout<<endl<<crr.capacity()<<endl;

// cout<<"Size of crr "<<crr.size()<<endl; 
// cout<<"Insert"<<endl;
// crr.push_back(4);
// crr.push_back(4);
// crr.push_back(4);
// crr.push_back(4);
// crr.push_back(4);
// crr.push_back(4);
// cout<<"after pushin"<<endl;

// for(int i = 0;i<crr.size();i++){
//     cout<<crr[i]<<" ";
// }

// cout<<endl<<crr.capacity()<<endl;


// cout<<"Size of crr "<<crr.size(); 





//  find  Unique element--------------

// int findunique(vector<int> arr){
//     int a = 0;
//     for(int i =0 ; i<arr.size();i++){
//         a = a ^ arr[i];

//     }
//     return a;
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     // enter the element
//     for(int i =0; i<arr.size();i++){
//         cin>>arr[i];
//     }

//     int uniqueElement = findunique(arr);
//     cout<<"unique Element is "<<uniqueElement<<endl;


// int findUnique(vector<int> arr) {
// 	int ans = 0;

// 	for(int i=0; i<arr.size(); i++) {
// 		ans = ans ^ arr[i];
// 	}

// 	return ans;
// }

// int main(){
// 	//UNique Element

// 	int n;
// 	cout << "Enter the size of array " << endl;
// 	cin >> n;


// 	vector<int> arr(n);
// 	cout << "Enter the elements " << endl;
// 	//taking input
// 	for(int i=0; i<arr.size(); i++) {
// 		cin >> arr[i];
// 	}

// 	int uniqueElement = findUnique(arr);

// 	cout << "Unique Element is  " << uniqueElement << endl;
// cout<<(3^3);


// UNION -------------------


int main(){
//     int arr[]={1,2,3,4};
//     int size_a = 4;
//     int size_b = 3;
//     int brr[] = {5,7,9};
//     vector<int>ans;
//     // push all element of arr
//     for(int i =0; i< size_a;i++){
//         ans.push_back(arr[i]);

//     }
//     // push all element of arr
//     for(int i =0; i< size_b;i++){
//         ans.push_back(brr[i]);

//     }

// // print 
// for(int i= 0; i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }



// INTERSECTION -------------



//     int arr[]={1,2,3,4};
//     int size_a = 4;
//     int size_b = 3;
//     int brr[] = {3,7,1};
//     vector<int>ans;
//     // OUTER LOOP
//     for(int i =0 ;i<size_a;i++){

//         // INER LOOP
//         for(int j =0 ;j<size_b;j++){
//             if(arr[i] ==brr[j]){
//                 ans.push_back(arr[i]) ;

             
//             }
            
//     }
//     }
     
// for(int i= 0; i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }





//     int arr[]={1,3,4,4};
//     int size_a =4 ;
//     int size_b = 6 ;
//     int brr[] = {3,4,1,5,6,4};
//     vector<int>ans;
//     // OUTER LOOP
//     for(int i =0 ;i<size_a;i++){

//         // INER LOOP
//         for(int j =0 ;j<size_b;j++){
//             if(arr[i] ==brr[j]){
//                 brr[j] = -1;
//                 ans.push_back(arr[i]) ;

             
//             }
            
//     }
//     }
     
// for(int i= 0; i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }




//  PAIR SUM --------------------


    // int arr[]={1,5,3,4};
    // int size_a = 4 ;
    // // int size_b = 6 ;
    // // int brr[] = {3,4,1};
    // int sum = 9;

    // // vector<int>ans;
    // for(int i =0;i<size_a;i++){
    //     for(int j =i+1;j<size_a;j++)
    //     if(arr[i]+arr[j]==sum){
           
    //         cout<<"the pair sum is "<<arr[i]<<" + "<<arr[j]<<" sum is "<<sum <<endl;
    //     }
    // }


// pair sum of  for two array =========


    // int arr[]={1,5,3,4};
    // int size_a = 4 ;
    // int size_b = 4 ;
    // int brr[] = {3,6,1};
    // int sum = 9;

    // // vector<int>ans;
    // for(int i =0;i<size_a;i++){
    //     for(int j =0;j<size_b;j++)
    //     if(arr[i]+brr[j]==sum){
           
    //         cout<<"the pair sum is "<<arr[i]<<" + "<<brr[j]<<" sum is "<<sum <<endl;
    //     }
    // }

//  tripple sum-------------

// int arr[]={10,20,30,40};
// int sum = 80;
//     int size_a = 4 ;
//     for(int i =0;i<size_a;i++){
//         for(int j =i+1;j<size_a;j++){
//             for(int k = j+1; k<size_a;k++){
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                     cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<"="<<sum<<endl;
//         }

//             }


//     }

//     }




// int arr[]={10,20,30,40,50};
// int sum = 120;
//     int size_a = 5 ;
//     for(int i =0;i<size_a;i++){
//         for(int j =i+1;j<size_a;j++){
//             for(int k = j+1; k<size_a;k++){
//                 for(int l = k+1;l<size_a;l++){
//                 if(arr[i]+arr[j]+arr[k]+arr[l]==sum){
//                     cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" + "<<arr[l]<<" = "<<sum<<endl;
//         }
//                 }

//             }


//     }

//     }


// SORT 0'S AND 1'S


// vector<int>arr{0,1,0,0,0,1,0,1,1,0};
// int start = 0;
// int end = arr.size()-1;
// int i =0;
// while(i != end){
//     if(arr[i]==0){
//         swap(arr[start],arr[i]);
//         start++;
//         i++;

//     }
//     else{
//         swap(arr[end],arr[i]);
//         end--;
//     }


// }
// for(auto val : arr ){
//     cout<<val<<" ";
// }







// vector<int>arr{0,1,0,1,1,0,1,0,1,1};

// int start = 0;
// int end = arr.size()-1;
// int i =0;
// while(i != end){
//     cout<< "for i = "<<i<< "start = "<<start<<" end = "<<end<<endl;
//     if(arr[i]==0){
//         cout<<"found zero "<<endl;
//         cout<<"before swap ";
//         printArray(arr);

//         swap(arr[start],arr[i]);
//         cout<<"after swap ";
//         printArray(arr);
//         start++;
//         i++;
//         cout<< "now i = "<<i<< "start = "<<start<<" end = "<<end<<endl;

  
//     }
//     else{
//         cout<<"found one "<<endl;
//         cout<<"before swap ";
//         printArray(arr);

//         swap(arr[end],arr[i]);
//         cout<<"after swap ";
//         printArray(arr);
//         end--;
//         cout<< "now i = "<<i<< "start = "<<start<<" end = "<<end<<endl;
//     }


// }
// for(auto val : arr ){
//     cout<<val<<" ";
// }

// vector<int>arr{0,1,0,0,0,1,0,1,1,0};
// sort(arr.begin(),arr.end());  //Sorting the vector
// for(auto val : arr ){
//     cout<<val<<" ";
// }
// Sorting a Vector in C++ in Descending Order


vector<int> vec { 2,4,6,8,10 };
cout<<"Before sorting vector : ";

for(auto val : vec ){
    cout<<val<<" ";
}
sort(vec.begin(),vec.end(), greater<int>());//Sorting the vector using greater<int>() function
cout<<"\n\nAfter sorting vector : ";

for(auto val : vec ){
    cout<<val<<" ";
}



    return 0;
}
