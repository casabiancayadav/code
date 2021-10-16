/* You are given a string containing characters A and B
only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB


Sample Output
4
0
0
4

AAAA-->A_AAA(3)
BBBBB-->B_BBBB(4)
ABABABAB-->(0)
BABABA-->(0)
AAABBB-->A_AA   B_BB         (2+2=4)
*/


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,j,num,len,cnt=0;

    scanf("%d",&num);
    char str[num][100002];
    for(i=0;i<num;i++)
        scanf("%s",&str[i]);

for(i=0;i<num;i++)
{
    cnt=0;
    len=strlen(str[i]);
    for(j=0;j<=len-2;j++)
        {
        if(str[i][j] == str[i][j+1])
        cnt++;
        }
  printf("%d\n",cnt);
}
}

