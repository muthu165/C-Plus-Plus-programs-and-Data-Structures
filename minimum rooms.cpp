#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimum_rooms(int n, vector<int> arrival_times, vector<int> durations) {
    // Create a vector of pairs to store the visitors and their durations
    vector<pair<int, int>> visitors;
    for (int i = 0; i < n; i++) {
        visitors.push_back(make_pair(arrival_times[i], durations[i]));
    }
    
    // Sort the visitors based on their arrival time
    sort(visitors.begin(), visitors.end());
    
    // Initialize the list of occupied rooms
    vector<int> rooms;
    
    // Iterate through the sorted list of visitors
    for (int i = 0; i < n; i++) {
        // Check if there is an available room at the arrival time
        bool available_room = false;
        for (int j = 0; j < rooms.size(); j++) {
            if (rooms[j] <= visitors[i].first) {
                rooms[j] = visitors[i].first + visitors[i].second;
                available_room = true;
                break;
            }
        }
        
        // If there is no available room, build a new room
        if (!available_room) {
            rooms.push_back(visitors[i].first + visitors[i].second);
        }
    }
    
    // Return the number of rooms built
    return rooms.size();
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arrival_times(n);
    vector<int> durations(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arrival_times[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> durations[i];
    }
    
    cout << minimum_rooms(n, arrival_times, durations) << endl;
    
    return 0;
}
