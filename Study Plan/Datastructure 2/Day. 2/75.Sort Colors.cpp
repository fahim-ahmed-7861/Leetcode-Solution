//https://leetcode.com/problems/3sum/description/?envType=study-plan&id=data-structure-ii

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low=0,n = nums.size();
        int high = n-1,i;

        while(low<n and nums[low]==0)low++;
     

        for(i=low; i<=high; i++)
        {
                while(high>=0 and nums[high]==2)high--;
                while(low<=high and nums[low]==0)low++;
                i = max(i,low);
            if(nums[i]==0)
            {
                swap(nums[low],nums[i]);
                low++;
            }
            else if(nums[i]==2 and high>i)
            {
                swap(nums[high],nums[i]);
                high--;
            }

            if(nums[i]==0 and nums[low]!=0)
            i--;

          
        }
 

     
       
        
    }
};