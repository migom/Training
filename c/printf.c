/*
 * 사람들이 잘 모르는 printf format
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int	i;
	char	*str = "Hello, World!";

	// 너비 지정하기
	for (i = 0; i < 10; i++)
		printf("%*d\n", i+1, i);

	// substring
	for (i = 0; i < strlen(str); i++)
		printf("%.*s\n", i+1, str);

	// 0 이면 출력 안 하기
	printf("%d\n", 0);	// 0\n
	printf("%.d\n", 0);	// \n

	// 16 진수 표현
	printf("%x\n", 123);	// 7b
	printf("%#x\n", 123);	// 0x7b (앞에 0x 를 붙여준다.)
	printf("%04x\n", 123);	// 007b

	// 항상 부호 붙이기
	printf("%+d\n", 1);
	printf("%+d\n", -1);
	return 0;
}
