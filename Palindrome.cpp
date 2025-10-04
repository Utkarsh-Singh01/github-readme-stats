class Solution {
public:
    bool isPalindrome(int x) {
         if (x<0){
            return false;
         }
        int c,rev;
        long s=0;
        c=x;
        while (x>0) {
           rev= x%10;
            s=(s*10) + rev;
            x=x/10;
        }
        if (c==s) {
            return true;
        }
        else {
            return false;
        }
    }
};
