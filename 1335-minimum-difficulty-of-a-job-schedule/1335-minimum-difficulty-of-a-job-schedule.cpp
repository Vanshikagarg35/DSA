class Solution {
public:
int t[301][11];
int solve(int d , int idx, vector<int>& jobDifficulty){
    int n = jobDifficulty.size();
    if(d==1){
        int maxD = INT_MIN;
        for(int i=idx; i<n; i++){
            maxD = max(maxD , jobDifficulty[i]);
        }
        return maxD;
    }
    if(t[idx][d]!=-1) return t[idx][d];
    int maxD = INT_MIN;
    int result = INT_MAX;
    for(int i=idx; i<=n-d; i++){
        maxD = max(maxD , jobDifficulty[i]);
        result = min(result,maxD + solve(d-1 , i+1, jobDifficulty));
    }
    return t[idx][d] = result;
}
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        if(jobDifficulty.size() < d) return -1;
        memset(t , -1 , sizeof(t));
        return solve(d , 0 , jobDifficulty);

        
    }
};