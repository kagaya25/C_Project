/*
 ============================================================================
 Name        : ckadai17.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int x;


		printf("整数値を入力してください：");
		scanf("%d",&x);


		switch(x){
		case 0:
			printf("[零です]");
			break;
		case 1:
			printf("壱です");
			break;
		case 2:
			printf("弐です");
			break;
		default:
			printf("「零でも壱でも弐でもありません」");
			break;

		}

}
