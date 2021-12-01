#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  m = 0,  temp;
    cin >> m ;
    vector<int> nums1;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = -1;
        int profit = 0;
        for( int i = 1; i < prices.size(); i++ ){
            if( prices[i] < min){
                min = prices[i];
                max = 0;
            }
            if( prices[i] > max){
                max = prices[i];
            }
            if( max - min > profit){
                profit = max - min;
            }
        }
        return profit;
    }
};

    Solution sol;
    cout << sol.maxProfit(nums1);
}