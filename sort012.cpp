class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_of_zero = 0;
        int count_of_one = 0;
        int count_of_two = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                count_of_zero++;
            }
            if(nums[i] == 1){
                count_of_one++;
            }
            if(nums[i] == 2){
                count_of_two++;
            }
        }
        //0 == 2
        //1 == 2
        //2 == 2
        
        //[2,0,2,1,1,0]
        int i=0;
        while(count_of_zero > 0){
            nums[i] = 0;
            count_of_zero--;
            //2->1->0
            i++;
            //i=0->1->2
        }
        //[0,0,2,1,1,0]
        //i=2
        while(count_of_one > 0){
            nums[i] = 1;
            count_of_one--;
            //2->1->0
            i++;
            //i=2->3->4
        }
        
         //[0,0,1,1,1,0]
        
          while(count_of_two > 0){
            nums[i] = 2;
            count_of_two--;
            //2->1->0
            i++;
            //i=4->5->6
        }
        
      
    }
};
