// 04.variables_and_operation

// 과제 03
// unsigned int 변수를 세 개 만들어 서로 곱해보고 결과 출력하기
// unsigned int 변수를 크게 만들어 오버플로우 시켜서 결과 출력하기
// unsigned int 변수를 작게(음수) 만들어 오버플로우 시켜서 결과 출력하기

// unsigned int는 항상 양수를 저장하는 자료형인데 거기에 음수를 집어넣는다???
// 참고: C 표준에서는 unsigned int 자료형에 대해 오버플로우 행위는 undefined behavior이다.

#include <stdio.h>

int main(void) {
	unsigned int a1, a2, a3;
	unsigned int x1, x2, x3;
	unsigned int n1, n2, n3;
	
	a1 = 300; a2 = 400; a3 = 500;
	printf("general unsigned int: %u\n", a1 * a2 * a3);
	
	x1 = 100000; x2 = 200000; x3 = 300000;
	printf("large unsigned int: %u\n", x1 * x2 * x3);

	n1 = -100000; n2 = -200000; n3 = -300000;
	printf("small unsigned int: %u\n", n1 * n2 * n3);

	return 0;
}
