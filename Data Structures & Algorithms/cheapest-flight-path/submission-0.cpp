class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        vector<bool>updated(n,false);
        dist[src]=0;
        updated[src]=true;
        for(int i=0;i<k;i++)
        {
            for(int i=0;i<n;i++)updated[i]=false;
            updated[src]=true;
            for(auto it:flights)
            {
                int u=it[0];
                int v=it[1];
                int w=it[2];
                if(!updated[v] && dist[u]!=INT_MAX && dist[u]+w<dist[v])
                {dist[v]=dist[u]+w;
                updated[v]=true;
                }
            }
        }
        if(dist[dst]!=INT_MAX)return dist[dst];
        else return -1;
    }
};
