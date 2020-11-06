#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//Rctangle ：长方形
//class Rectangle 
//{
//private:
//	double m_length;
//	double m_width;
//	double m_heigth;
//public:
//	Rectangle(double = 10, double = 10, double = 10);
//	double volume();
//	double showVolume()
//	{
//		double Volume = heigth*width*length;
//		return Volume;
//	}
//};
//Rectangle::Rectangle(double length, double width, double heigth)
//{
//	;
//}
//double Rectangle::volume()
//{
//	return(heigth*width*length);
//}
//
//int main() 
//{
//	Rectangle R[3];
//	int i;
//	for (i = 0; i < 3; i++) 
//	{
//		cout << "请输入第" << i + 1 << "个长方体的长宽高" << endl;;
//		R[i].;
//	}
//	for (i = 0; i < 3; i++) 
//	{
//		cout << "第" << i + 1 << "个长方体的体积为：";
//		cout << R[i].showVolume() << endl;;
//	}
//	return 0;
//}
class Rectangle
{
private:
	double m_length;
	double m_width;
	double m_heigth;
public:
	Rectangle(double l = 10, double w = 10, double h = 10) :m_length(l), m_width(w), m_heigth(h)
	{
	}
	double Area(){ return (m_length*m_width + m_length*m_heigth + m_heigth*m_width) * 2; }
	double Volume(){ return m_heigth*m_width*m_length; }
};
void main()
{
	int l, w, h;
	cin >> l >> w >> h;
	Rectangle a(l, w, h);
	cout << a.Area();
	cout<< a.Volume();

}