#include "complex.h"
#include <stdio.h>
int main() {
	printf("这里是输出测试\n");
	printf("test create:\n");
	Complex C1;
	Complex C2;
	Create(&C1, 1, 1);
	Create(&C2, 2, 2);
	PrintComplex(C1);
	PrintComplex(C2);
	printf("test add&*sub\n");
	PrintComplex(Add(C1, C2));
	PrintComplex(Sub(C1, C2));
	return 0;
}
