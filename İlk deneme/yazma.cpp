#include<stdio.h>
#include <stdlib.h>

int main(void){
	int hesapno;
	char ad[30];
	int bakiye;
	FILE*myPtr;
	if((myPtr=fopen("myfile.txt","a+"))==NULL)
	printf("Dosya acilamadi\n");
	else
	{
		printf("Hesap no,isim ve bakiye giriniz\n");
		printf("veri girisini bitirmek icin EOF gir(EOF=ctrl+z)\n");
		scanf("%d %s %d",&hesapno,ad,&bakiye);
	
	while(!feof(stdin))
	{
		fprintf(myPtr,"%d %s %d\n",hesapno,ad,bakiye);
		scanf("%d %s %s\n\n",&hesapno,ad,&bakiye);
	}
	fclose(myPtr);	
	
}
	return 0;
}
