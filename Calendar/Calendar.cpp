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
		cout << "성:";
		cin >> surname;
		cout << "이름 : ";
		cin >> uname;
		cout << "생년원일 (ex. 19800101) : ";
		cin >> bday;
		cout << "이메일 (ex. abc@edf.com) : ";
		cin >> email;
		cout << "아이디 : ";
		cin >> id;
		while (1)
		{
			cout << "PIN 4자리 (숫자 4자리) : ";
			cin >> pin;
			if ((sizeof(pin) / sizeof(int)) != 4)
			{
				cout << "PIN은 4자리여야 합니다 다시 입력해주세요" << endl;
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
	cout << "나의 캘린더에 오신것을 환영합니다!" << endl;
	cout << "1. 로그인 \t\t 2. 회원가입" << endl;
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


