double fun(double x , long long n){
    if(n == 0) return 1;
    if(n % 2 == 1) return x * fun(x , n - 1);
    return fun(x * x , n / 2);
}



class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0) {
            long long N = n;
            return 1 / fun(x ,-1*N);
        }
        return fun(x , n);
    }
};