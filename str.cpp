#include<cstdio>
#include<iostream>
char *my_strcpy(char *, const char *);
void *my_memcpy(void *, const void *, size_t);
char* my_strcat(char*, const char *);
int my_strcmp(const char*, const char*);

char *returnStr()

{
	static char  p[] = "tigerjibo";
	return  p;
}

int  main()

{

	const char  *str;
	str = returnStr();
	
	char *a= new char[1];
	my_strcpy(a, "abcdefghij");
	my_memcpy(a, "123456", 5);
	my_strcat(a, "hello");

	printf("%s  %s\n", str, a);
	printf("%d", strcmp("abcdddd", "abcca"));

}

char *my_strcpy(char *dest, const char *src) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	char *strDest = dest;
	while ((*strDest++ = *src++) != '\0');
	return strDest;
}

void *my_memcpy(void *dest, const void *src, size_t n) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	char* tempD = (char*)dest;
	const char* tempS = (char*)src;

	if (dest > (tempS + n) || dest > src) {
		while (n-- ) {
		*tempD++ = *tempS++;
		}
	}
	else {		/*overlap时从高地址向低地址copy*/  
		tempD = (char*)dest + n - 1;
		tempS = (char*)src + n - 1;
		while (n--) {
			*tempD-- = *tempS--;
		}
	}
	return dest;
}

char* my_strcat(char* dest, const char* src) {
	char* tempD = dest;
	while (*dest != '\0') dest++;
	while (*dest++ = *src++);
	return tempD;
}

int my_strcmp(const char*s1, const char*s2) {
	for (; *s1 == *s2; ++s1, ++s2) {
		if (*s1 == '\0') return (0);
	}
	return ((*(unsigned char*)s1 < *(unsigned char*)s2) ? -1 : +1);
}
