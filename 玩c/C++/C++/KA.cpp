#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//class date
//{
//public:
//	date(int Y = 0, int M = 0, int D = 0) :year(Y), month(M), day(D)
//	{
//	}
//	void print();
//private:
//	int year;
//	int month;
//	int day;
//};
//class student
//{
//public:
//	student(int num = 0, char* name = new char[20], char sex = 'M', int Y = 0, int M = 0, int D = 0) :s_num(num), s_sex(sex), s_brithday(Y, M, D)
//	{
//		s_name = new char[20];
//		for (int i = 0; i < 20; i++)
//		{
//			s_name[i] = name[i];
//		}
//
//	}
//	~student()
//	{
//		delete s_name;
//		s_name = NULL;
//	}
//	void print();
//private:
//	int s_num;
//	char* s_name;
//	char s_sex;
//	date s_brithday;
//};
//void date::print()
//{
//	cout << "brithday  " << year << "." << month << "." << day << endl;
//}
//void student::print()
//{
//	cout << "age = " << s_num << endl;
//	cout << "sex = " << s_sex << endl;
//	cout << "name = " << s_name << endl;
//	s_brithday.print();
//}
//int main()
//{
//	int num, year, month, day;
//	char name[20];
//	char sex;
//	cout << "enter age, name, sex, brithday( year, month, day)" << endl;
//	cin >> num >> name >> sex >> year >> month >> day;
//	student S(num, name, sex, year, month, day);
//	S.print();
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include<string>
//class Date
//{
//public:
//	Date(int y = 0, int m = 0, int d = 0) :m_y(y), m_m(m), m_d(d)
//	{
//	}
//	void Print()
//	{
//		cout << m_y << " " << m_m << " " << m_d << endl;
//	}
//private:
//	int m_y;
//	int m_m;
//	int m_d;
//};
//class Student
//{
//public:
//	Student(int n = 0, char*name = "", char sex = 'm', int y = 0, int m = 0, int d = 0) :m_num(n), m_sex(sex), m_b(y, m, d)
//	{
//		m_name = new char[strlen(name) + 1];
//		strcpy_s(m_name, strlen(name) + 1, name);
//	}
//	~Student()
//	{
//		if (m_name != NULL)
//		{
//			delete[]m_name;
//			m_name = NULL;
//		}
//	}
//	void Print()
//	{
//		cout << m_num << " " << m_name << " " << m_sex << endl;
//		m_b.Print();
//	}
//private:
//	int m_num;
//	char*m_name;
//	char m_sex;
//	Date m_b;
//};
//void main()
//{
//	Student s(1, "ÀîÈý", 'm', 2020, 1, 1);
//	s.Print();
//}
