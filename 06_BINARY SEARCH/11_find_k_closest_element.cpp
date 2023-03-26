//FIRST FIND THE DIFFEERNCE & SORT ACCORING TO DIFF
//THEN RETURN FIRST K ELEMENTS
class Solution {
public:
  
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int diff;
       vector < pair <int,int> > ans;
       vector <int> fa;
        for(int i=0;i<arr.size();i++){
            diff = abs(x - arr[i]);
            ans.push_back(make_pair(diff,arr[i]));
        }
       
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            //cout << ans[i].second << endl;
            fa.push_back(ans[i].second);
        }

        sort(fa.begin(),fa.end());
        return fa;
    }
};


//USING TWO POINTER APPROACH
    vector<int> twoPtrMethod(vector<int>&arr,int k,int x){
        int l=0;
        int h=arr.size()-1;
        while(h-l >= k){
            if(x-arr[l] > arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }

        vector <int> ans;
        for(int i=l;i<=h;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            return twoPtrMethod(arr,k,x);
    }
