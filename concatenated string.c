#include<stdio.h>
#include<string.h>

int main() {
	char str1[]="rey",str2[]=" mysterio";
	char str3[20];
	int res = strcmp(str1, str2);
    if (res == 0) 
        printf("s1 and s2 are same\n");
  	else if (res < 0)
      	printf("s1 is smaller than s2\n");
  	else
      	printf("s1 is greater than s2\n");
	printf(strcat(str1,str2));
	printf("  %zu   ", strlen(str2));
	printf("%s\n",str3);
	return 0;
	}
