#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, m = 0,  temp;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for (int i = 0; i < m; i++)
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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

     // Make frequency map for each vector
     unordered_map<int,int> mp1;
     unordered_map<int , int> mp2;

    // sort the arrays
     sort(nums1.begin(), nums1.end());
     sort(nums2.begin(), nums2.end());

    // insert the frequencies of nums1 in map
     int count = 0; 
     for( int i = 0; i < nums1.size(); i++){
         if( i == nums1.size()-1){
             count++;
             mp1[nums1[i]] = count;
         }
         else if( nums1[i] == nums1[i+1]){
             count++;
             continue;
         }else{
             count++;
             mp1[nums1[i]] = count;
             count = 0;
         }
     }   

     //insert the frequencies of nums2 in Hashmap
    count = 0; 
     for( int i = 0; i < nums2.size(); i++){
         if( i == nums2.size()-1){
             count++;
             mp2[nums2[i]] = count;
         }
         else if( nums2[i] == nums2[i+1]){
             count++;
             continue;
         }else{
             count++;
             mp2[nums2[i]] = count;
             count = 0;
         }
     }
     vector<int> arr;

    //iterate over the mp1 and see if keys are present in mp2 if yes then find minimum frequency and put the 
    // keys into the vector;
    for( pair<int , int> x : mp1){
        if(mp2.find(x.first) != mp2.end()){
            int min = x.second;
            if(mp2[x.first] < min){
                min = mp2[x.first];
            }
            for( int i = 0; i < min ; i++){
                arr.push_back(x.first);
            }
        }
    }
    return arr;


    }
};

    Solution sol;
    vector<int> intersect_arr;
    intersect_arr =  sol.intersect(nums1, nums2);
    int i = 0;
    while(i < intersect_arr.size()){
        cout << intersect_arr[i] <<" ";
        i++;
    }
    
}