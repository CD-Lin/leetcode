class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
        while(n) {
            num += 1;
            n &= (n-1);
        }
        return num;
    }
};