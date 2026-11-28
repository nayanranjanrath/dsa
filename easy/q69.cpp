class Solution {
public:
    int mySqrt(int x) {
      
        if (x == 0 || x == 1)
            return x;
        
       
        int start = 2;
        int end = x-1;
        int mid = -1;
        
     // use binary search to find the square root of x . use bool so that you wont get the overflow error 
   
        while (start <= end) {
           
            mid = start + (end - start) / 2;
            
          
            long long square = static_cast<long long>(mid) * mid;
            
            
            if (square > x)
                end = mid - 1;
            else if (square == x)
               
                return mid;
            else
                
                start = mid + 1;
        }
        
       
        return static_cast<int>(std::round(end));
    }
};