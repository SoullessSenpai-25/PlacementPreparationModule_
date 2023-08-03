class Solution {
    private:
    int BS(int x){
         int l=0;int r=x;long long int  ans=-1;
        long long int mid=l+(r-l)/2;
        while(l<=r){
             
            long long int  sqr_rt=mid*mid;
            if(sqr_rt==x){
                return mid;
            }
            if(sqr_rt>x){
              
                r=mid-1;
            }
            else{
                  ans =mid;

            l=mid+1;}
            mid=l+(r-l)/2;
        }return ans;
    }

public:
    int mySqrt(int x) {
        return BS(x);
       
        
    }
};
