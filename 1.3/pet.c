#include <stdio.h>

int main(){
	int MAX = 0;
	int MAX_Player = 0;
	int s;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			int n;
			scanf("%d", &n);
			s += n;
			if(s > MAX){
				MAX = s;
				MAX_Player = i+1;
			}
			if(j == 3){
				s = 0;
			}
		}
	}

	printf("%d %d", MAX_Player, MAX);

	return 0;
}
