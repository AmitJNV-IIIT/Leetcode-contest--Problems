class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     int n=word1.size(),s=word2.size(),i=0,j=0;
     string r="";
     while(i<n || j<s){
          if(i<n){
        r+=word1[i++];
     }
     if(j<s){
        r+=word2[j++];
     }
     } 
     return r;
    }
};