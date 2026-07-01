#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;

    cout << "enter number of elements";
    cin >> n;

    vector <int> nums(n);

    cout<<"enter the element:\n";
    for(int i = 0 ; i<n ; i++){
        cin >> nums[i];
    }

    int target;

    cout << "enter the target: ";
    cin >> target;

    unordered_map <int,int> mp;

    for(int i = 0 ; i<n ; i++){
        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()){
            cout <<"indices:" << mp[complement] << " " << i << endl;
            return 0;
        }

        mp[nums[i]] = i;
    }

    cout << "no pair found" << endl;

    return 0;
}