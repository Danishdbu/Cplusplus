# include<iostream>
using namespace std;

int solveDivision(int dividend,int divisor){
    int s =0;
    int e = abs(dividend);

    int ans = 0 ;

    int mid = s+(e-s)/2;
    while(s<=e){

        // perfect solution
        if (abs(mid*divisor ) == abs(dividend))
        {
            ans = mid;
            break;
        }
        // not perfect solution

        if (abs(mid*divisor) > abs(dividend))
        {
            // left search
            e = mid-1;
        }
        else{
            // store
            ans = mid;
            // right  search
            s = mid + 1;

        }

        mid = s + (e-s)/2;
        
        

    }

    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    return ans ;
    else{
        return -ans;
    }
    

}






int main(){

    // Division using binarySearch
    int dividend = 33;
    int divisor = 7;


    int ans = solveDivision(dividend,divisor);
    cout<<"Qoutient is "<<ans<<endl;

    int precision;
    cout << "Enter the number of floating digits in precison "<<endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for(int i=0; i<precision; i++) {

    for(double j=finalAns; j*j<=dividend; j = j + step) {
        finalAns = j;
    }
        step = step / 10;
    }
    cout << "Final ans is. "<< finalAns << endl;










    
    
return 0;
}