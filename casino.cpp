//Mister H

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
	string name;
	int balance, amount, guess, dice;
	char choice;
	cout<<"\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
	cout<<"Game Rules:\n1. Choose a number between 1 to 10.\n2. Winner gets the 10x amount of the money bet.\n3. You'll lose the amount you bet if wrong bet.\n";
	cout<<"\nWhat's your name: ";
	cin>>name;
	cout<<"Enter the starting amount to play: $";
	cin>>balance;
	do {
		system("cls");
		cout << "\n\nYour current balance is $ " << balance << endl;
		do {
			cout<<"Hey "<<name<<", enter amount to bet: $";
			cin>>amount;
			if(amount>balance)
			cout<<"\nYou can't bet more than your balance\n\nRe-enter your betting amount!!\n"<<endl;
		}while(amount>balance);
		do {
			cout<<"Guess any betting number between 1 to 10: ";
			cin>>guess;
			if(guess<1 || guess>10)
			cout<<"\nPlease enter betting number between 1 to 10. Try again!!\n\n";
		}while(guess<1 || guess>10);
		dice=rand()%10+1;
		if(guess==dice) {
			cout<<"\n\nYou're lucky man. You've won $"<<amount*10<<endl;
			balance=balance+amount*10;
		}
		else {
			cout<<"Bad Luck Dude! You've lost $"<<amount<<endl;
			balance=balance-amount;
		}
		cout<<"\nThe winning number was "<<dice<<endl;
		cout<<name<<", You've balance of $"<<balance<<endl;
		if(balance==0) {
			cout<<"\nYou've no money left to play!!";
			break;
		}
		cout<<"Do you want to play again?(y/n): ";
		cin>>choice;
	}while(choice=='y' || choice=='Y');
	cout<<"\n\nThanks for playing. Your balance is $"<<balance;
	
	return 0;
}
