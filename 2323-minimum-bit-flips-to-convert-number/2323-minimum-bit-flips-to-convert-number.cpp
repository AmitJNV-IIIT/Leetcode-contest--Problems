class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        while(start!=0 || goal!=0){
       if((start&1) !=(goal&1)){//find right most bit(MSD)
         c++;
       } start>>=1;//right shift by 1 bu 1 is done.
       goal>>=1;
        }return c;
    }
};