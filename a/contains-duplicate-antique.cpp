class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> c;

        for(int i=0; i<nums.size(); i++) {
            c[nums[i]] = c[nums[i]] + 1;
            if(c[nums[i]] > 1){
                return true;
            }
        }
            
        return false;
    }
};··
