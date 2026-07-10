#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &nums, int start, int end ){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int n;

    cout << "Enter number of elements" ;
    cin >> n;

    vector <int> nums(n);

    cout << "Enter elements: \n";

    for(int i = 0 ; i<n ; i++){
        cin >> nums[i];
    }

    int k;

    cout << "enter k";

    cin >> k;

    k = k % n;

    reverseArray(nums,0,n-1);
    reverseArray(nums, 0, k - 1);
    reverseArray(nums, k, n - 1);

    cout << "Rotated Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}

