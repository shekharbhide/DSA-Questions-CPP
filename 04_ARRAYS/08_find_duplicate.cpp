 int findDuplicate(vector<int>& nums) {
    /*
    int ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            ans = nums[i];
        }

    }
    return ans;
    */

    /*
    //BETTER
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        int index = abs(nums[i]);

        //agr already visisted he to
        if(nums[index] < 0){
            ans = index;
            break;
        }

        //mark visitd
        nums[index] *= -1;
    }
    return ans;
    */

    //POSITIONING METHOD
    while(nums[0] != nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    }