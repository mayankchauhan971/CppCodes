int distbfs(int i, int v) // returns the new distance to the destination node
{
    return dist[v] + graph[v][i].second;
}

/* To print shortest distance from given source (here, 0) to 
 every other node */
void zeroOneBFS(int source, int n) 
{ 
    // Marking distances of all nodes from the source except itself as infinity  
    int i = 0;
    while (i < n) 
    {
        if (i == source)
        {
            dist[i] = 0; // distance of source from itself is 0
            Q.push_back(i); 
        }
        else
            dist[i] = INT_MAX; // other vertices
        i++;
    }

    while (!Q.empty()) 
    { 
        int v = Q.front(); 
        Q.pop_front(); 

        for (int i = 0; i < graph[v].size(); i++) 
        { 
        // checks for the shortest distance to the nodes
            if (dist[graph[v][i].first] > distbfs(i, v)) 
            { 
                dist[graph[v][i].first] = distbfs(i, v); 

                /* Put destination vertex connected by 0 edge to front and vertex connected by 1 
                edge to back so that vertices are processed 
                in ascending order of weights. */
                if (graph[v][i].second == 0) 
                    Q.push_front(graph[v][i].first); 
                else
                    Q.push_back(graph[v][i].first); 
            } 
        } 
    } 

    // printing the dist array that stores the shortest distances 
    for (int i = 0; i < n; i++) 
        cout << dist[i] << endl; 
} 
