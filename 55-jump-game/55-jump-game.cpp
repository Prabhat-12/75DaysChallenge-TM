class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dis = 0;
        for (int i = 0; i <= dis; i++) {
        dis = max(dis, i + nums[i]);
        if (dis >= nums.size()-1) {
            return true;
        }
    }
    return false;
    }
        
//         int size = nums.size();
//         if (size == 1) {
//             return true;
//         }
//         int maxJump = 0;
//         for (int i = 0; i < size-1; i++) {
//             if (maxJump < i) {
//                 return false;
//             }
//             maxJump = max(maxJump, i+ nums[i]);
//         }
//         if (maxJump >= size-1) {
//             return true;
//         }
        
//         return false;
//     }
};