#include <stdio.h>
#include <string.h>
int main()
{
	char name[] = { "madam" };
	int l = 0;
	int h = strlen(name) - 1;
	while (h > l)
	 {
		if (name[l++] != name[h--])
		 {
			printf("%s is not a palindrome\n", name);
		return 0;	
		}
	}
	

	printf("%s is a palindrome\n", name);

	return 0;
}
