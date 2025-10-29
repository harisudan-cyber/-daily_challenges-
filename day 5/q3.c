#include<stdio.h>
int main(){
	float x1,y1,x2,y2,a,points;
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	a=(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
	points=sqrt(a);
	printf("%.2f",points);
	return 0;
}
