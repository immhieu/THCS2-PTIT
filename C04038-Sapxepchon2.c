#include<stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
		*a=*b;
		*b=tmp;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[100];
	for (int i = 0; i < n; ++i)
		scanf("%d",&a[i]);
	
	for (int i = 0; i < n-1; ++i)
	{
		int min_pos=i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(&a[i],&a[min_pos]);
		
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}