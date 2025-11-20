class Solution {
public:
    static bool check(vector<int>a,vector<int>b){
        if(a[1]==b[1]){
            return a[0]>b[0];
        }
        return a[1]<b[1];
    }
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),check);
        int count=2;
        int num1=intervals[0][1]-1;
        int num2=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            if(num2<intervals[i][0]){
                count+=2;
                num1=intervals[i][1]-1;
                num2=intervals[i][1];
            }
            else if(num1<intervals[i][0]){
                count+=1;
                num1=num2;
                num2=intervals[i][1];
            }
        }
        return count;
    }
};
