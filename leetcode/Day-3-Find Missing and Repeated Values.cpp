class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
            int totalEl = n*n;
            int sum = (totalEl * (totalEl + 1))/2;
            int actualSum = 0;
            vector<int> result(2,-1);
            vector<int> arr(totalEl + 1, 0);
    
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    int temp = grid[i][j];
                    actualSum += temp;
                    if(arr[temp] == 0){
                        arr[temp]++;
                    } else {
                        result[0] = temp;
                    }
                }
            }
    
            result[1] = sum - (actualSum - result[0]);
    
            return result;
    
        }
    };