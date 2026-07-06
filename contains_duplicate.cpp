// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n;

//     cout<<"enter number of elements";
//     cin>>n;

//     vector<int>nums(n);

//     cout << "enter number of elements";

//     for(int i = 0 ; i<n ; i++){
//         cin >> nums[i];
//     }

//     sort(nums.begin(),nums.end());

//     bool found = false;

//     for(int i = 1 ; i<n ; i++){
//         if(nums[i] == nums[i-1]){
//             found = true;
//             break;
//         }
//     }

//     if(found){
//         cout << "contains duplicate";
//     }
//     else{
//         cout << "no duplicate found";
//     }

//     return 0;
// }

########

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    unordered_set<int> seen;

    for (int num : nums)
    {
        if (seen.find(num) != seen.end())
        {
            cout << "Contains Duplicate" << endl;
            return 0;
        }

        seen.insert(num);
    }

    cout << "No Duplicate Found" << endl;

    return 0;
}

