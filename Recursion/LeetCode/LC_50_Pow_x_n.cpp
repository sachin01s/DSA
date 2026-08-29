class Solution {
public:
    double pow(double x, long long n){
        if(n==0) return 1;
        else if (n<0) return 1/pow(x,-n);
        double half = pow(x,n/2);
        if(n%2==0) return half * half;
        else return half * half * x;
    }
    double myPow(double x, int n) {
        return pow(x,n);
    }
};