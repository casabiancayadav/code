#include<stdio.h>
#include<string.h>

void insert(char *s1, char *s2, int pos)
{
	int len1,len2;
	len1=strlen(s1);
	len2=strlen(s2);
	memmove(s1+pos+len2,s1+pos,len1-pos+1);
	memmove(s1+pos,s2,len2);
}
int main()
{
	char s1[50],s2[50];
	int len1,len2,pos;
	printf("ENTER S1 and S2  AND position\n");
	scanf("%s%s",s1,s2);
	scanf("%d",&pos);

	insert(s1,s2,pos);
	printf("%s",s1);
}
