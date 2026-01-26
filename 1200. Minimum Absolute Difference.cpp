class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        int mindiff = INT_MAX;
        
        for(int i = 0; i < arr.size() - 1; i++) {
            int currentDiff = arr[i+1] - arr[i];
            
            if(currentDiff < mindiff) {

                mindiff = currentDiff;
                ans.clear();  
                ans.push_back({arr[i], arr[i+1]});
            }
            else if(currentDiff == mindiff) {

                ans.push_back({arr[i], arr[i+1]});
            }

        }
        
        return ans;
    }
};
