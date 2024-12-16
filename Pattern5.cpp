# include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number";
   cin>>n;

	for(int row = 0; row<n;row++){
        for(int col = 0 ; col<n;col++){
            
            // Here we can write if(row==0||col==0||row+col== n+1)
            if(row==0||col==0||col== n-row-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
          cout<<endl;
    }

}