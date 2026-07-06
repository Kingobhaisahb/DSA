#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cout << "enter number of elements";
    cin >> n;

    vector<int> nums(n);

    cout << "enter sorted elemtns";

    for(int i = 0 ; i<n ; i++){
        cin >> nums[i];
    }

    if(n == 0){
        cout << "Length = 0" << endl;
        return 0;
    }

    int i = 0 ; 

    for(int j = 1 ; j<n ; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }

    cout << "Length = " << i+1 << endl;

    cout << "Array after removing duplicates: ";

    for(int k = 0 ; k<=i ; k++){
        cout << nums[k] << " ";
    }

    cout << endl;

    return 0;
}