class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> index;
        int j;
        for (int i = 0; i < nums.size(); i++) {
            j = 0;
            repeat:
            if (nums[i] + nums[j] == target && i!=j) {
                index.push_back(i);
                index.push_back(j);
                break;
            }
            j += 1;
            if ( j<nums.size()) goto repeat;
        }
        return index;
    }
};


