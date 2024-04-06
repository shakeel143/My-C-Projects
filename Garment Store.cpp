#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
		
	int choice;
	double item_Price,discount,final_price;
	cout << "\n\n\t\tWelcome to Quest Garment Ltd \n\n "; //Wlecome
	
	cout << "\t\t 1 \t Check the Discount \n ";  // Menu
	cout << "\t\t 2 \t Exit \n ";
	
	cout << "\t\t\t Your Choice :  "; //input menu
	cin >> choice; // Get user input from the keyboard,

	
	switch(choice){
		case 1:
			cout << "\n\n\t\tPlease Enter the Items Price: "; // Type a number and press enter
			cin >> item_Price; // Get user input from the keyboard
	        
				//checking
				if(item_Price>0 && item_Price <1000){
					
					
				//	discount = item_Price x Discount %/100 formula
					discount = (item_Price * 5)/100; //Calculating Discount
						
				//	Final Price = Original Price - Discount formula
					final_price = item_Price -discount;//Calculating Final Price
									 
					cout << "\n\t\tDiscount (%5) PKR : " <<discount ;
					cout << "\n\t\tPlease Pay : "<<final_price;
					cout << "\n\n\t\t    **** Thanks **** ";
				}
				else{
					//	discount = item_Price x Discount %/100 formula
					discount = (item_Price * 7.5)/100; //Calculating Discount
						
				//	Final Price = Original Price - Discount formula
					final_price = item_Price -discount;//Calculating Final Price
								 
					cout << "\n\t\tDiscount (%7.5) PKR : " <<discount ;
					cout << "\n\t\tPlease Pay : "<<final_price;
					cout << "\n\n\t\t    **** Thanks **** ";
				}
				break;

		case 2: exit(3);
			
		default : cout << "\n\t\tOut of Choice";
	}
  return 0;
}
