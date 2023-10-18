class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map_nums_index;

        for(int i=0; i<nums.size(); i++) {
            int val = target - nums[i];

            if (map_nums_index.count(val)) {
                return { map_nums_index[val], i};
            }


            map_nums_index[nums[i]] = i;
        }

        return {};
    }
};
