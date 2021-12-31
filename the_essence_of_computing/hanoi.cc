#include <stdio.h>

// a: src
// b: dst
void Towers(int n,char a,char t,char b){
	if(n==1){
		printf("Move disk %d from %c to %c\n", n, a, b);
	}
	else{
		Towers(n-1,a,b,t);
		printf("Move disk %d from %c to %c\n", n, a, b);
		Towers(n-1,t,b,a);
	}
}
int main(int argc, char *argv[]) {
	int n = 64;
	Towers(n,'A','T','B');
	return 0;
}
