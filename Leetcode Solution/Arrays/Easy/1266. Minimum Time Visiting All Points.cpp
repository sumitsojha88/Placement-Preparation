
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
            int s=0;
        for(int i=0;i<points.size()-1;i++){
            s+=max(abs(points[i+1][1]-points[i][1]),abs(points[i+1][0]-points[i][0]));
        }
        return s;
    }
};
