void addEdge(int **adj, int u, int v, int *size) {
    size[u]++;
    adj[u] = (int *)realloc(adj[u], size[u] * sizeof(int));
    adj[u][size[u] - 1] = v;
}
int** build_graph(int edges,int input){
    int **adj = (int **)malloc(edges * sizeof(int *));
    int *size = (int *)malloc(edges * sizeof(int *));
    for(int i=1;i<=input;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        addEdge(adj,u,v,size);
    }
}
void print_graph(int **edges,int *size,int n){
    for(int i=0;i<n;i++){
        
    }
}