/*
[Q]https://leetcode.com/problems/sliding-window-maximum/
[TLE]
*/
class Solution {
    public:
        #define pii pair<int,int>
        struct cmp {
            bool operator()(pii aaa,pii bbb) {
                return aaa.first<bbb.first;
            }
        };
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            using namespace std;
            vector<int> ans;
            priority_queue<pii,vector<pii>,cmp> pq;
            for(int i=0;i<nums.size();i++){
                pq.push({nums[i],i});
                if(i+1>=k){
                    while(pq.size() && i-(pq.top()).second+1>k){
                        pq.pop();
                    }
                    ans.push_back((pq.top()).first);
                    while(pq.size() && i-(pq.top()).second+1>=k){
                        pq.pop();
                    }
                }
            }
            return ans;
        }
    
};