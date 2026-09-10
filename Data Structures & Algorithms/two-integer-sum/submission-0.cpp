class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for (int i = 0;i < nums.size();i++){
            int m = i;
            for (int j = m + 1;j < nums.size();j++){
                if (nums[m] + nums[j] == target){
                    v.push_back(m);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
