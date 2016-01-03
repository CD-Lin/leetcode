class Solution {
public:
    int addDigits(int num) {
        int sum;
        sum = num % 9;
        if(num != 0 && sum == 0)
            sum = 9;
        return sum;
    }
};