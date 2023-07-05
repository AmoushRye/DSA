#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    bool issafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m) {
        if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && m[x][y] == 1) {
            return true;
        } else {
            return false;
        }
    }

    void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path) {
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;
        int newx, newy;

        // down
        newx = x + 1;
        newy = y;
        if (issafe(newx, newy, n, visited, m)) {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (issafe(newx, newy, n, visited, m)) {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (issafe(newx, newy, n, visited, m)) {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (issafe(newx, newy, n, visited, m)) {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;
        if (m[0][0] == 0) {
            return ans;
        }
        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> visited = m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                visited[i][j] = 0;
            }
        }

        string path = "";
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> temp;
    temp.push_back({1, 0, 0, 0});
    temp.push_back({1, 1, 0, 1});
    temp.push_back({1, 1, 0, 0});
    temp.push_back({0, 1, 1, 1});
    vector<string> w;
    w = s.findPath(temp, 4);
    for (const auto& s : w) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
