//#define _CRT_SECURE_NO_WARNINGS 1
//#include "contact.h"
////�����ϵ��
//void add_contact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("������绰:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("�������ַ:>");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("������QQ:>");
//		scanf("%s", pc->data[pc->sz].qq);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//
//		pc->sz++;
//		printf("��ӳɹ�\n");
//	}
//}
////չʾͨѶ¼
//void show_contact(Contact* pc)
//{
//	int i = 0;
//	printf("%5s %12s %10s %5d %12s %5s/n",
//		"����", "�绰", "��ַ", "����", "QQ", "�Ա�");
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
////��Ҫ���±�����˵
//static int find_peo_by_name(Contact* pc, char name)
//{
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(name, pc->data[i].name) == 0)
//		{
//			return i;//ɭ��lan
//		}
//	}
//	return -999999999999;//ɭ����
//}
////ɾ����ϵ��
//void del_contact(Contact* pc)
//{
//	if (pc->sz == 0)
//	{
//		printf("ɶ��û����ɾ��der\n");
//	}
//	else
//	{
//		char name[MAX_NAME] = { 0 };
//		printf("�����뱻ɾ���˵�����:>");
//		scanf("%s", name);
//		int pos = find_peo_by_name(pc,name);
//		if (pos == -666)
//		{
//			printf("û������ô��\n");
//		}
//		else
//		{
//			int j = 0;
//			for (j = pos; j < pc->sz - 1; j++)
//			{
//				pc->data[j] = pc->data[j++];
//			}
//			pc->sz--;
//			printf("ɾ���ɹ�\n");
//		}
//	}
//}
//
////������ϵ��
//void search_contact(Contact* pc)
//{
//	char name[MAX_NAME] = { 0 };
//	printf("��������ϵ������\n");//����ö����±���Ӧ��˵��Ҫɭ˭��
//	scanf("%s",name);
//	int pos = find_peo_by_name(pc, name);
//	if (pos == -1)
//	{
//		printf("���޴���\n");
//	}
//	else
//	{
//		printf("%5s %12s %10s %5d %12s %5s",
//			"����", "�绰", "��ַ", "����", "QQ", "�Ա�");
//			printf("%5s %12s %10s %5d %12s %5s\n",
//				pc->data[pos].name,
//				pc->data[pos].tele,
//				pc->data[pos].addr,
//				pc->data[pos].age,
//				pc->data[pos].qq,
//				pc->data[pos].sex);
//	}
//}
////�޸���ϵ��
//void modify_contact(Contact* pc)
//{
//	char name[MAX_NAME] = { 0 };
//	printf("��������Ҫ�޸ĵ���ϵ������\n");
//	scanf("%s", name);
//	int pos = find_peo_by_name(pc, name);
//	if (pos == -1)
//	{
//		printf("���޴���\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", pc->data[pos].name);
//		printf("������绰:>");
//		scanf("%s", pc->data[pos].tele);
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pos].sex);
//		printf("�������ַ:>");
//		scanf("%s", pc->data[pos].addr);
//		printf("������QQ:>");
//		scanf("%s", pc->data[pos].qq);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pos].age));
//	}
//}
////����ϵ������
//void sort_contact(Contact* pc)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < pc->sz - 1; i++)
//	{
//		for (j = 0; j < pc->sz - 1 - i; j++)//���д��j < pc->sz��ζ�Ź���������һ��
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