// 04.variables_and_operation

// 과제 03
// float와 double 변수를 각각 만들고 언더플로우 시켜서 결과 출력하기
// 언더플로우란 지원 정밀도보다 세밀한(작은) 값을 집어넣을 때 값이 정상적으로 저장되는 현상

#include <stdio.h>

int main(void) {
	float f1 = 0.0000000000000000000001;
	double lf1 = 0.00000000000000000000000001;
	
	printf("%.50f\n", f1);
	printf("%.50lf\n", lf1);

	return 0;
}

