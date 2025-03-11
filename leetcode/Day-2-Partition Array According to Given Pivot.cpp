class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> lesser;
            vector<int> pvt;
            vector<int> greater;
            for(int i = 0; i < nums.size(); i++){
                int x = nums[i];
                if(x < pivot){
                    lesser.push_back(x);
                } else if (x > pivot){
                    greater.push_back(x);
                } else {
                    pvt.push_back(x);
                }
            }
            lesser.insert(lesser.end(), pvt.begin(), pvt.end());
            lesser.insert(lesser.end(), greater.begin(), greater.end());
            return lesser;
        }
    };