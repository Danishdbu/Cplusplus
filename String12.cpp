# include <iostream>
# include <string.h>
#include <cstring>

using namespace std;

bool compareS(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        int j =0;
        for(int i = 0; i<a.length();i++){
            if(a[i]!= b[j]) {
                return false;
            }
            j++;
        }
    }
    return true;
}











int main(){

// string str = "danish";
// // cin>>str;
// // getline(cin,str);
// cout<<str<<endl;

// cout<<"length "<<str.length()<<endl;

// cout<<"IsEmpty "<<str.empty()<<endl;
// str.push_back('A');
// cout<<str<<endl;
// str.pop_back();
// cout<<str<<endl;


// cout<<str.substr(0,4)<<endl;

// cout<<str<<endl;

string a = "over";
string b = "over";
// if(a.compare(b)==0){
//     cout<<"a and b exactly same string "<<endl;
// }
// else{
//     cout<<"a and b not same string "<<endl;

// }


// cout<< compareS(a,b);

// string x = "bbcd";
// string y = "acba";
// cout<<x.compare(y)<<endl;



// string sentence = "hello jee kaise ho saare ";
// string target = "hio";


// //cout<<sentence.find(target)<<endl;

// if(sentence.find(target)== string::npos){
//     cout<<" Not Found " <<endl;
// }

// else{
//     cout<<"found "<<endl;
// }

// string str = "This is my friend ";

// string repl = "sufiyan";

// str.replace(0,4,repl);
// cout<<str<<endl;


string str = "Thisismyfriend ";
str.erase(4,4);

cout<<str<<endl;





return 0;

}