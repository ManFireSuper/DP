#include <iostream>
#include <vector>
using namespace std;

void helper(int arr[], int n, int idx, vector<int> &help) {

    if(idx == n) {
        for(int i = 0; i < help.size(); i++) {
            cout<<help[i]<<" ";
        }
        if(help.size() == 0) {
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;
    }
    
    helper(arr, n, idx + 1, help);
    help.push_back(arr[idx]);
    helper(arr, n, idx + 1, help);
    help.pop_back();

}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    vector<int> h;
    helper(arr, n, 0, h);
    return 0;
}