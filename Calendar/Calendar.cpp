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
class Login : protected Login
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

};

class printCal
{

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


