#include<stdio.h>
int main(){
	int a,last,first;
	scanf("%d",&a);
	last=a%10;
	printf("%d\n",last);
	first=a/10;
	printf("%d",first);
	return 0;
}
