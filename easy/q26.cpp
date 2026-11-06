class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int j =1;
        int k =1;
        while(i<size(nums)){
            if(j==size(nums)){
              break;
            }
            if(nums[i]==nums[j]){
                j++;
                
                continue;
            }
            nums[i+1]=nums[j];
            i =i+1;
            k++;
            j++;
        

        }
        return k;
    }
};