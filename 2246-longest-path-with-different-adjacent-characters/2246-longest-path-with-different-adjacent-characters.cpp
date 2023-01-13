class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        
        int n = parent.size();
        vector<vector<int>> graph(n);
        
        for(int i = 1; i < n; i++)
            graph[parent[i]].push_back(i);
        
        int ans = 0;        
        helper(graph, 0, s, ans);
        return ans;
    }
    
    int helper(vector<vector<int>> &graph, int i, string &s, int &ans)
    {
        int mx1, mx2 = mx1 = 0;
        for(auto &j : graph[i])
        {
            int tmp = helper(graph, j, s, ans);
            
            if(s[j] != s[i])
            {
                if(tmp > mx1)
                    mx2 = mx1, mx1 = tmp;
                else if(tmp > mx2)
                    mx2 = tmp;
            }
        }
        
        ans = max(ans, mx1 + mx2 + 1);
        return mx1 + 1;
    }
};