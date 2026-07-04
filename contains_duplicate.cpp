#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cout<<"enter number of elements";
    cin>>n;

    vector<int>nums(n);

    cout << "enter number of elements";

    for(int i = 0 ; i<n ; i++){
        cin >> nums[i];
    }

    sort(nums.begin(),nums.end());

    bool found = false;

    for(int i = 1 ; i<n ; i++){
        if(nums[i] == nums[i-1]){
            found = true;
            break;
        }
    }

    if(found){
        cout << "contains duplicate";
    }
    else{
        cout << "no duplicate found";
    }

    return 0;
}