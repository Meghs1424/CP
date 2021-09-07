class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int check = 1;
        int minLen = 200;
        for(int i=0; i<strs.size(); i++) {
            if(strs[i].length() < minLen)
                minLen = strs[i].length();
        }
        int Len = 0;
        while(check == 1 and Len < minLen) {
            for(int j=0; j<strs.size(); j++) {
                if(strs[0][Len] != strs[j][Len])
                    check = 0;
            }
            if(check == 1)
                Len++;
        }
        return strs[0].substr(0,Len);
    }
};
