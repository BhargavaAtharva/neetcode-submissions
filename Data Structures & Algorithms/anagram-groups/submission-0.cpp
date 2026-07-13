class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for (int i = 0; i < strs.size(); i++) {
            int count[26] = {0};

            for (char c : strs[i]) {
                count[c - 'a']++;
            }

            string key = "";

            for (int j = 0; j < 26; j++) {
                key += "#" + to_string(count[j]);
            }

            hashmap[key].push_back(strs[i]);
        }

        vector<vector<string>> answer;

        for (auto& pair : hashmap) {
            answer.push_back(pair.second);
        }

        return answer;
    }
};