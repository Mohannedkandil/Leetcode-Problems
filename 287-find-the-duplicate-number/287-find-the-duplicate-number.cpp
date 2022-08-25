class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int duplicate = 0;
        
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        
        for (auto i : mp) {
            if (i.second > 1) {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
};