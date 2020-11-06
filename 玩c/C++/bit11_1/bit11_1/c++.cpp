
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class CUBOID
{
public:
	CUBOID(int l = 0, int w = 0, int h = 0) :m_length(l), m_width(w), m_heigth(h)
	{
	}
	int Volume()
	{
		return(m_length*m_width*m_heigth);
	};
	int Area()
	{
		return(2 * (m_length*m_width + m_length*m_heigth + m_width*m_heigth));
	};
private:
	int m_length;
	int m_width;
	int m_heigth;
};
int main()
{
	int l, w, h;
	cin >> l >> w >> h;
	CUBOID box1(l, w, h);
	cout << box1.Volume() << endl;
	cout << box1.Area() << endl;
	cin >> l >> w >> h;
	CUBOID box2(l, w, h);
	cout << box2.Volume() << endl;
	cout << box2.Area() << endl;
	cin >> l >> w >> h;
	CUBOID box3(l, w, h);
	cout << box3.Volume() << endl;
	cout << box3.Area() << endl;
	return 0;
}