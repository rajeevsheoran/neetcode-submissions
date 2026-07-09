class Solution {
   public:
    bool isAnagram(string s, string t) {
        int fre[26];
        for (int i = 0; i < s.length(); i++) {
            fre[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            if(fre[t[i]-'a']==0){
                fre[t[i]-'a']++;
            }
            else{
            fre[t[i] - 'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (fre[i] > 0) return false;
        }
        return true;
    }
};
