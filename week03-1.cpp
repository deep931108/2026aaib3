///week03-1
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        //把num[i]每個位數加起來否==i
        for(int i=0;i<nums.size();i++){//陣列逐一檢查
        int total=0;//把num[i]
        while (nums[i]>0){
            total+=nums[i]%10;
            nums[i]=nums[i]/10;
        }
        if (total==i)return i;
    }
    return -1;
    }
};
