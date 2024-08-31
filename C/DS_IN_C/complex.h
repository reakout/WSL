typedef struct  {
	float Realpart;
	float Imagepart;
}Complex;

void Create(Complex* C, float x, float y);

float GetReal(Complex* C);

float GetImag(Complex* C);

Complex Add(Complex C1, Complex C2);

Complex Sub(Complex C1, Complex C2);

void PrintComplex(Complex C1);
