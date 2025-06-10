class Solution
{
public:
    bool dfs(int node, vector<vector<int>> &adj, vector<int> &visited, vector<int> &pathVisited)
    {
        visited[node] = 1;
        pathVisited[node] = 1;

        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                if (dfs(it, adj, visited, pathVisited))
                    return true;
            }
            else if (pathVisited[it])
            {
                return true;
            }
        }

        pathVisited[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> visited(numCourses, 0);
        vector<int> pathVisited(numCourses, 0);
        vector<vector<int>> adj(numCourses);

        for (const auto &it : prerequisites)
        {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);  // edge from u -> v
        }

        for (int i = 0; i < numCourses; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, pathVisited))
                    return false;  // cycle found → cannot finish all courses
            }
        }

        return true;  // no cycle → can finish all courses
    }
};
