#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void bfs(int startNode, int count, const vector<vector<int>> &graphs)
{
    vector<int> resultsNodes;
    vector<bool> visited(count + 1, false);
    queue<int> currentQueue;

    resultsNodes.push_back(startNode);
    visited[startNode] = true;
    currentQueue.push(startNode);

    while (!currentQueue.empty())
    {
        int current = currentQueue.front();
        currentQueue.pop();

        for (int next : graphs[current])
        {
            if (!visited[next])
            {
                resultsNodes.push_back(next);
                visited[next] = true;
                currentQueue.push(next);
            }
        }
    }

    cout << resultsNodes.size() - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int nodeCount;
    int refCount;
    cin >> nodeCount >> refCount;

    vector<vector<int>> graphs(nodeCount + 1);

    for (int i = 0; i < refCount; i++)
    {
        int u, v;

        cin >> u >> v;
        graphs[u].push_back(v);
        graphs[v].push_back(u);
    }

    bfs(1, nodeCount, graphs);
}