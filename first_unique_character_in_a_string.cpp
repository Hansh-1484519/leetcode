#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline( cin , str);
    class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
         unordered_map<char , int> smap;
         int i = 0;
         while( i < len){
        smap[s[i]]++;
        i++;
        }

        for( int i = 0 ; i < len ; i++){
            if(smap[s[i]] == 1){
                return i;
            }
        }
        return -1;



        /*
         vector<int> v(26);
        
        for(int i=0; i<s.size(); i++){
            v[int(s[i])-97]++;  //if s[i] is 'a' its ascii code is 97 and therefore int(s[i])-97 gives us the loc of 'a' in our array
        }
        
        for(int i=0; i<s.size(); i++){
            
            if(v[int(s[i])-97]==1) return i;
            
        }
        
        return -1; 
        */
    }
};


  Solution solve;
  cout << solve.firstUniqChar(str);

}