#include <iostream>
using namespace std;

int solution(int arr[], int n) {
    int prev = arr[0], prev2, curr;
    for(int i = 1; i < n; i++){ 
        int take = arr[i];
        if(i > 1) {
            take += prev2;
        }
        int nottake = 0 + prev;
        curr = max(take, nottake);
        prev2 = prev;
        prev = curr;
    }
    return curr;
}

int main() {
    int n; n = 3;
    int arr[] = {2, 3, 2};
    int help1[n - 1], help2[n - 1];
    for(int i = 0; i < n; i++) {
        if(i != 0) {
            help1[i - 1] = arr[i];
        }
        if(i != n - 1) {
            help2[i] = arr[i];
        }
    }
    cout<<max(solution(help1, n - 1), solution(help2, n - 1))<<endl;
    return 0;
}