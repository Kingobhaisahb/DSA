#include <iostream>
#include <vector>
#include <algorithm>

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

    sort(nums.begin(), nums.end());

    // Missing number is 0
    if (nums[0] != 0)
    {
        cout << "Missing Number = 0";
        return 0;
    }

    // Missing number is somewhere in the middle
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] != nums[i] + 1)
        {
            cout << "Missing Number = " << nums[i] + 1;
            return 0;
        }
    }

    // Missing number is n
    cout << "Missing Number = " << n;

    return 0;
}