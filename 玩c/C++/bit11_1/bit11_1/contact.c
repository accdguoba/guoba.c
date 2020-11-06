//#define _CRT_SECURE_NO_WARNINGS 1
//#include "contact.h"
////添加联系人
//void add_contact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满\n");
//	}
//	else
//	{
//		printf("请输入姓名:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("请输入电话:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("请输入性别:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("请输入地址:>");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("请输入QQ:>");
//		scanf("%s", pc->data[pc->sz].qq);
//		printf("请输入年龄:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//
//		pc->sz++;
//		printf("添加成功\n");
//	}
//}
////展示通讯录
//void show_contact(Contact* pc)
//{
//	int i = 0;
//	printf("%5s %12s %10s %5d %12s %5s/n",
//		"姓名", "电话", "地址", "年龄", "QQ", "性别");
//	for (i = 0; i < pc->sz; i++)
//	{
//		printf("%5s %12s %10s %5d %12s %5s\n",
//			pc->data[i].name,
//			pc->data[i].tele,
//			pc->data[i].addr,
//			pc->data[i].age,
//			pc->data[i].qq,
//			pc->data[i].sex);
//	}
//}
////我要用陕北话来说
//static int find_peo_by_name(Contact* pc, char name)
//{
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(name, pc->data[i].name) == 0)
//		{
//			return i;//森上lan
//		}
//	}
//	return -999999999999;//森不上
//}
////删除联系人
//void del_contact(Contact* pc)
//{
//	if (pc->sz == 0)
//	{
//		printf("啥都没有你删个der\n");
//	}
//	else
//	{
//		char name[MAX_NAME] = { 0 };
//		printf("请输入被删除人的姓名:>");
//		scanf("%s", name);
//		int pos = find_peo_by_name(pc,name);
//		if (pos == -666)
//		{
//			printf("没人我怎么找\n");
//		}
//		else
//		{
//			int j = 0;
//			for (j = pos; j < pc->sz - 1; j++)
//			{
//				pc->data[j] = pc->data[j++];
//			}
//			pc->sz--;
//			printf("删除成功\n");
//		}
//	}
//}
//
////查找联系人
//void search_contact(Contact* pc)
//{
//	char name[MAX_NAME] = { 0 };
//	printf("请输入联系人姓名\n");//如果用额们陕北话应该说你要森谁了
//	scanf("%s",name);
//	int pos = find_peo_by_name(pc, name);
//	if (pos == -1)
//	{
//		printf("查无此人\n");
//	}
//	else
//	{
//		printf("%5s %12s %10s %5d %12s %5s",
//			"姓名", "电话", "地址", "年龄", "QQ", "性别");
//			printf("%5s %12s %10s %5d %12s %5s\n",
//				pc->data[pos].name,
//				pc->data[pos].tele,
//				pc->data[pos].addr,
//				pc->data[pos].age,
//				pc->data[pos].qq,
//				pc->data[pos].sex);
//	}
//}
////修改联系人
//void modify_contact(Contact* pc)
//{
//	char name[MAX_NAME] = { 0 };
//	printf("请输入需要修改的联系人姓名\n");
//	scanf("%s", name);
//	int pos = find_peo_by_name(pc, name);
//	if (pos == -1)
//	{
//		printf("查无此人\n");
//	}
//	else
//	{
//		printf("请输入姓名:>");
//		scanf("%s", pc->data[pos].name);
//		printf("请输入电话:>");
//		scanf("%s", pc->data[pos].tele);
//		printf("请输入性别:>");
//		scanf("%s", pc->data[pos].sex);
//		printf("请输入地址:>");
//		scanf("%s", pc->data[pos].addr);
//		printf("请输入QQ:>");
//		scanf("%s", pc->data[pos].qq);
//		printf("请输入年龄:>");
//		scanf("%d", &(pc->data[pos].age));
//	}
//}
////给联系人排序
//void sort_contact(Contact* pc)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < pc->sz - 1; i++)
//	{
//		for (j = 0; j < pc->sz - 1 - i; j++)//如果写成j < pc->sz意味着工作量增加一倍
//		{
//			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
//			{
//				PeoInfo tmp = pc->data[j];
//				pc->data[j] = pc->data[j + 1];
//				pc->data[j + 1] = tmp;
//			}
//		}
//	}
//}