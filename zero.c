#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10][10],b[10][10],m,n,i,j;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				for(int k=0;k<n;k++)
				{
					b[i][k]=0;
				}
				for(int p=0;p<m;p++)
				{
					b[p][j]=0;
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   printf("%d",b[i][j]);
		   printf("");
		}
		printf("\n");
	}
	
	return 0;
}
