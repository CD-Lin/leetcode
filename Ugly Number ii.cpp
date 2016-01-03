class Solution {
public:
    int Min(int num1, int num2, int num3) {
        int min = (num1 < num2) ? num1 : num2;
        min = (min < num3) ? min : num3;
        return min;
    }
    int nthUglyNumber(int n) {
        if(n <= 0) {
            return 0;
        }
        int *UglyNumbers = new int[n];
        UglyNumbers[0] = 1;
        int nextUglyIndex = 1;
        
        int *Multiply2 = UglyNumbers;
        int *Multiply3 = UglyNumbers;
        int *Multiply5 = UglyNumbers;
        
        while(nextUglyIndex < n) {
            int min = Min(*Multiply2 * 2, *Multiply3 * 3, *Multiply5 * 5);
            UglyNumbers[nextUglyIndex] = min;
            
            while(*Multiply2 * 2 <= UglyNumbers[nextUglyIndex]) {
                ++Multiply2;
            }
            while(*Multiply3 * 3 <= UglyNumbers[nextUglyIndex]) {
                ++Multiply3;
            }
            while(*Multiply5 * 5 <= UglyNumbers[nextUglyIndex]) {
                ++Multiply5;
            }
            ++nextUglyIndex;
        }
        
        int ugly = UglyNumbers[nextUglyIndex - 1];
        delete[] UglyNumbers;
        return ugly;
    }
};