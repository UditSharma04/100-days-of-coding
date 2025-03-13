class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int n1 = nums1.size();
            int n2 = nums2.size();
            vector<vector<int>> result;
            int id1 = 0, id2 = 0;
            
            // Merge the two arrays
            while (id1 < n1 && id2 < n2) {
                if (nums1[id1][0] < nums2[id2][0]) {
                    result.push_back({nums1[id1][0], nums1[id1][1]});
                    id1++;
                } else if (nums1[id1][0] > nums2[id2][0]) {
                    result.push_back({nums2[id2][0], nums2[id2][1]});
                    id2++;
                } else {
                    result.push_back({nums1[id1][0], nums1[id1][1] + nums2[id2][1]});
                    id1++;
                    id2++;
                }
            }
            
            // Add remaining elements from nums1
            while (id1 < n1) {
                result.push_back({nums1[id1][0], nums1[id1][1]});
                id1++;
            }
            
            // Add remaining elements from nums2
            while (id2 < n2) {
                result.push_back({nums2[id2][0], nums2[id2][1]});
                id2++;
            }
            
            return result;
        }
    };