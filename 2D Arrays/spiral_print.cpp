#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    while (count < total)
    {
        //print starting row that is print from starting column to ending column
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        // print ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix;
    matrix.push_back({1, 2, 3, 4});
    matrix.push_back({5, 6, 7, 8});
    matrix.push_back({9, 10, 11, 12});
    vector<int> resultant = spiralOrder(matrix);
    for (int i : resultant)
    {
        cout << i << " ";
    }
    return 0;
}