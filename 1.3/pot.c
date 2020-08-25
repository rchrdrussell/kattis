#include <stdio.h>
#include <math.h>
int main(){
	int x; //number of integers
	scanf("%d", &x);
	int s = 0;

	for(int i = 0; i < x; i++){
		int p;
		scanf("%d", &p);
		s += pow((p/10), (p-((p/10)*10)));
	}

	printf("%d", s);
	return 0;
}
