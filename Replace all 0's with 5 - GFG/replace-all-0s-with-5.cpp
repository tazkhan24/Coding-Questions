// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int newInt = 0;
    while(n!=0){
        int rem = n%10;
        if(rem == 0)
            rem+=5;
        newInt = newInt*10 + rem;
        n = n/10;
        
    }
    n = newInt;
    int final =0;
    while(n!=0){
         int rem = n%10;
         final = final*10+rem;
         n = n/10;
    }
    return final;
}