//1 НОМЕР.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	double a1, b1, a3, b3,a2,b2;
//	cout << "Введите стороны 1-го прямоугольника \n";
//	cout << "a1 = "; cin >> a1;
//	cout << "b1 = "; cin >> b1;
//	cout << "Введите стороны 2-го прямоугольника \n";
//	cout << "a2 = "; cin >> a2;
//	cout << "b2 = "; cin >> b2;
//	cout << "Введите стороны 3-го прямоугольника \n";
//	cout << "a3 = "; cin >> a3;
//	cout << "b3 = "; cin >> b3;
//	double s1, s2, s3;
//	s1 = a1 * b1;
//	s2 = a2 * b2;
//	s3 = a3 * b3;
//	if (s1 == s2 && s2 == s3) // Способ If
//		cout << "Площади равны.";
//	else if (s1 > s2 && s1 > s3)
//		cout << "Max площадь у первого S= " << s1 << endl;
//	else if (s2 > s1 && s2 > s3)
//		cout << "Max площадь у второго S= " << s2 << endl;
//	else 
//		cout << "Max площадь у третьего S= " << s3 << endl;
//	//способ исп. тернарного оператора
//	(s1 > s2 && s1 > s3) ? cout << "Площадь первого прямоугольника больше других S= " << s1 : (s2 > s1 && s2 > s3) ? cout << "Площадь второго больше других S= " << s2 : (s3 > s1 && s3 > s2) ? cout << "Площадь третьего больше других S= " << s3 : cout << "Площади равны";
//
//	cout << "Max площадь равна = " << max((max(s1, s2)),s3); //Способ Max
//
//	return 0;
//}


//2 НОМЕР. 
//Пункт a и б
//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int CH;
//	cout << "Введите любое число: ";
//	cin >> CH;
//	if (CH < 0)
//		cout << "Число отрицательное.\n";
//	else if (CH > 0)
//		cout << "Число положительное.\n";
//	else
//		cout << "Число равно нулю.\n";
//	if (CH % 2 == 0) {
//		cout << "Число четное.";
//	}
//	else
//	{
//		cout << "Число нечетное.";
//	}		
//}

//3 НОМЕР.
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    double x, vr, vr2;
//
//    cout << "Введите действительное число x = ";
//    if (!(cin >> x)) {
//        cout << "Ошибка: введено не число!";
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

//4 НОМЕР.
//#include <iostream> 
//using namespace std;
//int main()
//{
//	setlocale(0, "");
//	int  dM, dW;
//	cout << "Введите дату. \n";
//	cout << "День месяца: ";
//	cin >> dM;
//	cout << "Номер дня в неделе: ";
//	cin >> dW;
//	if (13 == dM || 17 == dM)
//		if (5 == dW)
//			cout << "неудачный день ";
//		else
//			if (2 == dW)
//				cout << "неудачный день ";
//	return 0;
//}

//5 НОМЕР.a)
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c, r, z;
//	cout << "Введите радиус торта: "; cin >> r;
//	cout << "Введите длину одной стороны коробки: "; cin >> a;
//	cout << "Введите длину другой стороны коробки: "; cin >> b;
//	cout << "Введите высоту коробки: "; cin >> c;
//	cout << "Введите высоту торта: "; cin >> z;
//	if (r <= a / 2 && r <= b / 2 && c>z)
//		cout << "Коробка подходит для этого торта.";
//	else
//		cout << "Коробка  не подходит для этого торта.";
//	return 0;
//
//}
////Пункт  б)
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int X, Y, Z, a, b;
//	cout << "Введите длину стороны X: "; cin >> X;
//	cout << "Введите ширину стороны Y: "; cin >> Y;
//	cout << "Введите высоту стороны Z: "; cin >> Z;
//	cout << "Введите длину стороны отверстия a: "; cin >> a; 
//	cout << "Введите длину стороны отверстия b: "; cin >> b;
//	if (X <= a && Y <= b)
//		cout << "Кирпич пройдет через отверстие.";
//	else if (Y <= a && Z <= b)
//		cout << "Кирпич пройдет через отверстие.";
//	else
//		cout << "Кирпич не пройдет через отверстие";
//	return 0;
//}


////6 номер. 
//#include <iostream> 
//using namespace std;
//int mainn()
//{
//    setlocale(0, "");
//    int x;  //переменная для хранения оценки 
//    cout << "введите свою оценку: ";
//    cin >> x;
//    //оператор множественного выбора 
//    switch (x) {
//    case 5: cout << "отлично"; break;
//    case 4: cout << "хорошо"; break;
//    case 3: cout << "удовлетворительно"; break;
//    case 2:
//    case 1: cout << "плохо ";  break;
//    default: cout << "неверныe данные";
//    }
//
//    return 0;
//}
// 7 номер.
//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(LC_ALL, "ru");
//    double a, b;
//    char vichi;
//
//    cout << "Введите первое число: ";
//    cin >> a;
//    cout << "Введите второе число: ";
//    cin >> b;
//    cout << "Введите операцию (+, -, *): ";
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
//        cout << "Ошибка";
//    }
//
//    return 0;
//}
//8 номер.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double x, y, r;
//	cout << "Введите данные попадания x и y. \n";
//	cout << "Введите значение x: "; cin >> x; 
//	cout << "Введите значение y: "; cin >> y;
//	r = pow((pow((x - 0), 2) + pow((y - 0), 2)), 0.5);
//	if (r <= 2 && r >= -2)
//		cout << "Вы набрали 10 очков.";
//	else if (r > 2 && r <= 4)
//		cout << "Вы набрали 5 очков.";
//	else
//		cout << "Вы набрали 0 очков.";
//	return 0;
//}
//9 НОМЕР.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int mainn() {
//	setlocale(LC_ALL, "RU");
//	double x, y, r;
//	cout << "Введите данные x и y. \n";
//	cout << "Введите значение x: "; cin >> x;
//	cout << "Введите значение y: "; cin >> y;
//	if ((x >= -2 && x <= 0) && (y <= 1 && y >= 0)) //Пункт А
//		cout << "Точка принадлежит заштрихованному прямоугольнику.\n";
//	else 
//		cout << "Точка не принадлежит заштрихованному прямоугольнику.\n";
//	r = pow((pow((x - 0), 2) + pow((y - 0), 2)), 0.5);//Пункт Б
//	if ((r >= 0 && r <=5) && y > 0)
//		cout << "Точка принадлежит заштрихованному полукругу.\n";
//	else 
//		cout << "Точка не принадлежит заштрихованному полукругу.\n";
//
//	if ((r >= 3 && r <=6) && x>0) //Пункт С
//		cout << "Точка принадлежит заштрихованной дуге.\n";
//	else
//		cout << "Точка не принадлежит заштрихованной дуге.\n";
//	if ((x > 0) && (y > 0) && (y < (-2*x+2))) //Пункт D
//		cout << "Точка принадлежит заштрихованному треугольнику.";
//	else
//		cout << "Точка не принадлежит заштрихованному треугольнику.";
//
//	return 0;
//}
//10 номер.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	double x, y, z;
//	cout << "Введите данные x, y ,z. \n";
//	cout << "Введите значение x: "; cin >> x;
//	cout << "Введите значение y: "; cin >> y;
//	cout << "Введите значение z: "; cin >> z;
//	if ((x + y > z) && (x + z > y) && (z + y > x)) //Пункт А
//		cout << "Треугольник существует.\n";
//	else
//		cout << "Треугольник не сущевствует.";
//	if (((x == y) && (x == z)) && (z == y))
//		cout << "Треугольник равносторонний.\n"; //Пункт Б
//	else if ((x == y) || (x == z) || (z == y))
//		cout << "Треугольник равнобедренный.\n";
//	else if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (z * z + y * y == x * x))
//		cout << "Треугольник прямоугольный.";
//
//	return 0;
//}
//11 номер.
//#include <iostream>
//#include <string>
//using namespace std;
//string skloneniev(int number) {
//	int poslc = number % 10;
//	int posltwoc = number % 100;
//	if ((posltwoc >= 11) && (posltwoc <= 19))
//		return "лет";
//	switch (poslc) {
//	case 1: 
//		return "год"; break;
//	case 2:
//	case 3:
//	case 4:
//		return "года"; break;
//	default:
//		return "лет"; break;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int DR, MR, GR, D, M, G, LET ;
//	cout << "Введите свои данные. \n";
//	cout << "Введите день рождения. "; cin >> DR;
//	cout << "Введите месяц рождения. "; cin >> MR;
//	cout << "Введите год рождения. "; cin >> GR;
//	cout << "Введите нынещнюю дату. \n";
//	cout << "Введите день. "; cin >> D;
//	cout << "Введите месяц. "; cin >> M;
//	cout << "Введите год. "; cin >> G;
//	LET = G - GR;
//	if (M > MR)
//		cout << "Вам " << LET << " " << skloneniev(LET);
//	else if (M < MR)
//		cout << "Вам " << LET - 1 << " "<< skloneniev(LET);
//	else if ((MR == M) && (DR < D)) 
//		cout << "Вам " << LET << " " << skloneniev(LET);
//	else if ((MR == M) && (DR > D))
//		cout << "Вам  " << LET - 1 << " " << skloneniev(LET);
//	else if ((MR == M) && (DR == D))
//		cout << "Вам " << LET << " " << skloneniev(LET);
//	return 0;
//
//}
//12 номер.
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c;
//	cout << "Введите значени числа a: "; cin >> a;
//	cout << "Введите значени числа b: "; cin >> b;
//	cout << "Введите значени числа c: "; cin >> c;
//	int sumc = 0;     //Пункт а
//	if (a > 10)
//		sumc = sumc + a;
//	if (b > 10)
//		sumc = sumc + b;
//	if (c > 10)
//		sumc = sumc + c;
//	cout << "Сумма чисел >10 = " << sumc << endl;
//
//	int chet = 0; //Пункт Б
//	if (a % 2 == 0)
//		chet++;
//	if (b % 2 == 0)
//		chet++;
//	if (c % 2 == 0)
//		chet++;
//	cout << "Количество четных чисел: " << chet << endl;
//	if ((a <= c && a >= b) || (a<=b && a >=c)) //Пункт С
//		cout << "Среднее число = " << a << endl;
//	else if ((c <= a && c >= b) || (c >= a && c <= b))
//		cout << "Среднее число = " << c << endl;
//	else
//		cout << "Среднее число = " << b << endl;
//	
//
//	int naim = min({ a, b, c }); //Пункт D
//	if (a <= b && a <= c) {
//		cout << "Номер наименьшего равен 1.";
//	}
//	else if (b <= a && b <= c) {
//		cout << "Номер наименьшего равен 2.";
//	}
//	else {
//		cout << "Номер наименьшего равен 3.";
//	}
//	
//	return 0;
//}