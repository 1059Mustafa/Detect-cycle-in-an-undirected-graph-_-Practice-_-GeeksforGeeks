  bool dfs(vector<int>g[], vector<bool>&vis, int start, int parent)
    {
        vis[start]=true;
        for(auto node:g[start])
        {
            if(!vis[node])
            {
                if(dfs(g,vis,node,start))
                {
                    return true;
                }
            }
            else if(node!=parent||node==start)
            {
                return true;
            }
            
        }
        return false;
    }

	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool>vis(V,false);
	    
	    for(int i=0;i<V;i++)
	    {
	        int parent=-1;
	        if(!vis[i]&&dfs(adj,vis,i,parent))
	        {
	                return true;
	        }
	    }
	    return false;
	}
};
