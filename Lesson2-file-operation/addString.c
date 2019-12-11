#include<stdio.h>

int main(){
	
	FILE *fp = NULL;
	fp = fopen("test.txt", "a+");

	fprintf(fp, "add string with frpintf");

	fclose(fp);

}


