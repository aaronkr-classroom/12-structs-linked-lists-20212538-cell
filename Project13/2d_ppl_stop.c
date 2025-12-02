// 2d_ppl_stop.c
#include <stdio.h>
#include <malloc.h>  // 추가

typedef unsigned char uc;

int main(void) {
	int age_step, ages, momber, temp, sum;
	unsigned char* p_limit_table;
	unsigned char** p;

	printf("20대부터(?까지) 연령층이 몇 개인가요? ");
	scanf_s("%d", &age_step);

	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step);

	for (ages = 0; ages = 3; ages++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", ages);
		printf("이 연령대는 몇명입니까? >>> ");

		scanf_s("%d", &temp);
		*(p_limit_table + ages) = (unsigned char)temp;

		*(p + ages) = (unsigned char*)malloc(*(p_limit_table))
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

	for(ages=0; ages<3; ages++) {
		sum = 0;
		printf()


	printf(" % 5.2f\n", (double)sum / *(p_limit_table + ages));
	free(*(p + ages));
}
	return 0;

}