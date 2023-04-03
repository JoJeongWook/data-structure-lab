#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int test_case, T; 

	freopen("input_2068.txt", "r", stdin);
	scanf("%d", &T);
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int i;
		int num[10];

		for (i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
		}
		max = num[0];

		for(i=0:i<10;i++)
		int s = 0;
		for (int i = 0; i < 10; i++) {
			
   
			if (num[i] > s);
		    s = num[i];
		
		
		}
		

		printf("#%d %d\n", test_case, s);

	}
	return 0;
}