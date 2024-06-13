#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <ctime>

using namespace std;

void printNode(const vector<int>& node, int nodeNumber) {
    cout << node[0] << " " << node[1] << " " << node[2] << endl;
    cout << node[3] << " " << node[4] << " " << node[5] << endl;
    cout << node[6] << " " << node[7] << " " << node[8] << endl;
    cout << "Node: " << nodeNumber << endl;
    cout << "Depth: " << node.size() - 9 << endl;
    cout << "Moves: ";
    for (size_t i = 9; i < node.size(); ++i) {
        cout << node[i] << " ";
    }
    cout << endl;
    cout << "------" << endl;
}

bool checkFinal(const vector<int>& node, const vector<int>& finalNode) {
    if (node == finalNode) {
        printNode(node, 0);
        return true;
    }
    return false;
}

int main() {
    vector<int> startNode = {1, 2, 3, 5, 6, 0, 7, 8, 4};
    vector<int> finalNode = {1, 2, 3, 5, 8, 6, 0, 7, 4};

    bool found = false;
    int nodeNumber = 0;
    vector<vector<int>> visitedList;
    queue<vector<int>> nodeQueue;
    nodeQueue.push(startNode);
    visitedList.push_back(startNode);
    printNode(startNode, nodeNumber);

    clock_t t0 = clock();
    while (!found && !nodeQueue.empty()) {
        vector<int> currentNode = nodeQueue.front();
        nodeQueue.pop();
        int blankIndex = find(currentNode.begin(), currentNode.end(), 0) - currentNode.begin();

        if (blankIndex != 0 && blankIndex != 1 && blankIndex != 2) {
            vector<int> upNode = currentNode;
            swap(upNode[blankIndex], upNode[blankIndex - 3]);
            upNode.push_back('u');
            found = checkFinal(upNode, finalNode);
            if (!found && find(visitedList.begin(), visitedList.end(), upNode) == visitedList.end()) {
                printNode(upNode, ++nodeNumber);
                nodeQueue.push(upNode);
                visitedList.push_back(upNode);
            }
        }

        if (blankIndex != 0 && blankIndex != 3 && blankIndex != 6) {
            vector<int> leftNode = currentNode;
            swap(leftNode[blankIndex], leftNode[blankIndex - 1]);
            leftNode.push_back('l');
            found = checkFinal(leftNode, finalNode);
            if (!found && find(visitedList.begin(), visitedList.end(), leftNode) == visitedList.end()) {
                printNode(leftNode, ++nodeNumber);
                nodeQueue.push(leftNode);
                visitedList.push_back(leftNode);
            }
        }

        if (blankIndex != 6 && blankIndex != 7 && blankIndex != 8) {
            vector<int> downNode = currentNode;
            swap(downNode[blankIndex], downNode[blankIndex + 3]);
            downNode.push_back('d');
            found = checkFinal(downNode, finalNode);
            if (!found && find(visitedList.begin(), visitedList.end(), downNode) == visitedList.end()) {
                printNode(downNode, ++nodeNumber);
                nodeQueue.push(downNode);
                visitedList.push_back(downNode);
            }
        }

        if (blankIndex != 2 && blankIndex != 5 && blankIndex != 8) {
            vector<int> rightNode = currentNode;
            swap(rightNode[blankIndex], rightNode[blankIndex + 1]);
            rightNode.push_back('r');
            found = checkFinal(rightNode, finalNode);
            if (!found && find(visitedList.begin(), visitedList.end(), rightNode) == visitedList.end()) {
                printNode(rightNode, ++nodeNumber);
                nodeQueue.push(rightNode);
                visitedList.push_back(rightNode);
            }
        }
    }

    clock_t t1 = clock();
    cout << "Time: " << (double)(t1 - t0) / CLOCKS_PER_SEC << endl;
    cout << "------" << endl;
    return 0;
}

