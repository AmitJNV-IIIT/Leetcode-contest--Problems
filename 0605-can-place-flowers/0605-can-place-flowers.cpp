class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        for(int i=0;i<m;i++){
            if(flowerbed[i]==1)
            i++;
            else{
                if(can(i,m,flowerbed)){
                    n--;
                    i++;
                }else continue;
            }
        }
        if(n>0)return 0;
        return 1;
    }
    bool can(int i,int m,vector<int>&flowerbed){
        if(i+1<m &&flowerbed[i+1]==1 || (i>0 &&flowerbed[i-1]==1))
        return 0;

        return 1;
    }
};