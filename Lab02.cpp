//1 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	double a1, b1, a3, b3,a2,b2;
//	cout << "������� ������� 1-�� �������������� \n";
//	cout << "a1 = "; cin >> a1;
//	cout << "b1 = "; cin >> b1;
//	cout << "������� ������� 2-�� �������������� \n";
//	cout << "a2 = "; cin >> a2;
//	cout << "b2 = "; cin >> b2;
//	cout << "������� ������� 3-�� �������������� \n";
//	cout << "a3 = "; cin >> a3;
//	cout << "b3 = "; cin >> b3;
//	double s1, s2, s3;
//	s1 = a1 * b1;
//	s2 = a2 * b2;
//	s3 = a3 * b3;
//	if (s1 == s2 && s2 == s3) // ������ If
//		cout << "������� �����.";
//	else if (s1 > s2 && s1 > s3)
//		cout << "Max ������� � ������� S= " << s1 << endl;
//	else if (s2 > s1 && s2 > s3)
//		cout << "Max ������� � ������� S= " << s2 << endl;
//	else 
//		cout << "Max ������� � �������� S= " << s3 << endl;
//	//������ ���. ���������� ���������
//	(s1 > s2 && s1 > s3) ? cout << "������� ������� �������������� ������ ������ S= " << s1 : (s2 > s1 && s2 > s3) ? cout << "������� ������� ������ ������ S= " << s2 : (s3 > s1 && s3 > s2) ? cout << "������� �������� ������ ������ S= " << s3 : cout << "������� �����";
//
//	cout << "Max ������� ����� = " << max((max(s1, s2)),s3); //������ Max
//
//	return 0;
//}


//2 �����. 
//����� a � �
//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int CH;
//	cout << "������� ����� �����: ";
//	cin >> CH;
//	if (CH < 0)
//		cout << "����� �������������.\n";
//	else if (CH > 0)
//		cout << "����� �������������.\n";
//	else
//		cout << "����� ����� ����.\n";
//	if (CH % 2 == 0) {
//		cout << "����� ������.";
//	}
//	else
//	{
//		cout << "����� ��������.";
//	}		
//}

//3 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    double x, vr, vr2;
//
//    cout << "������� �������������� ����� x = ";
//    if (!(cin >> x)) {
//        cout << "������: ������� �� �����!";
//        return 1;
//    }
//
//    vr = x * x + 4 * x + 5;
//    vr2 = x * x + 4 * x - 5;
//
//    if (x <= -2) 
//        cout << "f(x) = 0.";
//    
//    else if (x <= 10) 
//        cout << "f(x) = " << vr;
//    
//    else 
//         cout << "f(x) = " << 1.0 / vr2;
//        
//    
//
//    return 0;
//}

//4 �����.
//#include <iostream> 
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	int  dM, dW;
//	cout << "������� ����. \n";
//	cout << "���� ������: ";
//	cin >> dM;
//	cout << "����� ��� � ������: ";
//	cin >> dW;
//	if (13 == dM || 17 == dM)
//		if (5 == dW)
//			cout << "��������� ���� ";
//		else
//			if (2 == dW)
//				cout << "��������� ���� ";
//	return 0;
//}

//5 �����.a)
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c, r, z;
//	cout << "������� ������ �����: "; cin >> r;
//	cout << "������� ����� ����� ������� �������: "; cin >> a;
//	cout << "������� ����� ������ ������� �������: "; cin >> b;
//	cout << "������� ������ �������: "; cin >> c;
//	cout << "������� ������ �����: "; cin >> z;
//	if (r <= a / 2 && r <= b / 2 && c>z)
//		cout << "������� �������� ��� ����� �����.";
//	else
//		cout << "�������  �� �������� ��� ����� �����.";
//	return 0;
//
//}
////�����  �)
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int X, Y, Z, a, b;
//	cout << "������� ����� ������� X: "; cin >> X;
//	cout << "������� ������ ������� Y: "; cin >> Y;
//	cout << "������� ������ ������� Z: "; cin >> Z;
//	cout << "������� ����� ������� ��������� a: "; cin >> a; 
//	cout << "������� ����� ������� ��������� b: "; cin >> b;
//	if (X <= a && Y <= b)
//		cout << "������ ������� ����� ���������.";
//	else if (Y <= a && Z <= b)
//		cout << "������ ������� ����� ���������.";
//	else
//		cout << "������ �� ������� ����� ���������";
//	return 0;
//}


////6 �����. 
//#include <iostream> 
//using namespace std;
//int mainn()
//{
//    setlocale(0, "");
//    int x;  //���������� ��� �������� ������ 
//    cout << "������� ���� ������: ";
//    cin >> x;
//    //�������� �������������� ������ 
//    switch (x) {
//    case 5: cout << "�������"; break;
//    case 4: cout << "������"; break;
//    case 3: cout << "�����������������"; break;
//    case 2:
//    case 1: cout << "����� ";  break;
//    default: cout << "�������e ������";
//    }
//
//    return 0;
//}
// 7 �����.
//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(LC_ALL, "ru");
//    double a, b;
//    char vichi;
//
//    cout << "������� ������ �����: ";
//    cin >> a;
//    cout << "������� ������ �����: ";
//    cin >> b;
//    cout << "������� �������� (+, -, *): ";
//    cin >> vichi;
//
//    switch (vichi) {
//    case '+':
//        cout <<a << " + " <<b<< " = " <<a + b;
//        break;
//    case '-':
//        cout << a << " - " << b << " = " << a - b;
//        break;
//    case '*':
//        cout << a << " * " << b << " = " << a * b;
//        break;
//    default:
//        cout << "������";
//    }
//
//    return 0;
//}
//8 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double x, y, r;
//	cout << "������� ������ ��������� x � y. \n";
//	cout << "������� �������� x: "; cin >> x; 
//	cout << "������� �������� y: "; cin >> y;
//	r = pow((pow((x - 0), 2) + pow((y - 0), 2)), 0.5);
//	if (r <= 2 && r >= -2)
//		cout << "�� ������� 10 �����.";
//	else if (r > 2 && r <= 4)
//		cout << "�� ������� 5 �����.";
//	else
//		cout << "�� ������� 0 �����.";
//	return 0;
//}
//9 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int mainn() {
//	setlocale(LC_ALL, "RU");
//	double x, y, r;
//	cout << "������� ������ x � y. \n";
//	cout << "������� �������� x: "; cin >> x;
//	cout << "������� �������� y: "; cin >> y;
//	if ((x >= -2 && x <= 0) && (y <= 1 && y >= 0)) //����� �
//		cout << "����� ����������� ��������������� ��������������.\n";
//	else 
//		cout << "����� �� ����������� ��������������� ��������������.\n";
//	r = pow((pow((x - 0), 2) + pow((y - 0), 2)), 0.5);//����� �
//	if ((r >= 0 && r <=5) && y > 0)
//		cout << "����� ����������� ��������������� ���������.\n";
//	else 
//		cout << "����� �� ����������� ��������������� ���������.\n";
//
//	if ((r >= 3 && r <=6) && x>0) //����� �
//		cout << "����� ����������� �������������� ����.\n";
//	else
//		cout << "����� �� ����������� �������������� ����.\n";
//	if ((x > 0) && (y > 0) && (y < (-2*x+2))) //����� D
//		cout << "����� ����������� ��������������� ������������.";
//	else
//		cout << "����� �� ����������� ��������������� ������������.";
//
//	return 0;
//}
//10 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double x, y, z;
//	cout << "������� ������ x, y ,z. \n";
//	cout << "������� �������� x: "; cin >> x;
//	cout << "������� �������� y: "; cin >> y;
//	cout << "������� �������� z: "; cin >> z;
//	if ((x + y > z) && (x + z > y) && (z + y > x)) //����� �
//		cout << "����������� ����������.\n";
//	else
//		cout << "����������� �� �����������.";
//	if (((x == y) && (x == z)) && (z == y))
//		cout << "����������� ��������������.\n"; //����� �
//	else if ((x == y) || (x == z) || (z == y))
//		cout << "����������� ��������������.\n";
//	else if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (z * z + y * y == x * x))
//		cout << "����������� �������������.";
//
//	return 0;
//}
//11 �����.
//#include <iostream>
//#include <string>
//using namespace std;
//string skloneniev(int number) {
//	int poslc = number % 10;
//	int posltwoc = number % 100;
//	if ((posltwoc >= 11) && (posltwoc <= 19))
//		return "���";
//	switch (poslc) {
//	case 1: 
//		return "���"; break;
//	case 2:
//	case 3:
//	case 4:
//		return "����"; break;
//	default:
//		return "���"; break;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int DR, MR, GR, D, M, G, LET ;
//	cout << "������� ���� ������. \n";
//	cout << "������� ���� ��������. "; cin >> DR;
//	cout << "������� ����� ��������. "; cin >> MR;
//	cout << "������� ��� ��������. "; cin >> GR;
//	cout << "������� �������� ����. \n";
//	cout << "������� ����. "; cin >> D;
//	cout << "������� �����. "; cin >> M;
//	cout << "������� ���. "; cin >> G;
//	LET = G - GR;
//	if (M > MR)
//		cout << "��� " << LET << " " << skloneniev(LET);
//	else if (M < MR)
//		cout << "��� " << LET - 1 << " "<< skloneniev(LET);
//	else if ((MR == M) && (DR < D)) 
//		cout << "��� " << LET << " " << skloneniev(LET);
//	else if ((MR == M) && (DR > D))
//		cout << "���  " << LET - 1 << " " << skloneniev(LET);
//	else if ((MR == M) && (DR == D))
//		cout << "��� " << LET << " " << skloneniev(LET);
//	return 0;
//
//}
//12 �����.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c;
//	cout << "������� ������� ����� a: "; cin >> a;
//	cout << "������� ������� ����� b: "; cin >> b;
//	cout << "������� ������� ����� c: "; cin >> c;
//	int sumc = 0;     //����� �
//	if (a > 10)
//		sumc = sumc + a;
//	if (b > 10)
//		sumc = sumc + b;
//	if (c > 10)
//		sumc = sumc + c;
//	cout << "����� ����� >10 = " << sumc << endl;
//
//	int chet = 0; //����� �
//	if (a % 2 == 0)
//		chet++;
//	if (b % 2 == 0)
//		chet++;
//	if (c % 2 == 0)
//		chet++;
//	cout << "���������� ������ �����: " << chet << endl;
//	if ((a <= c && a >= b) || (a<=b && a >=c)) //����� �
//		cout << "������� ����� = " << a << endl;
//	else if ((c <= a && c >= b) || (c >= a && c <= b))
//		cout << "������� ����� = " << c << endl;
//	else
//		cout << "������� ����� = " << b << endl;
//	
//
//	int naim = min({ a, b, c }); //����� D
//	if (a <= b && a <= c) {
//		cout << "����� ����������� ����� 1.";
//	}
//	else if (b <= a && b <= c) {
//		cout << "����� ����������� ����� 2.";
//	}
//	else {
//		cout << "����� ����������� ����� 3.";
//	}
//	
//	return 0;
//}