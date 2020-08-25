#include <stdio.h>

int main(){
	int x; //number of periods of constant quality of life during the person's lifetime
	scanf("%d", &x);
	float s = 0;

	for(int i = 0; i < x; i++){
		float q; //qualty of life
		float y; //number of years in this period
		float p; //product
		scanf("%f %f", &q, &y);
		p = q * y;
		s += p;
	}
	printf("%.3f", s);
	return 0;
}
