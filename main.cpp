class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int res = 0;
        
        int **arr = new int*[n];
        
        for(int i = 0; i < n; ++i) {
            arr[i] = new int[m];
            
            for (int j = 0; j < m; ++j) {
                arr[i][j] = 0;
            }
        }
                
        for (int i = 0; i < indices.size(); ++i) {
            for (int j = 0; j < m; ++j) {
                arr[indices[i][0]][j]++;
            }
            for (int j = 0; j < n; ++j) {
                arr[j][indices[i][1]]++;
            }            
        }
        

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] % 2 == 1) {
                    res++;
                }
            }
        }
        
        for(int i = 0; i < n; ++i) {
            delete []arr[i];
            
        }
        delete []arr;
        
        return res;
    }
};
