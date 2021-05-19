
class Solution {
public:
    int numRabbits(vector<int>& answers) {
         unordered_map<int,int> map;
        int res=0;
        for(int answer : answers){
            if(++map[answer] == 1){
                res+=answer+1;
            }
            if(map[answer] == answer+1){
                map[answer]=0;
            }
        }
        return res;
    }
};
