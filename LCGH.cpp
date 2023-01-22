// LCGH.cpp

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	cout << "\tЗадание 1";
	char x;
	cout << "\nВведите символ : ";
	cin >> x;
	if (x >= 48 && x <= 57) {
		cout << "\nВы ввели цифру! " << endl;
	}
	else if (x >= 65 && x <= 90) {
		cout << "\nВы ввели букву англиского алфавита верхнего регистра!" << endl;
	}
	else if (x >= 97 && x <= 122) {
		cout << "\nВы ввели букву англиского алфавита нижнего регистра !" << endl;
	}
	else if (x == '.' || x == ',' || x == '"' || x == '!' || x == ':' || x == ';') {
		cout << "\nВы ввели знаки препинание!" << endl;
	}
	else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%') {
		cout << "\nВы ввели математическую аперацию!" << endl;
	}
	else
		cout << "\nПроизошла ошибка !!!" << endl;
	cout << "\n";
	cout << "\n\tЗадание2";
	float cost;
	cout << "\nВведите стоимость разговора : ";
	cin >> cost;
	char oper;
	cout << "\n1-МTS-MTS";
	cout << "\n2-MTS-LIFE";
	cout << "\n3-MTS-KIEVSTAR";
	cout << "\n4-LIFE-LIFE";
	cout << "\n5-LIFE-MTS";
	cout << "\n6-LIFE-KIEVSTAR";
	cout << "\n7-KIEVSTAR-KIEVSTAR";
	cout << "\n8-KIEVSTAR-MTS";
	cout << "\n9-KIEVSTAR-LIFE";
	cout << "\nВыбирете оператора для звонка : ";
	cin >> oper;
	if (oper < '1' || oper > '9') {
		cout << "\nВы допустили ошибку .Попробуйте заново!";
	}
	else

		switch (oper)
		{
		case '1':
			cout << "\nСтоимость звонка : " << cost;
			break;
		case '2':
			cout << "\nСтоимость звонка : " << cost + 15;
			break;
		case '3':
			cout << "\nСтоимость звонка : " << cost + 10;
			break;
		case '4':
			cout << "\nСтоимость звонка : " << cost;
			break;
		case '5':
			cout << "\nСтоимость звонка : " << cost + 12;
			break;
		case '6':
			cout << "\nСтоимость звонка : " << cost + 11;
			break;
		case '7':
			cout << "\nСтоимость звонка : " << cost + 6;
			break;
		case '8':
			cout << "\nСтоимость звонка : " << cost + 5;
			break;
		case '9':
			cout << "\nСтоимость звонка : " << cost + 20;
		default:
			break;
		}
	cout << "\n";
	cout << "\n\tЗадание 3";
	cout << "\n\tЧасть 1!";
	int doh, zap, radok;
    int xy;
	cout << "\nВыбирете что вы хотите узнать !";
	cout << "\n1-Сколько строк кода нужно Васе написать !";
	cout << "\n2-Сколько раз Вася может опаздать !";
	cout << "\n3-Сколько Васе заплатят денег!";
	cout << "\nИтак ваш выбор :  ";
	cin >> xy;
	if (xy < 1 || xy>3) {
		cout << "\n";
		return 0;
	}
	else {
		switch (xy) {

		case 1:
		{
			cout << "\nВведите желланный доход : ";
			cin >> doh;
			cout << "\nВведите количество опазданий : ";
			cin >> zap;
			radok = doh * 2 + ((zap / 3) * 20);
			if (radok < 0)
				cout << "\nМаленькое количество дахода либо большое количество опазданий :(" << endl;
			else
				cout << "\nКоличествро  строк которое нужно написать Васе : " << radok;
			break;
		}
		case 2:
		{
			cout << "\nВведите количество строк написаных Васей :";
			cin >> radok;
			cout << "\nВведите желаный даход : ";
			cin >> doh;
			zap = (radok - (doh * 2)) / 20;
			if (zap < 0)
				cout << "\nМаленькое количество строк кода либо слишком много хочет Вася денег !!! ";
			else
				cout << "\nКоличество опазданий сколько Вася может опаздать :" << zap;
			break;
		}
		case 3:
		{
			cout << "\nВведите количество строк кода : ";
			cin >> radok;
			cout << "\nВведите количество опазданий : ";
			cin >> zap;
			doh = radok * 0.5 - ((zap / 3) * 20);
			if (doh < 0)
				cout << "\nВася не заработал ни цента!!!";
			else
				cout << "\nВася заработал : " << doh;
			break;
		}
		default:
			cout << "\nВы допустили ошибку !!!";
			break;
		}

	}

	return 0;
}
