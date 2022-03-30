class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maximum = 0;
        
        while(left<right){
            int leftHeight = height[left];
            int rightHeight = height[right];
            int min_Height = min(leftHeight,rightHeight);
            int length = right - left;
            int curr_Area = min_Height * length;
            maximum = max(maximum, curr_Area);
            
            if(leftHeight < rightHeight){
                left++;
            }
            else{
                right--;
            }
        }
        return maximum;
    }
};