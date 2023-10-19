void dfs(vector<int> adj[],vector<int> &vis,vector<int> &ans,int start){
        ans.push_back(start);
        vis[start] = 1;
        for(auto itr : adj[start]){
            if(vis[itr] == 0)dfs(adj,vis,ans,itr);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> ans;
        dfs(adj,vis,ans,0);
        return ans;
    }
