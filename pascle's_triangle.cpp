#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 0;
    cin >> rows;

    /* vector<vector<int>> v;

    //inserting values into 2-d matrix
    for (int i = 0; i < rows; i++)
    {
        vector<int> v1;
        for (int j = 0; j < column; j++)
        {
            int temp = 0;
            cin >> temp;
            v1.push_back(temp);
        }
        v.push_back(v1);
    }
    */

    //solution
    class Solution
    {
    public:
        vector<vector<int>> generate(int numRows)
        {
            vector<vector<int>> v;
            vector<int> arr = {1};
            v.push_back(arr);
            if(numRows == 1){return v;}
            for (int i = 1; i < numRows; i++)
            {
                vector<int> arr(i+1);
                    for (int j = 0; j < arr.size(); j++)
                    {
                            if (j == 0 || j == arr.size()-1)
                            {
                               arr[j] = 1;
                            }
                            else{
                                arr[j] = v[i-1][j-1]+v[i-1][j];
                            }
                }
                v.push_back(arr);
                arr.clear();
            }
            return v;
        }
    };
    Solution sol;
    vector<vector<int>> matrix;
    matrix = sol.generate(rows);
    for (auto x : matrix)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
}