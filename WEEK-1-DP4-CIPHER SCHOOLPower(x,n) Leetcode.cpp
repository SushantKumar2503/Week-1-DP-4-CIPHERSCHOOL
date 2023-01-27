class Solution {
public:
    double find_mypow(double x, long long int n){
        //BAse case
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        double answer=find_mypow(x,n/2);
        answer=answer*answer;
        if(n%2==1){
            answer=answer*x;
        }
        return answer;
    }
    double myPow(double x, int n) {
        if(n>=0){
            return find_mypow(x,n);
        }
        return (double)1/find_mypow(x,abs(n));
    }
};