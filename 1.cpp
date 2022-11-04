//[搜尋][AC]
/*define*/
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define wassomething() empty()==false
/*struct*/
struct super_pair{
	INT x1=0;
	INT x2=0;
	INT x3=0;
	INT x4=0;
	INT x5=0;
};
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<PII>sorted;
		for(INT i=0;i<nums.size();i++){
			sorted.push_back({nums[i],i});
		}
		sort(sorted.begin(),sorted.end());
		INT l=0;
		INT r=(INT)nums.size()-1;
		vector<INT> re;
		while(l<r){
			if(sorted[r].first + sorted[l].first >target)r--;
			else if(sorted[r].first + sorted[l].first <target)l++;
			else if(sorted[r].first + sorted[l].first ==target){
				re.push_back(sorted[l].second);
				re.push_back(sorted[r].second);
				break;
			}
		}
		return re;
	}
};