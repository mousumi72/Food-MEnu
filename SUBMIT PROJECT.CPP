
#include <iostream>
using namespace std;
int main(){

	int order,no_deals;
	cout<<"**************************burger club*********************"<<endl;
	cout<<"|*---------------------------MENU-----------------------------*|"<<endl;
	cout<<endl;
	cout<<"(1)  Chicken Biryani                    200 tk."<<endl;
	cout<<"(2)  Chicken Palao                      150 tk."<<endl;
	cout<<"(3)  Chinese Rice                       250 tk."<<endl;
	cout<<"(4)  Chicken Burgar                     190 tk."<<endl;
	cout<<"(5)  Nawabi Pizza                       450 tk."<<endl;
	cout<<"(6)  2.5 Litre Coke                     175 tk."<<endl;
	cout<<"(7)   Nachos                              350 tk."<<endl;
	cout<<"(8)   Shorma                              250tk."<<endl;
	cout<<endl;
	cout<<" select the order number: ";
	cin>>order;
	cout<<" enter the number of deals: ";
	cin>>no_deals;
	cout<<endl;
	switch(order) {

        	case 1:
		cout<<"Order : Chicken Biryani."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 200 tk."<<endl;
		cout<<"Total price : "<<" "<<200*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;
			case 2:
		cout<<"Order Chicken Palao."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 150tk."<<endl;
		cout<<"Total price : "<<" "<<150*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;
				case 3:
		cout<<"Order : Chinese Rice."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 250 tk."<<endl;
		cout<<"Total price : "<<" "<<25*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;
				case 4:
		cout<<"Order : Chicken Burgar."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 190 tk."<<endl;
		cout<<"Total price : "<<" "<<190*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;
				case 5:
		cout<<"Order : Nawabi Pizza ."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 450 tk."<<endl;
		cout<<"Total price : "<<" "<<450*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;
				case 6:
		cout<<"Order : 2.5 Litre Coke."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 175 tk."<<endl;
		cout<<"Total price : "<<" "<<175*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;
		break;


		case 7:
		cout<<"Order : Nachos ."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 350 only."<<endl;
		cout<<"Total price : "<<" "<<350*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU  COME AGAIN-----------~"<<endl;
		break;

                                case 8:
		cout<<"Order : Shorma ."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: 250 tk."<<endl;
		cout<<"Total price : "<<" "<<250*no_deals<<" "<<"tk."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU COME AGAIN -----------~"<<endl;

} return 0;
}



