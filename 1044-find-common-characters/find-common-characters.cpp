class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<int> commonCount(26, 0);
        vector<int> currentCount(26, 0);
        vector<string> result;

        // Count characters of first word
        for (char ch : words[0]) {
            commonCount[ch - 'a']++;
        }

        // Process remaining words
        for (int i = 1; i < words.size(); i++) {

            fill(currentCount.begin(), currentCount.end(), 0);

            // Count current word characters
            for (char ch : words[i]) {
                currentCount[ch - 'a']++;
            }

            // Take minimum frequency
            for (int j = 0; j < 26; j++) {
                commonCount[j] = min(commonCount[j], currentCount[j]);
            }
        }

        // Add characters to answer
        for (int j = 0; j < 26; j++) {
            while (commonCount[j]--) {
                result.push_back(string(1, j + 'a'));
            }
        }

        return result;
    }
};