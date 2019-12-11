#include<stdio.h> 

int main(){
	FILE *fp = NULL;
	fp = fopen("./test.txt","w+");
	fprintf(fp, "This is a test for fprintf....\n");
	fprintf(fp, "Test, Hello C!\n");
	fputs("This is a test for fputs...\n", fp);
	fclose(fp);
}


