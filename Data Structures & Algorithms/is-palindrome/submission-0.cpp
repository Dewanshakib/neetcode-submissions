class Solution {
   public:
    bool isPalindrome(string s) {
        string n = "";
        for (auto ch : s) {
            if ((ch >= 97 && ch <= 122)) {
                n.push_back(toupper(ch));
            } else if ((ch >= 65 && ch <= 90)) {
                n.push_back(toupper(ch));
            } else if ((ch >= 48 && ch <= 57)) {
                n.push_back(toupper(ch));
            }
        }

        bool p = true;
        int l = 0, r = n.size() - 1;
        while (l < r) {
            if (n[l] != n[r]) {
                p = false;
                break;
            }
            l++;
            r--;
        }

        return p;
    }
};
