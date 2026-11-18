class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =0;
        int value =0;
        
         vector<int>ans;
         int temp = digits[size(digits)-1]+1;
          carry = temp/10;
        ans.push_back(temp%10);
        for(int i =size(digits)-2; i>=0;i--){
            int sum = digits[i]+carry ;
            carry = sum/10;
            ans.push_back(sum%10);
           

        }
if(carry !=0){
    ans.push_back(carry);
}
        reverse(ans.begin(),ans.end());
        return ans;

    }
};