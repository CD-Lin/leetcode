class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int sum = 0;
        while(s[len-1]==' ') len--;
        for(int i = len-1; i>=0; i--)
        {
            if(s[i] != ' ')   
                sum++;
            else 
                break;
        }
        return sum;
    }
};