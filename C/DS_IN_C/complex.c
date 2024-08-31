#include "const.h"
#include "complex.h"
#include <stdio.h>
void Create(Complex* C, float x, float y) {
	C->Realpart = x;
	C->Imagepart = y;
}

float GetImag(Complex* C) {
	return C->Realpart;
}

float GetReal(Complex* C) {
	return C->Realpart;
}

Complex Add(Complex C1, Complex C2) {
	Complex sum;
	Create(&sum, C1.Realpart + C2.Realpart,
		   C1.Imagepart + C2.Imagepart);
	return sum;
}

Complex Sub(Complex C1, Complex C2) {
	Complex difference;
	Create(&difference, C1.Realpart - C2.Realpart,
		   C1.Imagepart -C2.Imagepart);
	return difference;
}

void PrintComplex(Complex C){
	if (GetImag(&C) >= 0)
		printf("输出复数为：%f + %fi\n",GetReal(&C), GetImag(&C));
	printf("输出复数为：%f %fi",GetReal(&C), GetImag(&C));
}
