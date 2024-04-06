#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
		
	int days,choice;
	cout << "\n\n\t\tWelcome to Quest Online Library \n\n "; //Wlecome
	
	cout << "\t\t 1 \t Check the book issue fees \n ";  // Menu
	cout << "\t\t 2 \t Exit \n ";
	
	cout << "\t\t\t Your Choice :  "; //input menu
	cin >> choice; // Get user input from the keyboard,

	
	switch(choice){
		case 1:
			cout << "\n\n\t\tPlease Enter the No of Days, The member kept the book: "; // Type a number and press enter
			cin >> days; // Get user input from the keyboard
	        
				//checking
				if(days>0 && days <=10){				 
					cout << "\n\t\tYou Need to Pay : PKR 50 ";
					cout << "\n\n\t\t    **** Thanks **** ";
				}
				else{
					cout << "\n\t\tYou Need to Pay : PKR 150 ";
					cout << "\n\n\t\t    **** Thanks **** ";
				}
				break;

		case 2: exit(3);
			
		default : cout << "\n\t\tOut of Choice";
	}
  return 0;
}
