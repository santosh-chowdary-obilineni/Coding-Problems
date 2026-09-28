bool fun(int n){
    if(n == 1) return 1;
    if(n % 3 != 0) return 0;
    return fun(n / 3);
}


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return 0;
        if(fun(n)) return 1;
        return 0;
    }
};