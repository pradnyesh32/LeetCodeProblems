class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0 ;
        int len = s.length();
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(s.at(i) != ' ')
            {
                res++;
            }
            else
            {
                len--;
                if(res > 0)
                {
                    return res;
                }
            }
        }
        return len;
    }
};
