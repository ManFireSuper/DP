#include <iostream>
using namespace std;

int helper(int arr[], int n, int idx, int help[]) {
    if(idx == 0) {
        return arr[0];
    }
    if(idx < 0) {
        return 0;
    }
    if(help[idx] != -1) {
        return help[idx];
    }
    int take = arr[idx] + helper(arr, n, idx - 2, help);
    int nottake = 0 + helper(arr, n, idx - 1, help);
    return help[idx] = max(take, nottake);
}

void secondHelper(int arr[], int n) {
    int prev = arr[0], prev2;
    for(int i = 1; i <= n; i++) {
        int take = arr[i];
        if(i > 1) {
            take += prev2;
        }
        int nottake = 0 + prev;
        int curr = max(take, nottake);
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
}

int main() {
    int n = 4;
    int arr[4] = {2, 1, 4, 9};
    int h[n + 1];
    fill(h, h + n + 1, -1);
    cout<<helper(arr, n, n - 1, h)<<endl;
    secondHelper(arr, n);
    return 0;
}