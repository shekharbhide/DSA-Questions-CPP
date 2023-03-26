class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // STEP  1 : Convert string into int values
        vector<int> minutes;

        for(int i = 0; i < timePoints.size(); i++){
            string curr = timePoints[i];
            cout << "cur " << curr << endl;
            int hour = stoi( curr.substr(0,2) );
            cout << "h  " << hour << endl;
            int mint = stoi( curr.substr(3,2) );
            cout << "mi " << mint << endl;
            int totalMinutes =  (hour * 60) + mint;
            cout << "tot "<< totalMinutes << endl;
            minutes.push_back(totalMinutes);
        }

        //STEP 2  : SORT THE MINUTES ARRAY
        sort(minutes.begin(),minutes.end());

        //STEP 3 : CALCULATE DIFFERENCE & CALCULATE THE MINIMUM DIFFERENCE AMONG ALL

        int mini = INT_MAX;
        int n = minutes.size();
        for(int i=0;i<n-1;i++){
            int diff = minutes[i+1]-minutes[i];
            mini = min(mini,diff);
        }
        cout << "MINI " << mini << endl;

        //HANDLE CRITICAL CASE
        int lastDiff1 = (minutes[0] + 1440)-minutes[n-1];
        cout << "lastDiff1 " << lastDiff1 << endl;
        int lastDiff2 = minutes[n-1]  - minutes[0];
        cout << "lastDiff2 " << lastDiff2 << endl;
         int lastDiff = min(lastDiff1,lastDiff2);
         cout << "lastDiff " << lastDiff << endl;
        mini = min(lastDiff,mini);
        cout << "f min" << mini << endl;


        return mini;
    }
};