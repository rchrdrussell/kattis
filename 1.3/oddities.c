#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x%2 == 0){
			printf("%d is even\n", x);
			continue;
		}
		printf("%d is odd\n", x);
	}

	return 0;
}
