// MCQS PAPER PROGRAM
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int option,score=0;
	string name;
	char opt;
	cout<<"==============================================\n";
	cout<<"***********Welcome To Quiz Game***************\n";
	cout<<"==============================================\n";

	cout<<"Enter Your name: "<<endl;
	getline(cin,name);
	cout<<"welcome "<<name<<endl;
	cout<<"\n1) Start Quiz\n";
	cout<<"2) View Score\n";
	cout<<"select one option from above=";
	cin>>option;
	while(option<1 or option>3){
		cin.clear();
		cout<<"plz enter a correct option=";
		cin>>option;
	}
	switch(option){
	case 1:
	cout<<"Q.1: Total no. of oceans in the world is:\n";
	cout<<"a)3\nb)4\nc)5\nd)6\n";
	cout<<"enter your correct option:\n";
	cin>>opt;
	while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D')
	{
	cin.clear();
	cout<<"enter a valid option";
	cin>>opt;
	}
	if (opt=='c' or opt=='C'){
	cout<<"correct option..\n";
	score=score+2;
	}
	else{
		cout<<"sorry, wrong answer..\n";
	}
	// using system cls to clear screen after one question
	getch();
	system("cls");
	cout<<"Q.2: Who composed the verses of Pakistan national Anthem?\n";
	cout<<"a)Hafeez Jallandri\nb)Nasir Kazmi\nc)Allama Iqbal\nd)Faiz Ahmed Faiz\n";
	cout<<"enter your correct option:\n";
	cin>>opt;
	while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D')
	{
	cin.clear();
	cout<<"enter a valid option";
	cin>>opt;
	}
	if (opt=='a' or opt=='A'){
		cout<<"correct option...\n";
		score=score+2;
	}
	else{
		cout<<"sorry, wrong answer..\n";
	}
	getch();
	system("cls");
	cout<<"Q.3: Urdu was declared national language of Pakistan in:\n";
	cout<<"a)April 1950\nb)April 1955\nc)April 1954\nd)April 1952\n";
	cout<<"enter your correct option:\n";
	cin>>opt;
	while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D')
	{
	cin.clear();
	cout<<"enter a valid option";
	cin>>opt;
	}
	if (opt=='c' or opt=='C'){
		cout<<"correct option...";
		score=score+2;
	}
	else{
		cout<<"sorry, wrong answer..";
	}
	getch();
	system("cls");
	cout<<"Q.4: What is the largest country in the world?\n";
	cout<<"a)Russia\nb)Malaysia\nc)India\nd)Africa\n";
	cout<<"enter your correct option:\n";
	cin>>opt;
	while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D')
	{
	cin.clear();
	cout<<"enter a valid option";
	cin>>opt;
	}
	if (opt=='a' or opt=='A'){
		cout<<"correct option...";
		score=score+2;
	}
	else{
		cout<<"sorry, wrong answer..";
	}
	getch();
	system("cls");
	cout<<"Q.5: Word Urdu means:\n";
	cout<<"(a)Believers\n(b)A group of students\n(c)Army\n(d)None of these\n";
	cout<<"enter your correct option:\n";
	cin>>opt;
	while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D')
	{ 
	cin.clear();
	cout<<"enter a valid option";
	cin>>opt;
	}
	if (opt=='c' or opt=='C'){
		cout<<"correct option...";
		score=score+2;
	}
	else{
		cout<<"sorry, wrong answer..";
	}
	getch();
	system("cls");
	cout<<"=========Game Ended========\n";
	cout<<"*****Made By Abbas Raza*****\n";
	cout<<"Press 2 to view your score :)\n";
	cout<<"Press 1 to play the game again :";
	cout<<"\n1) Start Quiz\n";
	cout<<"2) View Score\n";
	cout<<"select one option from above=";
	cin>>option;
	while(option<1 or option>3){
		cin.clear();
		cout<<"plz enter a correct option=";
		cin>>option;
	}
	case 2:
	cout<<"Total score=10 \n";
	cout<<"obtain marks="<<score;
	getch();
	system("cls");
	}
	getch();
return 0;
}