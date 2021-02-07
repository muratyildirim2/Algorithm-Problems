#include <limits.h> 
#include <stdio.h> 

int max(int a, int b) 
{ 
	if(a>b)
	return a;
	else
	{
		return b;
	}
	
} 

int solve(int m, int n) 
{ 

	int Floor[m + 1][n + 1]; 
	int res; 
	int i, j, x; 


	for (i = 1; i <= m; i++) { 
		Floor[i][1] = 1;                          
		                                         
		Floor[i][0] = 0;                         
	} 											
                                                  //Time Complexity: O(nlogn)
	for (j = 1; j <= n; j++)					 
		Floor[1][j] = j;						
		 


	for (i = 2; i <= m; i++) { 
		for (j = 2; j <= n; j++) { 
			Floor[i][j] = INT_MAX; 
			for (x = 1; x <= j; x++) { 
				res = 1 + max( 
							Floor[i - 1][x - 1], 
							Floor[i][j - x]); 
				if (res <Floor[i][j]) 
					Floor[i][j] = res; 
			} 
		} 
	} 

	return Floor[m][n]; 
} 


int main() 
{ 
	int n ,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d", solve(m, n)); 
	return 0; 
} 
