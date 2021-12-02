#include <bits/stdc++.h>
using namespace std;
int main(){
    string ransomNote , magazine;
    getline( cin , ransomNote);
    getline( cin , magazine);

   class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len1 = magazine.length();
        int len2  = ransomNote.length();
        unordered_map<char , int> mag_map;
        unordered_map<char , int> ran_map;
        int i = 0;
        while(i < len1){
            mag_map[magazine[i]]++;
            i++;
        }
          int j = 0;
        while(j < len2){
            ran_map[ransomNote[j]]++;
            j++;
        }
        for( pair<char , int> item : ran_map){
            if( mag_map[item.first] >= item.second){
                continue;
            }else{
                return false;
            }
        }
        return true;
        
    }
};


  Solution solve;
  if( solve.canConstruct( ransomNote , magazine)){
      cout << "true" << endl;
  }else{
      cout << "false" << endl;
  }

}