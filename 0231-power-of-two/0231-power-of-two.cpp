bool fun(int n){
    if(n == 1) return 1;
    if(n % 2 == 1 || n <= 0) return 0;
    return fun(n / 2);
}


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(fun(n)) return 1;
        return 0;
    
    
}
};