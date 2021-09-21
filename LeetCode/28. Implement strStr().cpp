class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        int k = 0;
        while(k < haystack.length()) {
            if(haystack[k] == needle[0]) {
                //cout<<haystack[k]<<' '<<k<<' ';
                int i = 1;
                while(haystack[k+i] == needle[i] && k+i < haystack.length()) {
                    i++;
                }
                //cout<<i<<'\n';
                if(i == needle.length())
                    return k;
            }
            k++;
        }
        return -1;
    }
};
