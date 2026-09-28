bool fun(int n){
    if(n == 1) return 1;
    if(n % 2 == 1 || ((n / 4) * 4) != n) return 0;
    return fun(n / 4);
}


class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return 0;
        if(fun(n)) return 1;
        return 0;
    }
};