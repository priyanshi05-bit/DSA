class Solution {
public:
    bool isPalindrome(int x) {
        int  num = x;
        long long reverse = 0;
        if (x<0){
            return false;
        }


        while(x>0){
            int digit=x % 10;
            reverse =reverse*10 + digit;
            x=x/10;
        }
        
        return num==reverse;

    }
};