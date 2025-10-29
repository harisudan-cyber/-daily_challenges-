#include<stdio.h>
int main(){
	int a,l,b,ba,h,r,rectangle,square,triangle,circle;
	scanf("%d%d%d%d%d%d",&a,&l,&b,&h,&ba,&r);
	rectangle=l*b;
	printf("%d\n",rectangle);
	square=a*a*a;
	printf("%d\n",square);
	triangle=0.5*ba*h;
	printf("%d\n",triangle);
	circle=22/7*(r*r);
	printf("%d",circle);
	return 0;
}
