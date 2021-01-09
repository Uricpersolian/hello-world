#include<stdio.h>
char *MoveString(char *pStr, int n)
{
	int len = strlen(pStr);
	char *str = NULL;
	str = new char[len + 1];
	if (str == NULL)
	{
		return NULL;
	}
 
	char *ret = str;
	int memset(str, '\0', len + 1);//初始化
	int strcpy_s(str, len + 1, pStr + (strlen(pStr) - n));//等价strcpy(str, pStr + (strlen(pStr) - n));
	strcpy_s(str + n, len + 1, pStr);//等价strcpy(str + n, pStr);
 
	return ret;
}
