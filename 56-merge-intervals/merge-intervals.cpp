class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& matrix) {
    sort(matrix.begin(), matrix.end());
     vector<vector<int>> res;
     res.push_back(matrix[0]);
     int i=1;
    while(i<matrix.size()){
        vector<int> r = matrix[i];
        if(r[0]>res[res.size()-1][1] && r[1]>res[res.size()-1][1])
        {
            res.push_back(r);
        }
        else{
           res[res.size()-1][0] = min(res[res.size()-1][0], r[0]);
            res[res.size()-1][1] = max(res[res.size()-1][1], r[1]);
        }
        i++;
    }
    return res;
    }
};
