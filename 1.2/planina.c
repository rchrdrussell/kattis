#include <stdio.h>
#include <math.h>

int main(){
	int N;
	scanf("%d", &N);
	int x = 2;

	for(int y = 0; y < N; y++){
		x = x + pow(2, y);
		if(y+1 == N){
			printf("%d", x*x);
		}else{
			continue;
		}
	}

}
