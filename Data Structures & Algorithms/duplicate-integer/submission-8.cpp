class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        bool dup = false;
        if (nums.size() < 1) return false;

        map<int, int> freq;
        for (auto u : nums) freq[u]++;
        for (auto u : nums) {
            int val = freq[u];
            if (val > 1) {
                dup = true;
                break;
            }
        }
        return dup;
    }
};