class Solution {
public:
    bool canAliceWin(int n) {
        int c =10;
        bool win = false;
        while(n>0){
            if( n >= c){
                n -=c;
                c--;
            }
            else{
                return win ;
            }
            if( win == false){
                win = true;
            }
            else{
                win = false;
            }

        }
        return win ;
    }
};