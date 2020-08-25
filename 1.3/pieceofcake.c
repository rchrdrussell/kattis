#include <stdio.h>

int main(){
	int n;
	int h;
	int v;
	scanf("%d %d %d", &n, &h, &v);

	if(v > n-v){
		if(h > n-h){
			printf("%d", v*h*4);
		}else{
			printf("%d", v*(n-h)*4);
		}
	}else{
		if(h > n-h){
			printf("%d", (n-v)*h*4);
		}else{
			printf("%d", (n-v)*(n-h)*4);
		}
	}
	return 0;
}
