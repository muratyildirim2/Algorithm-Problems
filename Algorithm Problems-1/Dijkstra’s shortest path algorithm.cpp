/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define V 9

int minDistance(int dist[], int sptSet[])
{
    int min = INT_MAX, min_index;

    for(int v = 0; v < V; v++)
    {
        if(sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v], min_index = v;
        }
    }

    return min_index;
}

void printSolution(int dist[])
{
    cout << "Vertex   " << "Distance from Source\n";
    for(int i = 0; i < V; i++)
        cout << i << "           " << dist[i] << "\n";
}

void dijkstra(int graph[V][V], int source)
{
    int dist[V];
    int sptSet[V];

    for(int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[source] = 0;

    for(int count = 0; count < V - 1 ; count++)
    {
        int u = minDistance(dist, sptSet);

        sptSet[u] = true;

        for(int v = 0; v < V; v++)
        {
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = graph[u][v] + dist[u];

        }


    }

    printSolution(dist);


}


void solve()
{

    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 }
    };

    dijkstra(graph, 0);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
      */
    ll t = 1;
    // cin >> t;
    while (t-- )
    {
        solve();

    }

    return 0;
}
