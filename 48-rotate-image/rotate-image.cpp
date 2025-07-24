class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0; i<r; i++){
            for(int j=i; j<c; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
            int k=0;
            int m =c-1;
            while(k<=m){
                swap(matrix[i][k], matrix[i][m]);
                k++;
                m--;
            }
        }
    }
};
