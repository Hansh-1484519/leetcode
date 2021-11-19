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
    class Solution
    {
    public:
       /* bool containsDuplicate(vector<int> &nums)
        {
           sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size()-1; i++)
            {
                if( nums[i] == nums[i+1]){
                    return true;
                }
            }
            return false;
        }
        */
    bool containsDuplicate(vector<int> &nums){
         unordered_set<int>st;
        for( auto it = nums.begin(); it != nums.end(); ++it){
            st.insert(*it);
        }
        if( st.size() == nums.size()){
            return false;
        }
        return true;
    }
    };

    Solution sol;
    cout << sol.containsDuplicate(arr);
}