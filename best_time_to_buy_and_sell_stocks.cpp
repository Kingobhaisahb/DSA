#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int n;

    cout << "Enter a number";
    cin >> n;

    vector <int> prices(n);

    cout << "enter stock prices" ;

    for(int i = 0 ; i<n ; i++){
        cin >> prices[i];
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0 ; i<n ; i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit >  maxProfit){
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit = " << maxProfit << endl;

    return 0;
}