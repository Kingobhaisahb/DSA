#include <iostream>
#include <vector>

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

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            j++;
        }
    }

    cout << "Array after moving zeroes:\n";

    for (int num : nums)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}