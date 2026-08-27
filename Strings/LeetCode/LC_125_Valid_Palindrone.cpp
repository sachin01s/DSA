class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(char &c : s)
        {
            c = tolower(c);
        }

        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {   // if invalid charac then move right
            if(!((s[left] >= 'a' && s[left] <= 'z') || 
                 (s[left] >= '0' && s[left] <= '9')))
            {
                left++;
            }// if invalid charac then move left
            else if(!((s[right] >= 'a' && s[right] <= 'z') || 
                      (s[right] >= '0' && s[right] <= '9')))
            {
                right--;
            }
            else
            {
                if(s[left] != s[right])
                    return false;

                left++;
                right--;
            }
        }

        return true;
    }
};