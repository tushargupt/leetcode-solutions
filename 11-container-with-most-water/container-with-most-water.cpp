class Solution {
public:
    int maxArea(vector<int>& height) {
         int area = INT_MIN;
        int currarea =0;
         int i=0, j = height.size()-1;
         while(i<j){
          currarea = min(height[i], height[j])*(j-i);
            area = max(area, currarea);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
         }
         area = max(area, currarea);
         return area;
    }
};