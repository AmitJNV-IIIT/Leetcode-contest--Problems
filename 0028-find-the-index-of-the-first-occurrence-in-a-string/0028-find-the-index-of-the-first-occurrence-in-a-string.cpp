class Solution {
public:
    int strStr(string haystack, string needle) {
      int h=haystack.size(),m=needle.size();
      for(int i=0;i<=h-m;i++){
        if(haystack.substr(i,m)==needle)return i;
      } 
      return -1;
    }
};