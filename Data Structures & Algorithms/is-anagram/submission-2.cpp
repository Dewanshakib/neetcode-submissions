class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        map<char,int> freq1;
        map<char,int> freq2;
        for (auto u:s) freq1[u]++;
        for (auto u:t) freq2[u]++;



        for (auto u:s){
            if (freq1[u] != freq2[u]){
                return false;
            }
        }

        return true;
    }
};
