#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a1, b1, a2, b2, a3, b3;
	cout << "������� ������� 1-�� �������������� \n";
	cout << "a1= "; cin >> a1;
	cout << "b1= "; cin >> b1;
	cout << "������� ������� 2-�� �������������� \n";
	cout << "a2= "; cin >> a2;
	cout << "b2= "; cin >> b2;
	cout << "������� ������� 3-�� �������������� \n";
	cout << "a3= "; cin >> a3;
	cout << "b3= "; cin >> b3;
	double s1, s2, s3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;
	cout << "max s= " << max(s1, s2, s3);
	return 0;
}

//#include <iostream> �1
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	double a1, b1, a2, b2, a3, b3;
//	cout << "������� ������� 1-�� �������������� \n";
//	cout << "a1= "; cin >> a1;
//	cout << "b1= "; cin >> b1;
//	cout << "������� ������� 2-�� �������������� \n";
//	cout << "a2= "; cin >> a2;
//	cout << "b2= "; cin >> b2;
//	cout << "������� ������� 3-�� �������������� \n";
//	cout << "a3= "; cin >> a3;
//	cout << "b3= "; cin >> b3;
//	double s1, s2, s3;
//	s1 = a1 * b1;
//	s2 = a2 * b2;
//	s3 = a3 * b3;
//	if (s1 > s2 and s1 > s3)
//		cout << "max ������� � �������, S= " << s1;
//	if (s2 > s1 and s2 > s3)
//		cout << "max ������� � �������, S= " << s2;
//	if (s3 > s1 and s3 > s2)
//		cout << "max ������� � ��������, S= " << s3;
//
//	return 0;
//}

//#include <iostream> �
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	double a1, b1, a2, b2;
//	cout << "������� ������� 1-�� �������������� \n";
//	cout << "a1= "; cin >> a1;
//	cout << "b1= "; cin >> b1;
//	cout << "������� ������� 2-�� �������������� \n";
//	cout << "a2= "; cin >> a2;
//	cout << "b2= "; cin >> b2;
//
//	double s1, s2;
//	s1 = a1 * b1;
//	s2 = a2 * b2;
//	if (s1 > s2)
//		cout << "max ������� � �������, S= " << s1;
//	if (s1 < s2)
//		cout << "max ������� � �������, S= " << s2;
//	if (s1 == s2)
//		cout << "������� �����";
//
//	return 0;
//}

