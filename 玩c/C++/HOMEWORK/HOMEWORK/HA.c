#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void leftRound(char * src, int time)
//{
//	int x, y, z;
//	int len = strlen(src);
//	time %= len; 
//	for (x = 0; x< time; x++) 
//	{
//		z = src[0];
//		for (y = 0; y < len - 1; y++)
//		{
//			src[y] = src[y + 1];
//		}
//		src[y] = z;
//	}
//}
//void leftRound(char * src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
//	for (i = 0; i < time; i++) //执行k次的单次平移
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //单次平移
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//void leftRound(char * src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //断开位置的下标
//	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
//
//	strcpy(tmp, src + pos); //先将后面的全部拷过来
//	strncat(tmp, src, pos); //然后将前面几个接上
//	strcpy(src, tmp); //最后拷回去
//}
//void my_qsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
//{
//	int i, j;
//	char * st = (char *)base; 
//	char tmp[16];
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) 
//		{
//			if (compar(st + j * size, st + (j + 1) * size))
//			{
//				memcpy(tmp, st + j * size, size); 
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//void left_move(int arr[], int t)
//{
//	int x = 0;
//	int len = strlen(arr);
//	for (x = 0; x < t; x++)
//	{
//		char tmp = arr[0];
//		int y = 0;
//		for (y = 0; y < len - 1; y++)
//		{
//			arr[y] = arr[y + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "1234";
//	int t = 0;
//	scanf("%d", &t);
//	printf("%s\n", arr);
//	return 0;
//}
int my_strcmp(const char * src, const char * dest)
{
	int ret = 0;
	assert(src != NULL);
	assert(dest != NULL);
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dest) && *dest)
	{
		++src, ++dest;
	}
		{
			if (ret < 0)
				ret = -1;
			else if (ret > 0)
				ret = 1;
			return(ret);
		}
		return 0;
}