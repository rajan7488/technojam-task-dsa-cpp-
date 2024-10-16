#include<iostream>
using namespace std;

int climbStairs(int n) {
    if (n==1) {
        return 1;
    }
    if (n==2){
        return 2;
    }
    int prev2=1; 
    int prev1=2; 
    int current;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;  // ways(n) = ways(n-1) + ways(n-2)
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int n;
    cout << "Enter the number of steps -> ";
    cin >> n;

    cout << "Number of distinct ways to climb to the top: " << climbStairs(n) << endl;

    return 0;
}
