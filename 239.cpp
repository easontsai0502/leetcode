/*
[Q]https://leetcode.com/problems/sliding-window-maximum/
[]
*/
class Solution {
    public:{
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            using namespace std;
            #define pii pair<int,int>
            bool vser(pii a,pii b){
                return a.first<b.first;
            }
            vector<int> ans;
            priority_queue<pii,vector<pii>,vser> pq;
            for(int i=0;i<nums.size(),i++){
                pq.push({nums[i],i});
                if(i+1>=k){
                    while(i-(pq.back()).second<k){
                        pq.pop();
                    }
                    ans.push_back((pq.back()).first);
                }
            }
            return ans;
        }
    }
};