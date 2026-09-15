class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; i++) {
            bool champion = true;

            for (int j = 0; j < n; j++) {
                if (grid[j][i] == 1) {
                    champion = false;
                    break;
                }
            }

            if (champion)
                return i;
        }

        return -1;
    }
};