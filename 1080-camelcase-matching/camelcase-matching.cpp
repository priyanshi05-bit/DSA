class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;

        for (string query : queries) {
            int i = 0, j = 0;

            while (i < query.size()) {
                if (j < pattern.size() && query[i] == pattern[j]) {
                    i++;
                    j++;
                } else if (islower(query[i])) {
                    i++;
                } else {
                    break;
                }
            }

            ans.push_back(i == query.size() && j == pattern.size());
        }

        return ans;
    }
};