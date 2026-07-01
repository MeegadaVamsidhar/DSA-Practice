class Solution {
private:
    double Power(double x, long long n) {
        //your code goes here

        // if (n==0 || x==1.0) return 1;
        // long long temp =n;

        // if(n<0){
        //     x=1/x;
        //     temp = -1*1LL*n;
        // }
        // double ans=1;

        // for(long long i=0;i<temp;i++){
        //     ans *= x;
        // }
        // return ans;

        if(n==0) return 1.0;
        if(n==1) return x;

        if(n%2 ==0){
            return Power(x*x,n/2);
        }
        return x * Power(x,n-1);
    }
public:
    double myPow(double x, int n){
        long long num =n;
        if(num<0){
            return (1.0 / Power(x,-num));
        }
        return Power(x,num);
    }
};