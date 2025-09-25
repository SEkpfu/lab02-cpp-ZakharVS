// 1 Номер. 
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int num;
//	double znach, r1, r2, s, a;
//	cout << "Введите номер одного из элементов.\n 1 - Сторона a. \n 2 - Радиус R1 вписанной окружности. \n 3 - Радиус R2 описанной окружности. \n 4 - Площадь S. \n";
//	cin >> num;
//	cout << "Введите значение: ";
//	cin >> znach;
//
//	switch (num) {
//	case 1:
//		a = znach;
//		r1 = pow(a, 3) / 6;
//		r2 = 2 * r1;
//		s = a * a * 3;
//		cout << "a = " << znach << endl << "r1 = " << r1 << endl << "r2 = " << r2 << endl << "s = " << s; break;
//	case 2:
//		r1 = znach;
//		r2 = 2 * r1;
//		a = cbrt(r1 * 6);
//		s = a * a * 3;
//		cout << "a = " << a << endl << "r1 = " << r1 << endl << "r2 = " << r2 << endl << "s = " << s; break;
//	case 3:
//		r2 = znach;
//		r1 = r2 / 2;
//		a = cbrt(r1 * 6);
//		s = a * a * 3;
//		cout << "a = " << a << endl << "r1 = " << r1 << endl << "r2 = " << r2 << endl << "s = " << s; break;
//	case 4:
//		s = znach;
//		a = sqrt(s / 3);
//		r1 = pow(a, 3) / 6;
//		r2 = 2 * r1;
//		cout << "a = " << a << endl << "r1 = " << r1 << endl << "r2 = " << r2 << endl << "s = " << s; break;
//	default:
//		cout << "ошибка";
//	}
//	return 0;
//}
// 
//2 Номер.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double z, w;
//	cout << "enter w: "; cin >> w;
//	if (w <= 3)
//		z = fabs(w * w - 1) / (2 * w - 7);
//	else if (3 < w && w < 4)
//		z = 1000;
//	else
//		z = 1 + sqrt(w + (1 / (2 * w)));
//	
//	cout << "z = " << z;
//	return 0;
//}
// 3 номер
// //#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int x, y;
//	cout << "Введите координаты точки.";
//	cout << "Введите значение X: ";
//	cin >> x;
//	cout << "Введите значение Y: ";
//	cin >> y;
//	double r;
//	r = sqrt(x * x + y * y);
//	if (x < 0 && y < 0) {
//		if (r <= 10)
//			cout << "Точка попала в заштрихованную область.";
//	}
//	else if (x >= 0 && y <= -5 ) {
//		if (r <= 10)
//			cout << " Точка попала в заштрихованную область.";
//
//	}
//	else if (y>=0 && x <= 0 && y <= x+ 10)
//		cout << " Точка попала в заштрихованную область.";
//	else 
//		cout << " Точка не попала в заштрихованную область.";
//	return 0;
//
//}
//4 номер.
//#include <iostream>
//#include<string>
//using namespace std;
//string sclonenie(int number);
//int main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	cout << "Введите кол-во мух: "; cin >> n;
//	cout << "Портяншка убил " << n<< " " << sclonenie(n);
//	return 0;
//}
//string sclonenie(int number) {
//	 int pervic = number % 10;
//	 int dvecifri = number % 100;
//	 if (dvecifri > 10 && dvecifri < 19)
//		 return "мух.";
//	 switch (pervic) {
//	 case 1:
//		 return "муху."; break;
//	 case 2:
//	 case 3: 
//	 case 4:
//		 return "мухи."; break;
//	 default:
//		 return "мух."; break;
//	 }
//}
