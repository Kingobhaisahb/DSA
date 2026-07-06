#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n1,n2;

    cout << "enter size of array 1";
    cin >> n1;

    vector <int> nums1(n1);
    
    cout << "enter the array 1" ;
    for(int i = 0 ; i<n1 ; i++){
        cin >> nums1[i];
    }

    cout << "enter size of array 2";
    cin >> n2;

    vector <int> nums2(n2);
    
    cout << "enter the array 2" ;
    for(int i = 0 ; i<n2 ; i++){
        cin >> nums2[i];
    }

    vector <int> result;

    int i = 0 ; 
    int j = 0 ;

    while(i < n1 && j < n2){
        if(nums1[i] <= nums2[j]){
            result.push_back(nums1[i]);
            i++;
        }
        else{
            result.push_back(nums2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        result.push_back(nums1[i]);
        i++;
    }

    while (j < n2)
    {
        result.push_back(nums2[j]);
        j++;
    }

    cout << "Merged Array:\n";

    for (int num : result)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}