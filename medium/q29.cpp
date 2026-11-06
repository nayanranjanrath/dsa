class Solution {
public:
    int divide(int dividden, int divisor) {
         if(dividden ==divisor){
            return 1;
         }
          if (dividden == INT_MIN && divisor == -1) return INT_MAX;
           if (divisor == 1) return dividden;
        int sign = ((dividden < 0) ^ (divisor < 0)) ? -1 : 1;
        
        int ans =0;
        long long n = labs(dividden);
        long long d = labs(divisor);
       
        while (n>=d){
            int i =0;
            while(d<<i <=n ){
                i++;}
                i--;
                n = n-(d<<i);
                ans = ans+( 1<<i);
            

        }

        if(sign ==-1){
            return -ans;
        }

        
        return ans;
    }
};