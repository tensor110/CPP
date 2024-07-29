#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int node, int graph[101][101], int color[], int n, int col){
    for(int k = 0; k<n; k++){
        if(k != node && graph[k][node] == 1 && color[k] == col)
            return false;
    }
    return true;
}

bool solve(int node, int graph[101][101], int color[], int n, int m){
    if(node == n) return true;
    for(int i = 0; i<m; i++){
        if(isSafe(node, graph, color, n, i)){
            color[node] = i;
            if(solve(node + 1, graph, color, n, m) == true) return true;
            color[node] = 0;
        }
    }
    return false;
}

// n -> No. of nodes 
// m -> No. of colors 
bool graphColoring(int graph[101][101], int n, int m){
    int color[101] = {0};
    if(solve(0, graph, color, n, m) == true) return true;
    return false;
}