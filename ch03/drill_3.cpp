#include "std_lib_facilities.h"

int  main() 


{

	string first_name = "";
	string write_to = "";
	string friend_name = "";
	char friend_sex = 0;
	int recipient_age = 0;
		



	cout << "Please enter your first name!" << endl;
	cin >> first_name;

	cout << endl << "Hello, " << first_name << endl << endl;


	cout << "Enter the name of the person you want to write to!" << endl;
	cin >> write_to;

	cout << "Please enter your another friend name!" << endl;
	cin >> friend_name;

	cout << "Enter friend's sex m for male or f for female!" << endl;
	cin >> friend_sex;

	cout << "Enter your recipient's age!" << endl;
	cin >> recipient_age;



	if (recipient_age <= 0 || recipient_age >= 110)
		
			simple_error("you're kidding!");




	cout << endl << "Dear " << write_to << "," << endl <<endl;
	cout << "How are you? I'm fine. I miss you." << endl <<
	"I hope you can reply to my letter as soon as possible." << endl << 
	"Have you seen " << friend_name << " lately?" << endl;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me." << endl; 
	}

	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me." << endl; 
	}


	cout << "I hear you just had a birthday and you are " << recipient_age << " years old." <<endl;

	if (recipient_age <= 12)
	{
		cout << "Next year you will be " << recipient_age+1 << "." << endl; 
	}

	if (recipient_age == 17)
	{
		cout << "Next year you will be able to vote." << endl; 
	}

	if (recipient_age >= 70)
	{
		cout << "I hope you are enjoying retirement." << endl; 
	}

	cout << "\n\nYours sincerely,";
    cout << "\n\n\n" << first_name << "\n\n";




	return 0;
}