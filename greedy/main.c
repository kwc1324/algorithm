#include <stdio.h>

int main(void)
{
	int coin[4] = {500, 100, 50, 10};
	int ret[4];
	int n;
	printf("거스름돈의 가격을 쓰시오: ");
	scanf("%d", &n);
	ret[0] = n / coin[0];
	n %= coin[0];
	ret[1] = n / coin[1];
	n %= coin[1];
	ret[2] = n / coin[2];
	n %= coin[2];
	ret[3] = n / coin[3];
	n %= coin[3];
	for (int i = 0; i <= 3; i++)
	{
		printf("%d원 %d개 \n", coin[i], ret[i]);
	}

	return 0;
}
