class Solution {
public:
    int strStr(string hay, string nee) {
        int i =0;
        int j = 0;
        int ans = -1;

        if (size(nee)>size(hay)){
            return -1;
        }
        while(i<size(hay)){
            
            if(hay[i]==nee[j]){
               
                ans =i;
                i++;
                j++;
                while(j<size(nee)){
                    if(i == size(hay)){
                        return -1;
                    }
                    if(hay[i]==nee[j]){
                        i++;
                        j++;
                        continue;
                    }
                    i = ans+1;
                    ans=-1;
                    j=0;
                    break;
                }
                if(j+1 == size(nee)){
                    return ans ;
                }
                continue;

            }
            i++;

        }

        return ans;

    }
};