class Solution {
public:
    string reverseVowels(string s) {
        int l=0,h=s.size();
        while(l<h){
           if(vow(s[l]) && vow(s[h])) {
            swap(s[l++],s[h--]);
           }
           else if( !vow(s[l]) &&vow(s[h])) l++;
           else if(vow(s[l]) && !vow(s[h])) h--;
            else{
            l++;
            h--;
           }
        }
        return s;
    }
    bool vow(char i){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E' ||i=='I'||i=='O'||i=='U')
        {return 1;}
        return 0;
    }
};