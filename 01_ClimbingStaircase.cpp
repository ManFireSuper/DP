#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int prev = 1, prev2 = 1;
    for(int i = 2; i <= n; i++) {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
    return 0;
}