#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, max = 0, max_negative = -10e4;
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] > max_negative )
            {
                max_negative = nums[i];
            }
           sum = sum + nums[i];
           if( sum < 0){ sum = 0; }
           if( sum > max){ max = sum;}
        }
        if( max_negative < 0)
        {
            return max_negative;
        }
        return max;
    }
};

    Solution sol;
    cout << sol.maxSubArray(arr);
}