#include <iostream>
#include <string>

using namespace std;

class Signin
{
private:
	char* uname;
	char* surname;
	int bday;
	string email;
	string id;
	int pin;
public:
	Signin()
	{
		cout << "��:";
		cin >> surname;
		cout << "�̸� : ";
		cin >> uname;
		cout << "������� (ex. 19800101) : ";
		cin >> bday;
		cout << "�̸��� (ex. abc@edf.com) : ";
		cin >> email;
		cout << "���̵� : ";
		cin >> id;
		while (1)
		{
			cout << "PIN 4�ڸ� (���� 4�ڸ�) : ";
			cin >> pin;
			if ((sizeof(pin) / sizeof(int)) != 4)
			{
				cout << "PIN�� 4�ڸ����� �մϴ� �ٽ� �Է����ּ���" << endl;
			}
			else
				break;
		}
		
	}
};
class Login : protected Signin
{
private:
	string insertid;
	int insertpin;
public:
	void Insert()
	{
		cout << "ID : ";
		cin >> insertid;
		cout << "PW : ";
		cin >> insertpin;
	}
	int Check(string id, int pin) 
	{
		
	}
};
class Cal
{
private:
	int year;
	int month;
public:
	Cal(int year, int month)
	{
		cout << "Year : ";
		cin >> year;
		cout << "Month : ";
		cin >> month;

		cout << "��\t��\tȭ\t��\t��\t��\t��" << endl;
	}
};

class printCal : public Cal
{
private:
	int leap_year;
	int daycount = 0 , first_date=0;
	int count;
public:
	printCal(int year, int month) : Cal(year, month)
	{
		int lastday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		daycount = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; //����
		for (int i = 0; i < month - 1; i++) { 
			if (i == 1) {
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
					lastday[1] = 29;
				else
					lastday[1] = 28;
			}
			daycount += lastday[i];
		}
		first_date = daycount % 7;
		for (int j = 0; j <= first_date; j++)
		{
			cout << "\t";
			count++;
		}
		for (int k = 1; k <= lastday[month - 1]; k++)
		{
			if (count >= 7)
			{
				cout << "" << endl;
				count = 0;
			}
			cout << k << "\t";
			count++;
		}
		cout << "\n\n";
	}
};

class Schedule
{

};

class Alarm 
{

};

int main(void)
{
	int choice;
	cout << "���� Ķ������ ���Ű��� ȯ���մϴ�!" << endl;
	cout << "1. �α��� \t\t 2. ȸ������" << endl;
	cin >> choice;
	if (choice == 1)
	{

	}
	else if (choice == 2)
	{

	}
	else
	{

	}

}


