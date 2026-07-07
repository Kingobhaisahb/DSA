#include <iostream>
#include <vector>
#include <climits>

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

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;

    return 0;
}