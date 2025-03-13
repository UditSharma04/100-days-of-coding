class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            vector<int> result;
            for(int i = 0; i < n-1; i++){
                if(nums[i] != nums[i+1]){
                    continue;
                } else {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }
    
            for(int x : nums){
                if(x != 0){
                    result.push_back(x);
                }
            }
    
            for(int i = result.size(); i < n; i++){
                result.push_back(0);
            }
    
            return result;
    
        }
    };