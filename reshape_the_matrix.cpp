#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows = 0 , column = 0;
    cin>> rows >> column;
    vector<vector<int>> v;

    //inserting values into 2-d matrix
    for( int i = 0; i < rows; i++){
        vector<int> v1;
        for( int j = 0; j < column ; j++ ){
            int temp = 0;
            cin >> temp;
            v1.push_back(temp);
        }
        v.push_back(v1);
    }

    //solution
    class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        vector<vector<int>> new_mat(r , vector<int>(c));
        int n = mat[0].size();
        if( m * n != r * c){
            return mat;
        }
        else{
            int r1 = 0 , c1 = 0;
            for( int i = 0; i < r; i++){
                for( int j = 0; j < c; j++ ){
                    if( c1 >= n){
                        r1++;
                        c1 = 0;
                    }
                    new_mat[i][j] = mat[r1][c1++];
                }
            }
        }
        return new_mat;

    }
};

   Solution sol;
   vector<vector<int>> matrix;
   matrix = sol.matrixReshape(v, rows , column);
   for( auto x : matrix ){
       for( int i = 0 ; i < x.size(); i++){
           cout << x[i] << " ";
       }
       cout << endl;
   }

}