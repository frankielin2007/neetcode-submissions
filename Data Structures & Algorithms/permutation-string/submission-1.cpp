class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
        {
            return false;
        }
        for (int left = 0; left <= s2.length() - s1.length(); left++) {

            vector<char> perm;

            for (int right = left; right < left + s1.length(); right++) {

                char c = s2[right];

                if (s1.find(c) != string::npos &&
                    count(perm.begin(), perm.end(), c) < count(s1.begin(), s1.end(), c)) {

                    perm.push_back(c);
                }
            }

            if (perm.size() == s1.size()) {
                return true;
            }
        }

        return false;
    }
};