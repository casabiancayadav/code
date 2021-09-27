/*    A student is taking a cryptography class and has found anagrams to be very useful. Two strings are anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency. For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

The student decides on an encryption scheme that involves two large strings. The encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Determine this number.

Given two strings,
and , that may or may not be of the same length, determine the minimum number of character deletions required to make and

anagrams. Any characters can be deleted from either of the strings.

Example

Delete from and from so that the remaining strings are and which are anagrams. This takes character deletions. */



#include<stdio.h>
#include <string.h>

int main()
{
    int len1,len2,i,j,cnt=0;
    char s1[10000],s2[10000],*ptr=NULL;
    scanf("%s%s",s1,s2);

    len1=strlen(s1);
    len2=strlen(s2);

    for(i=0;i<len1;i++)
    {
            if( ! (ptr=memchr(s2,s1[i],len2)) )
                 cnt++;
            else
                  s1[i]=*ptr='\0';
    }
       for(i=0;i<len2;i++)
    {
            if(! (ptr=memchr(s1,s2[i],len1)) )
                 cnt++;
    }
    printf("%d",cnt);
}
