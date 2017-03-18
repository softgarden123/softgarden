/*
 ============================================================================
 Name        : define.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ADD 0
#define SUB 1
#define MUL 2
#define DIVI 3

int keisan(int x,int y,int z)
{
	int kekka;
	switch(z){
	case 0:
		kekka = x + y;
		break;
	case 1:
		kekka = x - y;
		break;
	case 2:
		kekka = x * y;
		break;
	case 3:
		kekka = x / y;
		break;
	}
	return kekka;

}

int main(void) {
	int x = keisan(2,2,DIVI);

	printf("計算結果は%dです",x);
	return EXIT_SUCCESS;
}
