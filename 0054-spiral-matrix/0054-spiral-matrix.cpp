class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>as;
        int row=matrix.size(),c=matrix[0].size();
        int top=0,l=0,bt=row-1,r=c-1;
        while(top<=bt && l<=r){
            for(int i=l;i<=r;i++){
                as.push_back(matrix[top][i]);
            }top++;
            for(int i=top;i<=bt;i++){
                as.push_back(matrix[i][r]);
            }r--;
            if(top<=bt){
                for(int i=r;i>=l;i--){
                    as.push_back(matrix[bt][i]);
                }bt--;
            }if(l<=r){
                for(int i=bt;i>=top;i--){
                    as.push_back(matrix[i][l]);
                }l++;
            }
        }return as;
    }
};