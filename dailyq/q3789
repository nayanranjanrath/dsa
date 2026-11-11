class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
       if(costboth<=cost1 && costboth <= cost2 ){
        if(need1>need2){
            long long cost = (long long) need1*costboth ;
            return cost;
        }
        else{
            long long cost =(long long) need2 *costboth ;
            return cost;
        }
       } 
       if(costboth> cost1+cost2){
        return (long long)need1 * cost1 + (long long)need2 * cost2;
       }
        int small ;
        if ( need1<need2){
            small = 1;
        }
        else{
            small = 2;
        }
        

     long long costa = (long long)cost1 * need1 + (long long)cost2 * need2;
        long long costb ;
        long long costc ;
        if(small ==1){
         costb = (long long)costboth * need1 + (long long)cost2 * (need2 - need1);
            costc =(long long) costboth*need2;
        }
        else{
           costb = (long long)costboth * need2 + (long long)cost1 * (need1 - need2);
            costc = (long long)costboth *need1; 
        }
          long long ans = (costa < costb) ? ((costa < costc) ? costa : costc) : ((costb < costc) ? costb : costc);   
        return ans;
    }
};