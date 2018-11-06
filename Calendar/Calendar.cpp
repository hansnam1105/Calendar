#include <iostream>
#include <string>

using namespace std;

class Signin
{
protected:
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
	int Check() 
	{
		if ((insertid == id) && (insertpin == pin))
		{
			return 0;
		}
		else if((insertid == id) && (insertpin != pin))
		{
			cout << "Wrong Password" << endl;
		}
		else if ((insertid != id) && (insertpin == pin))
		{
			cout << "Wrong ID" << endl;
		}
		
	}
};

class Schedule
{
private:
	string schedulename;
	int year, month, day;
	int hour, minute;
	int select;
public:

	void addSchedule()
	{
		cout << "스케줄 이름을 입력해주세요 : ";
		cin >> schedulename;
		cout << "일정 \n 년 : ";
		cin >> year;
		cout << "달 : ";
		cin >> month;
		cout << "일 : ";
		cin >> day;
		cout << "1. 하루종일\n2.시간설정" << endl;
		cin >> select;
		if (select == 1)
		{

		}
		else if (select == 2)
		{
			cout << "시간 : ";
			cin >> hour;
			cout << "분 : ";
			cin >> minute;
		}
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

		cout << "일\t월\t화\t수\t목\t금\t토" << endl;
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

		daycount = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; //윤년
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


