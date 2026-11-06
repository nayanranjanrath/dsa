class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0;
        int j =0;
        int k =0;
        while(i<size(nums)){
            if(j==size(nums)){
              break;
            }
            if(nums[j]==val){
                j++;
                
                continue;
            }
            // swap(nums[i],nums[j]);
            nums[i]=nums[j];
            i ++;
            j++;
            k++;
        

        }
        return k;
    }
};