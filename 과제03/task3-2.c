// 04.variables_and_operation

// 과제 03
// float 변수를 화면에 출력하는 방법
// printf("%f\n", value)

// double 변수를 화면에 출력하는 방법
// printf("%lf\n", value)

#include <stdio.h>

int main(void) {
	float value1 = 1.23456789;
	printf("%f\n", value1); // 강의자료에는 value이지만 value2로 해야 동작

	double value2 = 1.2345678;
	printf("%lf\n", value2); // 강의자료에는 value이지만 value2로 해야 동작

	return 0;
}
