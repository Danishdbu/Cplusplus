# include <iostream>
# include <string>
using namespace std;

bool compare(string a, string b){
    if (a.length() != b.length())
    {
        return false;
    }
    int j= 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[j])
        {
           return false;
        }
        j++;
        
    }
    return true;
    
    
}

string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        return s;
    }
int main (){
    //  STRING

// string str;
// cin>>str;
// cout<<str<<endl;

// cout<<"lenght "<<str.length()<<endl;

// cout<<"isempty "<<str.empty()<<endl;

// str.push_back('A');
// cout<<str<<endl;

// str.pop_back();
// cout<<str<<endl;

// string a = "dan";
// string b ="dani";

// cout<<compare(a,b);


// string n = "My naam is Don hai";
// string tr = "is";

// cout<<n.find(tr);

// string str = "This is a man";
// string t = "Danish";

// str.replace(0,4,t);
// cout<<str<<endl;


// string s = "daabcbaabcbc";
// string part = "abc";
// cout<<removeOccurrences(s,part);




























return 0;
}