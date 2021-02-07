#include<stdio.h>
#include<stdbool.h>

  
  
bool colorGraph(int V,int G[][V],int color[],int pos, int c){ 
      
    if(color[pos] != -1 && color[pos] !=c) 
        return false; 
          
    color[pos] = c; 
    bool ans = true; 
    for(int i=0;i<V;i++){ 
        if(G[pos][i]){ 
            if(color[i] == -1) 
                ans &= colorGraph(V,G,color,i,1-c); 
                  
            if(color[i] !=-1 && color[i] != 1-c) 
                return false; 
        } 
        if (!ans) 
            return false; 
    } 
      
    return true; 
} 
  
bool isBipartite(int V,int G[][V]){ 
    int color[V]; 
    for(int i=0;i<V;i++) 
        color[i] = -1; 
          
  
    int pos = 0; 

    return colorGraph(V,G,color,pos,1); 
      
} 

int main()
{
int n;
scanf("%d",&n);
int arr[n][n];
int flag=0;


for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  
}
if(isBipartite(n,arr))
printf("true");
else
{
    printf("false");
}


}
