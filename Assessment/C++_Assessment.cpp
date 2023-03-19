#include<iostream>
using namespace std;
int main()
{
    char name[50], pizza1[]="Margerita" ,pizza2[]="Panner Makhni" ,pizza3[]="Pepperoni",
    bur1[]="Cheese Burger",bur2[]="Veggie Burger",bur3[]="Chilli Burger",
    sand1[]="Veg Sandwich", sand2[]="Grill Sandwich", sand3[]="Cheese Sandwich",
	roll1[]="Spring Roll", roll2[]="Veg Roll", roll3[]="Sweet Roll",
    bir1[]="Hyderabadi Biryani", bir2[]="Veg Biryani", bir3[]="Bombay Biryani",gotostart ;
	int choice,pchoice,pchoice1,quantity;

	beginning:
	cout<<"\t\t\t----------Tops Tech. Fast Food-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nEnter your Choice: ";
	cin>>choice;

	if(choice==1)
	{
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"\nEnter which Pizza would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=3)
		{
		    cout<<"\n1) Small = Rs.100\n"<<"2) Regular = Rs.200\n"<<"3) Large = Rs.300\n";
			cout<<"\nChoose Size:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 100*quantity;
			break;
			case 2: choice = 200*quantity;
			break;
			case 3: choice = 300*quantity;
			break;
            default:
            cout<<"Please Enter Valid Choice!";
            break;
			}
			switch (pchoice1)
			{
			    case 1:
			    cout<<"\t\t\t--------Your Order---------\n";
			    cout<<""<<quantity<<" "<<pizza1;
			    cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
			    cout<<"\n\nThank you For Ordering.\n";
			    break;
			    case 2:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<"  "<<pizza2;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 3:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<pizza3;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.";
                break;
                default:
                cout<<"Please Enter Valid Choice!";
                break;
			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  return 0;
			}
		}
    }
    else if(choice==2)
	{
		cout<<"\n1) "<<bur1<<" = Rs.90"<<"\n";
		cout<<"2) "<<bur2<<" = Rs.50"<<"\n";
		cout<<"3) "<<bur3<<" = Rs.60"<<"\n";
		cout<<"\nEnter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 90*quantity;
			break;
			case 2: choice = 50*quantity;
			break;
			case 3: choice = 60*quantity;
			break;
			}
			switch (pchoice1)
			{
                case 1:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<bur1;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 2:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<"  "<<bur2;
                cout<<"\nYour Total Bill is =  "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 3:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<bur3;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  return 0;
			}
        }
    }
	else if(choice==3)
	{
		cout<<"\n1)  "<<sand1<<" = Rs.40"<<"\n";
		cout<<"2)  "<<sand2<<" = Rs.70"<<"\n";
		cout<<"3)  "<<sand3<<" = Rs.90"<<"\n";
		cout<<"\nEnter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 40*quantity;
			break;
			case 2: choice = 70*quantity;
			break;
			case 3: choice = 90*quantity;
			break;
			}
			switch (pchoice1)
			{
                case 1:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<sand1;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 2:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<"  "<<sand2;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 3:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<sand2;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  return 0;
			}
		}
	}
    else if(choice==4)
	{
		cout<<"\n1) "<<roll1<<" = Rs.50"<<"\n";
		cout<<"2) "<<roll2<<" = Rs.40"<<"\n";
		cout<<"3) "<<roll3<<" = Rs.70"<<"\n";
		cout<<"\nEnter which Rolls you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;
			case 2: choice = 40*quantity;
			break;
			case 3: choice = 70*quantity;
			break;
			}
			switch (pchoice1)
			{
                case 1:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<roll1;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 2:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<"  "<<roll2;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 3:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<roll3;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
			}

        }
    }
	else if(choice==5)
	{
		cout<<"\n1) "<<bir1<<" = Rs.150"<<"\n";
		cout<<"2) "<<bir2<<" = Rs.80"<<"\n";
		cout<<"3) "<<bir3<<" = Rs.100"<<"\n";
		cout<<"\nEnter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nEnter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;
			case 2: choice = 80*quantity;
			break;
			case 3: choice = 100*quantity;
			break;
			}
			switch (pchoice1)
			{
                case 1:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<bir1;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 2:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<"  "<<bir2;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
                case 3:
                cout<<"\t\t--------Your Order---------\n";
                cout<<""<<quantity<<" "<<bir3;
                cout<<"\nYour Total Bill is = "<<choice<<"\nYour Order Will be delivered in 40 Minutes.";
                cout<<"\nThank you For Ordering.\n";
                break;
			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  return 0;
			}
		}
	}
    else
	{
		cout<<"Please Enter Valid choice!\n";
		cout<<"Would You like to Start the program again? Y / N: " ;
		cin>>gotostart;
		if(gotostart=='Y' || gotostart=='y')
		{
			goto beginning;
		    return 0;
		}
	}
}