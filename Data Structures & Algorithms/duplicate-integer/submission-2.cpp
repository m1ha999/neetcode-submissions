class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int j = nums[i];
            if (seen.find(j) == seen.end()) {
                seen.insert(j);
            }
            else {
                return true;
            }
        }
        return false;

    }
};