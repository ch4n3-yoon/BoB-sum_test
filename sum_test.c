#include <stdio.h>
 
int main(int argc, char * argv[]) {
	
	// i   - for clause
	// sum - store the sum of 1 ~ 100.
	int i, sum;
	
	
	char track[] = "�����"; 
	char name[] = "������";
	printf("[bob6][%s]sum_test[%s]\n", track, name);	
	
	// add 1 ~ 100
	for(i=1; i<=100; i++) {
		sum += i;
	}
	
	// print the sum of 1 ~ 100.
	printf("%d\n", sum);
	
	// exit
	return 0;
}
