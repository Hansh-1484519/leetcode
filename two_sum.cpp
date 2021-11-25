#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0 , target = 0;
    cin >> n;
    vector<int> arr;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> target;
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int> indices;
            for( int i = 0; i < nums.size() - 1; i++){
                for( int j = i+1; j < nums.size(); j++){
                    if(target - nums[i] == nums[j]){
                        indices.push_back(i);
                        indices.push_back(j);
                    }
                }
            }
            return indices;
        }
    };
    Solution solve;
    vector<int> result;
    result = solve.twoSum(arr, target);
    for( auto it : result){
        cout << it <<" ";
    }
}