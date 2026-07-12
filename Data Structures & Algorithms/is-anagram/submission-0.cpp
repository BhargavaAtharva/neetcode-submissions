class Solution {
public:
    bool isAnagram(string s, string t) {
     if (s.length() != t.length()) {
            return false;
        }

        int frequency[26] = {0};

        for (char c : s) {
            frequency[c - 'a']++;
        }

        for (char c : t) {
            frequency[c - 'a']--;

            if (frequency[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
