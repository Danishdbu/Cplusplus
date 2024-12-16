# include <iostream>
# include <string.h>
#include <cstring>

using namespace std;
int getlength(char name[]){
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
// Reverse char array 

void reversechar(char name[]){
    int i =0;
    int n = getlength(name);
    int j = n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}


// replkace the space in sentence with @ 
void replaceS(char sentence[]){
    int i =0;
    int n = strlen(sentence);
    while(i<n){
        if(sentence[i]==' '){
            sentence[i]= '@';
        }


      i++;  
    }





}

// palindrome-----------
bool Palindrome(char word[]){
    int i=0;
    int n = strlen(word);
    int j = n-1;
    while(i<=j){
        if(word[i]!=word[j]){
            return false;

        }
        else{
            i++;
            j--;
        }
    }
   return true;
}


// Conversion lower case into upper case
void convertIntoupper(char arr[]){

int n = strlen(arr);
for(int i =0;i<n;i++){
    arr[i]= arr[i] - 'a'+'A';

}


}


// Conversion upper case into lower case
void convertIntolower(char name[]){

int n = strlen(name);
for(int i =0;i<n;i++){
    name[i]= name[i] + 'a'-'A';

}


}







int main(){
//    char name[100];
//    cin>>name;
//    cout<<"Aapka naam ye hai "<< name<<endl;

// char ch[10];
// ch[0]='d';
// ch[1]= 'a';
// ch[2]='n';
// ch[3]= 'i';
// ch[4]= 's';
// ch[5]= 'h';

// // cout<<ch;

// // cout<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<ch[4]<<ch[5]<<endl;

// for(int i = 0;i<=5;i++){
//     cout<<ch[i]<<" ";
// }

// char ch[100];
// // cin>>ch;
// // cout<<"name"<<endl;
// // cout<<ch;


// cin.getline(ch,50);

// cout<<"name"<<endl;
// cout<<ch;


// char name[100];
// cin>> name;
// cout<<"length is "<<getlength(name)<<endl;

// cout<<"Length is "<<strlen(name)<<endl;
// cout<<"initial name "<<name<<endl;
// reversechar(name);

// cout<<"perfome reverse operetion "<<name<<endl;


// char sentence[100];
// cin.getline(sentence,100);
// cout<<"before "<<sentence<<endl;

// replaceS(sentence);
// cout<<"After the replacing with @ "<<sentence<<endl;

// char word[100];
// cin>>word;


// int ans = Palindrome(word);

// if(ans==true){
//     cout<<"It is true";
// }
// else{
//     cout<<"It is false";
// }

// char arr[100];
// cin>> arr;

// convertIntoupper(arr);
// cout<<arr<<endl;


// char name [100]= "DANISH";
// convertIntolower(name);
// cout<<name<<endl;






return 0;
}