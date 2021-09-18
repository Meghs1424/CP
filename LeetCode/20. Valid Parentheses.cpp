class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0)
            return false;
        stack<char> s1,s2;
        for(int i=0; i<s.length(); i++)
            s1.push(s[i]);
        while(!s1.empty()) {
            char tp = s1.top();
            s1.pop();
            if(tp == ')')
                s2.push('(');
            else if(tp == ']')
                s2.push('[');
            else if(tp == '}')
                s2.push('{');
            else {
                if(s2.empty())
                    return false;
                if(s2.top() == tp)
                    s2.pop();
                else
                    return false;
            }    
        }
        if(s2.empty())
            return true;
        return false;
    }
};
