#include <bits/stdc++.h>
using namespace std;

bool queen(vector<int>& board, int cur, int n);
bool noconflicts(vector<int>& board, int cur);

int nqueen(int n) {
    vector<int> board(n, -1);
    if (queen(board, 0, n)) {
        // Print the final board
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == j)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
        return 1;
    } else {
        return -1; // Return -1 if no solution exists
    }
}

bool queen(vector<int>& board, int cur, int n) {
    if (cur == n) {
        return true;
    } else {
        for (int i = 0; i < n; ++i) {
            board[cur] = i;
            if (noconflicts(board, cur)) {
                if (queen(board, cur + 1, n)) {
                    return true;
                }
            }
        }
        board[cur] = -1; // Reset the position if unable to place a queen
        return false;
    }
}

bool noconflicts(vector<int>& board, int cur) {
    for (int i = 0; i < cur; ++i) {
        if (board[i] == board[cur] || abs(cur - i) == abs(board[cur] - board[i]))
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int result = nqueen(n);
    if (result == -1)
        cout << "No solution exists";
    return 0;
}

