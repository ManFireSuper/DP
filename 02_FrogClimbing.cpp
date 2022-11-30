#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    cout<<"Enter:"<<endl;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int onestep = 0, twostep = INT_MAX;
    int help[n + 1];
    fill(help, help + n + 1, -1);
    help[0] = 0;
    help[1] = abs(arr[0] - arr[1]);
    int prev = help[0];
    int prev2 = help[1];
    for(int i = 1; i <= n; i++){ 
        onestep = prev + abs(arr[i - 1] - arr[i]);
        if(i > 1) {
            twostep = prev2 + abs(arr[i - 2] - arr[i]);

        }
        int curr = min(onestep, twostep);
        help[i] = curr;
        prev2 = prev;
        prev = curr;
    }
    cout<<help[n - 1]<<endl;
    return 0;
}