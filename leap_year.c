#include<stdio.h>

int main (){

	int year;

	printf("うるう年かどうかを調べます\n");
	printf("西暦(1900年〜2100年)を入力してください>>");
	scanf("%d",&year);
	if(year <= 2100 && year >= 1900){
		if(year %400 ==0 ||(year%4==0 && year%100!=0)){

			printf("%d年はうるう年です。",year);
			}else{
			printf("%d年はうるう年ではありません。",year);
		}
	}
}
