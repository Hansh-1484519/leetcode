#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, m = 0,  temp;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for (int i = 0; i < m + n; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }
    for ( int i = 0; i < n ; i++){
        cin >> temp;
        nums2.push_back(temp);
    }
    class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1 , j = n - 1 , k = nums1.size() - 1;
        while( i >= 0 && j >= 0 ){
            if( nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while( j >= 0){
            nums1[k--] = nums2[j--];
        }
     
        }
};

    Solution sol;
    sol.merge(nums1 , m , nums2 , n);
    int i = 0;
    while(i < nums1.size()){
        cout << nums1[i++] << " ";
    }
    
}