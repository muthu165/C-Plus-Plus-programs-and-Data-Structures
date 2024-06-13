#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

using namespace std;

// Define a structure for representing a node in the puzzle
struct Node {
    vector<vector<int>> state;
    Node* parent;
    string action;

    Node(vector<vector<int>> s, Node* p, string a) : state(s), parent(p), action(a) {}
};

// Function to check if two puzzle states are equal
bool statesEqual(const vector<vector<int>>& s1, const vector<vector<int>>& s2) {
    return s1 == s2;
}

// Define a class for the puzzle solver
class PuzzleSolver {
    vector<vector<int>> start;
    vector<vector<int>> goal;
    Node* solution;

public:
    PuzzleSolver(const vector<vector<int>>& s, const vector<vector<int>>& g) : start(s), goal(g), solution(nullptr) {}

    // Function to find the neighbors of a puzzle state
    vector<pair<string, vector<vector<int>>>> getNeighbors(const vector<vector<int>>& state) {
        vector<pair<string, vector<vector<int>>>> neighbors;
        int rows = state.size();
        int cols = state[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (state[i][j] == 0) {
                    if (i > 0) {
                        vector<vector<int>> newState = state;
                        swap(newState[i][j], newState[i - 1][j]);
                        neighbors.push_back({"up", newState});
                    }
                    if (i < rows - 1) {
                        vector<vector<int>> newState = state;
                        swap(newState[i][j], newState[i + 1][j]);
                        neighbors.push_back({"down", newState});
                    }
                    if (j > 0) {
                        vector<vector<int>> newState = state;
                        swap(newState[i][j], newState[i][j - 1]);
                        neighbors.push_back({"left", newState});
                    }
                    if (j < cols - 1) {
                        vector<vector<int>> newState = state;
                        swap(newState[i][j], newState[i][j + 1]);
                        neighbors.push_back({"right", newState});
                    }
                }
            }
        }

        return neighbors;
    }

    // Function to solve the puzzle
    void solve() {
        queue<Node*> frontier;
        unordered_set<vector<vector<int>>, size_t> explored;

        Node* startNode = new Node(start, nullptr, "");
        frontier.push(startNode);

        while (!frontier.empty()) {
            Node* current = frontier.front();
            frontier.pop();

            if (statesEqual(current->state, goal)) {
                solution = current;
                break;
            }

            explored.insert(current->state);

            vector<pair<string, vector<vector<int>>>> neighbors = getNeighbors(current->state);
            for (const auto& neighbor : neighbors) {
                if (explored.find(neighbor.second) == explored.end()) {
                    Node* newNode = new Node(neighbor.second, current, neighbor.first);
                    frontier.push(newNode);
                }
            }
        }
    }

    // Function to print the solution
    void printSolution() {
        if (solution == nullptr) {
            cout << "No solution found." << endl;
            return;
        }

        vector<pair<string, vector<vector<int>>>> steps;
        Node* current = solution;
        while (current->parent != nullptr) {
            steps.push_back({current->action, current->state});
            current = current->parent;
        }
        reverse(steps.begin(), steps.end());

        cout << "Start State:" << endl;
        printState(start);
        cout << endl;

        cout << "Goal State:" << endl;
        printState(goal);
        cout << endl;

        cout << "States Explored: " << endl; // Number of states explored
        cout << endl;

        cout << "Solution:" << endl;
        for (const auto& step : steps) {
            cout << "Action: " << step.first << endl;
            printState(step.second);
            cout << endl;
        }
        cout << "Goal Reached!!" << endl;
    }

    // Function to print a puzzle state
    void printState(const vector<vector<int>>& state) {
        for (const auto& row : state) {
            for (int cell : row) {
                cout << cell << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    vector<vector<int>> start = {{1, 2, 3}, {8, 0, 4}, {7, 6, 5}};
    vector<vector<int>> goal = {{2, 8, 1}, {0, 4, 3}, {7, 6, 5}};

    PuzzleSolver solver(start, goal);
    solver.solve();
    solver.printSolution();

    return 0;
}

