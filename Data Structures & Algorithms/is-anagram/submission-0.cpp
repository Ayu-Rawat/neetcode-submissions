class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<int> ch(26,0);

        if(n!=m) return false;

        for(int i = 0; i < n; i++){
            ch[s[i] - 'a']++;
        }

        for(int i = 0; i < n; i++){
            ch[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(ch[i]!=0) return false;
        }

        return true;
    }
};
