class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        
        for (int number : nums) {
            if (!numbers.insert(number).second) {
                return true;
            }
        }
        return false;
    }
};
