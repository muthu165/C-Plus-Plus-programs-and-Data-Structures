#include<bits/stdc++.h>

using namespace std;

class Puzzle{
private:
    int initial[3][3];
    int goal[3][3] = {{1,2,3},{4,5,6},{7,8,0}};
    string data;
public:
    void genratePuzzle();
    void showState();
    bool check_goal();
    vector<string> solve();
    bool isValid(int x, int y);
    string getState();
};

void Puzzle::genratePuzzle(){
    cout<<"\n***Create initial state 0-8***\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Insert at ["<<i<<"]["<<j<<"] : ";
            cin>>initial[i][j];
        }
    }
}

void Puzzle::showState(){
    cout<<"\n***State***\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<initial[i][j]<<"  ";
        }
        cout<<endl;
    }
}

bool Puzzle::check_goal(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(initial[i][j] != goal[i][j]){
                return false;
            }
        }
    }
    return true;
}

bool Puzzle::isValid(int x, int y) {
    return (x >= 0 && x < 3 && y >= 0 && y < 3);
}

string Puzzle::getState() {
    string state = "";
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            state += to_string(initial[i][j]);
        }
    }
    return state;
}

vector<string> Puzzle::solve() {
    queue<pair<string, Puzzle>> q;
    unordered_set<string> visited;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vector<string> solution;

    string initial_state = getState();
    q.push({initial_state, *this});
    visited.insert(initial_state);

    while (!q.empty()) {
        Puzzle current = q.front().second;
        string current_state = q.front().first;
        q.pop();

        if (current.check_goal()) {
            // Reconstruct solution
            while (current_state != initial_state) {
                solution.push_back(current.data);
                current = q.front().second;
                current_state = q.front().first;
                q.pop();
            }
            reverse(solution.begin(), solution.end());
            break;
        }

        int zero_x, zero_y;
        // Find the position of 0
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (current.initial[i][j] == 0) {
                    zero_x = i;
                    zero_y = j;
                    break;
                }
            }
        }

        // Generate new states
        for (auto dir : directions) {
            int new_x = zero_x + dir.first;
            int new_y = zero_y + dir.second;
            if (current.isValid(new_x, new_y)) {
                swap(current.initial[zero_x][zero_y], current.initial[new_x][new_y]);
                string new_state = current.getState();
                if (visited.find(new_state) == visited.end()) {
                    q.push({new_state, current});
                    visited.insert(new_state);
                    if (dir.first == 1 && dir.second == 0) {
                        current.data = "down";
                    } else if (dir.first == -1 && dir.second == 0) {
                        current.data = "up";
                    } else if (dir.first == 0 && dir.second == 1) {
                        current.data = "right";
                    } else if (dir.first == 0 && dir.second == -1) {
                        current.data = "left";
                    }
                }
                swap(current.initial[zero_x][zero_y], current.initial[new_x][new_y]); // Backtrack
            }
        }
    }
    return solution;
}

int main(){
    Puzzle p1;
    p1.genratePuzzle();
    cout << "Initial State:" << endl;
    p1.showState();

    vector<string> solution = p1.solve();

    cout << "\nSolution:" << endl;
    for (const auto& move : solution) {
        cout << move << " ";
    }
    cout << endl;
    return 0;
}

