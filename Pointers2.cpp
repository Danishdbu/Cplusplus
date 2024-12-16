# include <iostream>
using namespace std;

void solve(int arr[] ){
    cout<<"Size inside solve function "<<sizeof(arr)<<endl;
    cout<<"arr "<<arr<<endl;
    cout<<"&arr "<<&arr<<endl;

    arr[0]=50;


}

void update(int *p){
    cout<<"add stored in p is "<<p<<endl;
    cout<<"add of p is "<<&p<<endl;

    
    *p = *p + 10;
}


int main (){
    // int arr[4] = {12,14,16,18};
    // cout<<arr<<endl; // base address
    // cout<<arr[0]<<endl; // 12
    // cout<<&arr<<endl; // base address
    // cout<<&arr[0]<<endl; // base address
     
    // int *p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // int arr[4] = {12,14,16,18};

    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;

    // cout<<"M"<<1[arr]<<endl;
    // cout<<*(3+arr)<<endl;

    //arr = arr +2; // error

    // int *p = arr;
    // p=p+2;

    // int arr[10];
    // cout<<sizeof(arr)<<endl;

    // int *p = arr;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl; // 4 becouse it is integer type variable

    // char ch[10] = "Babbar";
    // char *c = ch;

    // cout<<&ch<<endl;
    // cout<<&c<<endl;

    // cout<<ch<<endl;
    // cout<<c<<endl;

    // cout<<*c<<endl;
    // cout<<ch[0]<<endl;

    // char name[10] = "SherBano";
    // char *cpt = &name[0];

    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<cpt<<endl;
    // cout<<&cpt<<endl;
    // cout<<*(cpt+3)<<endl;
    // cout<<cpt+2<<endl;
    // cout<<*cpt<<endl;
    // cout<<cpt+8<<endl;



    // char ch = 'k';
    // char * c = &ch;

    // cout<<c<<endl;

    // char c[10] ="danish";
    // cout<<c<<endl;

    // char* ch = "Danish";
    // cout<<ch<<endl;

    // int arr[10] ={1,23,4,5};
    // cout<<"Size inside main function "<<sizeof(arr)<<endl;
    // cout<<"arr1 "<<arr<<endl;
    // cout<<"&arr1 "<<&arr<<endl;
    // // printing array inside main()

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<" ";
        
    // }
    // cout<<endl;
    // cout<<endl<<endl<<"Now calling solve function"<<endl;
    


    // solve(arr);
    // cout<<"Wapas mai function aaya hai"<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<" ";
        
    // }


    int a =5;
    
    cout<<"add of a"<<&a<<endl;
    int *ptr = &a;
    cout<<"add stored in ptr is "<<ptr<<endl;
    cout<<"add of ptr is "<<&ptr<<endl;

    cout<<"value of a "<<a<<endl;


    update(ptr);
    cout<<"updated value: "<<a<<endl;

















    
    











    



return 0;
}