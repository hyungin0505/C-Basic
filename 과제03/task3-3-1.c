// 04.variables_and_operation

// 과제 03
// signed int 변수를 세 개 만들어 서로 곱해보고 결과 출력하기
// signed int 변수를 크게 만들어 오버플로우 시켜서 결과 출력하기
// signed int 변수를 작게(음수) 만들어 오버플로우 시켜서 결과 출력하기

#include <stdio.h>

int main(void) {
	signed int a1, a2, a3;
	signed int x1, x2, x3;
	signed int n1, n2, n3;
	
	a1 = 300; a2 = 400; a3 = 500;
	printf("general unsigned int: %d\n", a1 * a2 * a3);
	
	x1 = 100000; x2 = 200000; x3 = 300000;
	printf("large unsigned int: %d\n", x1 * x2 * x3);

	n1 = -100000; n2 = -200000; n3 = -300000;
	printf("small unsigned int: %d\n", n1 * n2 * n3);

	return 0;
}
