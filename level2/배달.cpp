#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;


vector<pair<int,int>> arr[51];
vector<int> dist(51,INF);
priority_queue<pair<int,int>> pq;

void dijkstra(int start){
    
    dist[start] = 0;
    pq.push(make_pair(0,start));
    
    while(!pq.empty()){
        int cost = -pq.top().first;
        int x = pq.top().second;
        pq.pop();
        
        if(dist[x] < cost) continue;
        for(int i=0; i<arr[x].size();i++){
            int nextX = arr[x][i].first;
            int nextDist = cost + arr[x][i].second;
            if(dist[nextX] > nextDist){
                dist[nextX] = nextDist;
                pq.push(make_pair(-nextDist,nextX));
            }
        }
    }
}

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;

    for(vector<int> info : road){
        int a = info[0];
        int b = info[1];
        int c = info[2];
        arr[a].push_back(make_pair(b,c));
        arr[b].push_back(make_pair(a,c));
    }

    dijkstra(1);

    for(int d : dist){
        if(d  <= K) answer++;
    }
    
    


    return answer;
}