class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> c;

        for(int el:nums) {
            c[el] += 1;
            if(c[el] > 1){
                return true;
            }
        }
            
        return false;
    }
};
