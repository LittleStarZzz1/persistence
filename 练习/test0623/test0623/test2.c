#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	double a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE* fp = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "wb");
	fwrite(a, sizeof(*a), 5, fp);	//Ð´ double µÄÊý×é

	fclose(fp);
	fp = NULL;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "rb");
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1){
		printf("%lf\n", b);
	}
	if (feof(fp)){
		printf("Error reading 2.txt:unexpected end of file\n");
	}
	else if (ferror(fp)){
		perror("Error reading 2.txt");
	}
	fclose(fp);
	fp = NULL;
	system("pause");
	return 0;
}