class Solution {
public:
    bool checkString(string s) {
        bool find =0;
        int count =0;
       for(int i =0;i<size(s);i++){
        
        if(s[i]=='b'){
            find =1;
        }
        if(find && s[i]=='a' ){
            count ++;
        }
       } 
if(count == 0){
    return true;
}
return false;

    }
};