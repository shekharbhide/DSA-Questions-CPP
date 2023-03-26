//USING TWO POINTER APROACH

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        //first sort the array
        sort(nums.begin(),nums.end());
        
        set< pair <int ,int >> ans;
        //take two pointers i=0,j=1
        int i=0;
        int j=1;
        while(j < nums.size()){
            int diff = nums[j]-nums[i];
            if(diff == k){
                ans.insert({nums[i],nums[j]});
               // cout << nums[j] << " " << nums[i] << endl;
                i++;
                j++;
            }
            else if(diff > k){
                i++;
            }
            else{
                j++;
            }

            if(i==j) j++;
        }

        return ans.size(); //ans.size() means counting in pairs
    }
};



//USING BINARY SEARCH ALGO


class Solution {
public:
    int binarySearch(vector<int>& nums,int start,int end,int target){
        int mid = start + (end-start)/2;
        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        //first sort the array
        sort(nums.begin(),nums.end());
        
        set< pair <int ,int >> ans;
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(binarySearch(nums,i+1,j,nums[i]+k) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }

        return ans.size(); //ans.size() means counting in pairs
    }
};
