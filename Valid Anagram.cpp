class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        for(int i = 0; i < s.size(); i ++)
            count[s[i]-'a'] ++;
        for(int i = 0; i < t.size(); i ++)
            count[t[i]-'a'] --;
        for(int i = 0; i < 26; i ++)
            if(count[i] != 0)
                return false;
        return true;
    }
};



//other:
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};