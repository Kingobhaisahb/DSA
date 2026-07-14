#include <iostream>
#include <vector>
#include <queue>

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

    int k;

    cout << "Enter k: ";
    cin >> k;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
        minHeap.push(nums[i]);

        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    cout << "Kth Largest Element = " << minHeap.top() << endl;

    return 0;
}