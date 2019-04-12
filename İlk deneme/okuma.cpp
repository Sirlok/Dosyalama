#include<stdio.h>

int main(void){
	int hesapno;
	char ad[30];
	int bakiye;
	FILE*myPtr;
	if((myPtr=fopen("myfile.txt","r"))==NULL)
	printf("Dosya acilamadi\n");
	else
	{
		printf("%-10s%-13s%s\n","HesapNo","Ad","Bakiye");
		fscanf(myPtr,"%d %s %d",&hesapno,ad,&bakiye);
	
	while(!feof(myPtr))
	{
		printf("%-10d %-13s %-10d\n",hesapno,ad,bakiye);
		fscanf(myPtr,"%d %s %d",&hesapno,ad,&bakiye);
	}
	fclose(myPtr);	
	
}
	return 0;
}
