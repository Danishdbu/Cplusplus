# include <iostream>
# include <vector>
using namespace std;

int factorial(int n){
    // Base case 
    if (n==1){
        return 1;

    }
    
    // Recursive relation
    int ans = n* factorial(n-1);
    return ans;
}

void Printcount(int n){
    // base case
    if (n==0)
    {
        return ;
    }
    // processing
    cout<<n<<" ";

    // R.R
    Printcount(n-1);

    
}
int fibonacci(int n){
    // Base case 
    if (n==1)
    {
        // first term
        return 0;
    }
    if (n==2)
    {
        // second term
        return 1;
    }
    //Recursive relation
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}
std::string generateAsteriskPattern(int N) {
    if (N <= 0) {
        return "";
    }

    std::vector<std::string> asteriskList;
    for (int i = 1; i <= N; ++i) {
        std::string asterisks(i, '*');
        asteriskList.push_back(asterisks);
    }

    std::string asteriskPattern;
    for (const std::string& asterisks : asteriskList) {
        if (!asteriskPattern.empty()) {
            asteriskPattern += ' ';
        }
        asteriskPattern += asterisks;
    }

    return asteriskPattern;
}

int main(){
    // int n;
    // cout<<"Enter the value n: "<<endl;
    // cin>>n;

    // int ans = factorial(n);

    // cout<<"Answer is: "<<ans<<endl;


    // int n;
    // cout<<"Enter the value n: "<<endl;
    // cin>>n;

    // Printcount(n);

    // int n;
    // cout<<"Enter the value n: "<<endl;
    // cin>>n;

    // int ans = fibonacci(n);

    // cout<<n << "th term is: "<<ans<<endl;
//     string arr;  
//     for (int i = 0; i < 3; i++)
//     {
        
//         for (int j = 0; j < i+1; j++)
//         {
//             arr.push_back("*");
            
//         }
//         cout<<" ";
        
        
//     }
    



// for (int i = 0; i < arr.size(); i++)
// {
//     cout<<arr[i];
// }


    
    

    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;

    std::string asteriskPattern = generateAsteriskPattern(N);
    std::cout << asteriskPattern << std::endl;






return 0;
}