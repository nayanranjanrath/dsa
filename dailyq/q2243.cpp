class Solution {
public:
    string digitSum(string s, int k) {
        int n = size(s);
        int len =0;
        int i =0;
        int sum =0;
        string ans;
        if(n<k){
            return s;
        }
        if(n==k){
            return s;
        }
        while(size(s)>k){
            sum +=s[i] -'0';
            
            len++;



            if(len == k ){
               ans += to_string(sum);
                sum =0;
                len=0;
                
            }
            
            if(i+1<n){
                i++;
            }
            else { if(len> 0){
               ans += to_string(sum);
                  
            }
              s = ans;
                    i=0;
                    sum =0;
                    n = size(s);
                    ans ={};
                    len =0;}

        }
        return s;

    }
};