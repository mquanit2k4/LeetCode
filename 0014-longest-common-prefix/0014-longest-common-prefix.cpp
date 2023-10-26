class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for ( string s : strs )
            while ( s.find(prefix) != 0 )
                prefix = prefix.substr(0, prefix.size()-1 );
        return prefix;
    }
};