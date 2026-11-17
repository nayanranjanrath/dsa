class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = size(s)-1;
        int count =0;
        for(int j=i;j>=0;j--){
            if(s[j]!=' '){
                i =j;
                break;
            }
            
        }
        while(i>=0){
            if(s[i]==' '){
                break;
            }
            count++;
            i--;
        }

        return count;
    }
};