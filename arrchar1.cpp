# include <iostream>
# include <string.h>
using namespace std;

int getlenght(char name[]){
  int len = 0;
  int i =0;
  while (name[i] != '\0')
  {
    len++;
    i++;
  }
  return len;
  
}
int reverseCharArray( char name[]){
  int i =0;
  int n = getlenght(name);
  int j= n-1;

  while (i<=j)
  {
    swap(name[i],name[j]);
    i++;
    j--;
  }
  

}
void replaceSpace(char sentence[]){
  int i =0;
  int n = strlen(sentence);
  for (int i = 0; i < n; i++)
  {
    if (sentence[i] == ' ')
    {
      sentence[i] = '@';
    }
    
  }
  


}

bool checlPalindrome(char word[]){
  int i = 0;
  int n = strlen(word);
  int j = n-1;

  while (i<=j)
  {
    if (word[i] != word[j])
    {
      return false;
    }
    else{
      i++;
      j--;
    }
    return true;
    
  }
  

}

void convertUpper(char word[]){
 int n = getlenght(word);
 
 for (int i = 0; i < n; i++)
 {
  word[i] = word[i] - 'a' + 'A';

 }
 
  
}



int main(){
    // char ch[100];

    // cout<<"Enter your name "<<endl;

    // cin>>ch;

    // cout<<"Apka naam " <<ch<<" hai "<<endl;

    // char ch[100];

    // ch[0] = 'd';
    // ch[1] = 'o';
    // cin>>ch[2];

   // cout<<ch[0]<<ch[1]<<ch[2]<<endl;
  // cout<<ch;

//   char name [100];
//   cin>>name;

//   for (int i = 0; i < 7; i++)
//   {
//     cout<<"index "<<i<<" value "<<name[i] <<endl;
//   }
  
//   int value = (int)name[6];
//   cout<<"value is "<<value<<endl;

// char name[100];
// cin>>name;
// cout<<name;

 // getline(cin,str)
// char naam[100];

// cin.getline(naam,50);

// cout<<naam; // space ko read kr sakte hai


    // find the lenght of character
// char name[100];
// cout<<"ENTER"<<endl;
// cin>>name;
// cout<< "lenght is: "<<getlenght(name)<<endl;

// cout<<"len is "<<strlen(name)<<endl;


//   /// Reverse array
// char name[100];
// cout<<"ENTER the name "<<endl;
// cin>>name;
// cout<<"Initially is: "<<name<<endl;
// reverseCharArray(name);
// cout<<"After is: "<<name<<endl;





// REPLACE THE SPACE WITH @ 

// char sentence[100];
// cin.getline(sentence,100);

// replaceSpace(sentence);

// cout<<"print sentence"<<endl<<sentence<<endl;

// PALINDROME


// char word[100];
// cin>>word;
// cout<<"Check palindrome "<<checlPalindrome(word);


// CONVERT LOWER CASE CHARACTER IN UPPER CASE CHARACTER

// char word[100];
// cout<<"Enter the word: ";
// cin>>word;
// convertUpper(word);
// cout<<"Converted "<<word;

   // UPPER TO LOWER CASE
// char word[100];

// cout<<"Enter the word: ";
// cin>>word;
// int n = getlenght(word);
// for (int i = 0; i < n; i++)
// {
//   word[i] = word[i] - 'A' + 'a';
// }

// cout<<"Converted "<<word;



// ONLY FIRST LATTER UPER CASE
// char word[100];

// cout<<"Enter the word: ";
// cin>>word;
// int n = getlenght(word);
// for (int i = 0; i < n; i++)
// {
//   if (i==0)
//   {
//     word[i] = word[i] - 'a' + 'A';
//   }
  
  
// }

// cout<<"Converted "<<word;























return 0;

}