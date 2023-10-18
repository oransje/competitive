class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> cs;
        unordered_map<char, int> ct;

        for(char el:s) {
            cs[el] += 1;
        }
        
        for(char el:t) {
            ct[el] += 1;
        }

        if(ct.size() != cs.size()) {
            return false;
        }

        for(pair<char, int> m:ct) {
            char curr = m.first;
            if(cs[curr] != ct[curr]) {
                return false;
            }
        }

        return true;
    }
};
