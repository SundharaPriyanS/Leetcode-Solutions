class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min = INT_MAX, mini = -1, l = drones.size();
        for (int i = 0; i < l; i++) {
            int a=abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if (min > a && a <= drones[i][2]) {
                    min=a;
                    mini = i;
            }
        }
        return mini;
    }
};