#include <iostream>
#include <vector>
#include <unordered_map>

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

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;

        if (mp[nums[i]] > n / 2)
        {
            cout << "Majority Element = " << nums[i] << endl;
            return 0;
        }
    }

    return 0;
}