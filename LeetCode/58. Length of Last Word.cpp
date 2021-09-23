class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, check = 0;
        for(int i=(s.length())-1; i>=0; i--) {
            if(s[i] == ' ' && check == 1)
                break;
            if(s[i] != ' ') {
                len++;
                if(check == 0)
                    check = 1;
            }
        }
        return len;
    }
};
