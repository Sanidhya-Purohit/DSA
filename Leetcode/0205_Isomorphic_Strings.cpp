class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp1;
        unordered_map<char, char> mpp2;
        for (int j=0;j<s.size() ;j++) {           if (mpp1[s[j]]=='\0'&&mpp2[t[j]]=='\0'){
            mpp1[s[j]]=t[j];
            mpp2[t[j]]=s[j];
        }
       else if (mpp1[s[j]]==t[j]&&mpp2[t[j]]==s[j]){
           mpp1[s[j]]=t[j];
           mpp2[t[j]]=s[j];
       } 
                                       else { return false;}
        }
        return true;
    }
};