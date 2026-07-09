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

    int maxEnding = nums[0];
    int minEnding = nums[0];
    int maxProduct = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < 0)
        {
            swap(maxEnding, minEnding);
        }

        maxEnding = max(nums[i], maxEnding * nums[i]);
        minEnding = min(nums[i], minEnding * nums[i]);

        maxProduct = max(maxProduct, maxEnding);
    }

    cout << "Maximum Product = " << maxProduct << endl;

    return 0;
}