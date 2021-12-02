#include <bits/stdc++.h>
using namespace std;
int main()
{
     int rows = 0;
    cin>> rows;
    vector<vector<char>> board;

    //inserting values into 2-d matrix
    for( int i = 0; i < rows; i++){
        vector<char> v1;
        for( int j = 0; j < rows ; j++ ){
            char temp;
            cin >> temp;
            v1.push_back(temp);
        }
        board.push_back(v1);
    }

    // Solution
    class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         
         // check rows
         int row = board.size();
         for( int i = 0; i < row;  i++){
             vector <int> arr(9, 0);
            for( int j = 0; j < row ; j++){
                char temp = board[i][j];
                if( temp != '.')
                {
                    int value = (int) temp - 48;
                    if(arr[value-1] == 0){
                        arr[value-1] = 1;
                    }else{
                        return false;
                    }
                }
             
            }
         }

         // check columns
          for( int i = 0; i < row;  i++){
             vector <int> arr(9, 0);
            for( int j = 0; j < row ; j++){
                char temp = board[j][i];
                if( temp != '.')
                {
                    int value = (int) temp - 48;
                    if(arr[value-1] == 0){
                        arr[value-1] = 1;
                    }else{
                        return false;
                    }
                }
             
            }
         }

         // check every 3 x 3 boxes
         for( int i = 0; i < row; ){
             int j = 0;
            for( j = 0; j < row ; ){

                vector <int> arr(9, 0);
                for ( int k = i ; k < i+3; k++ ){
                    for( int l = j ; l < j+3; l++){
                char temp = board[k][l];
                if( temp != '.')
                {
                    int value = (int) temp - 48;
                    if(arr[value-1] == 0){
                        arr[value-1] = 1;
                    }else{
                        return false;
                    }
                }
                    }
                }
                j = j + 3;
            }
            j = 0;
            i = i+3;
         }

         return true;
    }
};

     Solution sol;
  if(sol.isValidSudoku(board))
  {
      cout << "true" << endl;
  }else{
      cout << "false" << endl;
  }

}