# include <iostream>
using namespace std;

int main(){
int arr[4]={2,4,6,8};


cout<<arr[0]<<endl;
cout<<&arr[0]<<endl;
cout<<arr<<endl;
cout<<&arr<<endl;


int *p = arr;
cout<<*p<<endl;


int c[3]= {1,2,3};
cout<<c<<endl;

}