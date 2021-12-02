#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 0, column = 0;
    cin>> rows >> column;
    int target = 0;
    cin >> target;
    vector<vector<int>> matrix;

    //inserting values into 2-d matrix
    for( int i = 0; i < rows; i++){
        vector<int> v1;
        for( int j = 0; j < column ; j++ ){
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        matrix.push_back(v1);
    }

    // Solution
    class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
       for( int i = 0; i < m; i++){
           
                 for( int j= 0; j < n ; j++){
                    if( matrix[i][j] == target ){
                        return true;
                    }
                }
    }
    return false;
    }
 
};

     Solution sol;
  if(sol.searchMatrix(matrix , target))
  {
      cout << "true" << endl;
  }else{
      cout << "false" << endl;
  }

}