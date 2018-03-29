//hotstocks.cpp
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
double gameplay();
int main()
{
	int startmenuchoice;
	double highscore=1500,gamescore;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"Welcome to Hot Stocks"<<endl;
	cout<<"Please select a menu option the hit enter"<<endl;
	cout<<"1)start game"<<endl;
	cout<<"2)highscore"<<endl;
	cout<<"3)exit game"<<endl;
	cin>>startmenuchoice;
	if (startmenuchoice==1)
	{
		cout<<"the game will start now"<<endl;
		gamescore=gameplay();
	}
	else if (startmenuchoice==2)
	{
		cout<<"The highscore is: "<<highscore<<endl;
	}
	else if (startmenuchoice==3)
	{
		return 0;
	}
	else
	{
		cout<<"You must choose an option from the list."<<endl;
	}
	if (gamescore>highscore)
	{
		highscore==gamescore;
	}
	main();
}

double gameplay()
{
	int autost=0,techst=0,farmst=0,bankst=0,healthst=0;
	int days,y,n,x,a,s,d;
	double money=200,savings=0;
	double score=0;
	for (days=1;days<=5;days++)
	{
		int selection;
		cout<<"day "<<days<<" of 5"<<endl;
		cout<<"Do you want to:"<<endl;
		cout<<"1)Access Market Trading System"<<endl;
		cin>>selection;
		if (selection==1)
		{
			cout<<"Welcome to the Metropolitan Trading System"<<endl;
			int choice;
			int Auto,Tech,Farm,Bank,Health;
			int comp;
			unsigned seed = time(0);
			srand(seed);
			for(n=1;n<=3;n++)
			{
				y=(rand()*rand() % 100);
				if(y<0)
				{
					y=0;
				}
				x=y+rand()%100;
				a=x+rand()%100;
				s=a+rand()%100;
				d=s+rand()%100;
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout<<endl<<endl;
				cout<<setprecision(2)<<fixed;
				cout<<"day "<<days<<" of 5"<<endl;
				cout<<"Daily Market Trade "<<n<<" of 3"<<endl;
				cout<<"*Cash*"<<endl<<"Available: $"<<money<<endl<<"Savings: $"<<savings<<endl;
				cout<<"Your Position :"<<endl;
				cout<<left<<"Automotive\t"<<"Technology\t"<<"Agricultural\t"<<"Banking\t\t";
				cout<<"Healthcare"<<endl;
				cout<<left<<autost<<"\t\t"<<techst<<"\t\t"<<farmst<<"\t\t"<<bankst<<"\t\t";
				cout<<healthst<<endl<<endl<<endl;
				cout<<"Current Market Prices: "<<endl;
				cout<<left<<"Automotive\t"<<"Technology\t"<<"Agricultural\t"<<"Banking\t\t";
				cout<<"Healthcare"<<endl;
				cout<<"--------------------------------------------------------------------------"<<endl;
				cout<<"$"<<y<<"\t\t"<<"$"<<x<<"\t\t"<<"$"<<a<<"\t\t"<<"$"<<s<<"\t\t"<<"$"<<d<<endl;
				cout<<"Enter number of desired action: "<<endl;
				cout<<"1)Update Picks"<<endl<<"2)To Buy"<<endl<<"3)To Sell"<<endl;
				cin>>choice;
				if (choice==1)
				{
					money+=0;
				}
				else if(choice==2)
				{
					cout<<"Which stock do you want to buy? 1)Auto 2)Tech 3)Farm 4)Bank 5)Health"<<endl;
					cin>>comp;
					if(comp==1)
					{
						int units,cost;
						cout<<"How many units do you want?"<<endl;
						cin>>units;
						cost=units*y;
						if(cost>money)
						{
							cout<<"You dont have enough money"<<endl;
						}
						else if(cost<=money)
						{
							money-=cost;
							autost+=units;
						}
					}
					if(comp==2)
					{
						int units,cost;
						cout<<"How many units do you want?"<<endl;
						cin>>units;
						cost=units*x;
						if(cost>money)
						{
							cout<<"You dont have enough money"<<endl;
						}
						else if(cost<=money)
						{
							money-=cost;
							techst+=units;
						}
					}
					if(comp==3)
					{
						int units,cost;
						cout<<"How many units do you want?"<<endl;
						cin>>units;
						cost=units*a;
						if(cost>money)
						{
						
							cout<<"You dont have enough money"<<endl;	
						}
						else if(cost<=money)
						{
							money-=cost;
							farmst+=units;
						}
					}
					if(comp==4)
					{
						int units,cost;
						cout<<"How many units do you want?"<<endl;
						cin>>units;
						cost=units*s;
						if(cost>money)
						{
						
							cout<<"You dont have enough money"<<endl;	
						}
						else if(cost<=money)
						{
							money-=cost;
							bankst+=units;
						}
					}
					if(comp==5)
					{
						int units,cost;
						cout<<"How many units do you want?"<<endl;
						cin>>units;
						cost=units*d;
						if(cost>money)
						{
						
							cout<<"You dont have enough money"<<endl;	
						}
						else if(cost<=money)
						{
							money-=cost;
							healthst+=units;
						}
					}
					money+=0;
				}
				else if(choice==3)
				{
					cout<<"Which stock do you want to sell? 1)Auto 2)Tech 3)Farm 4)Bank 5)Health"<<endl;
					cin>>comp;
					if(comp==1)
					{
						int units,cost;
						cout<<"How many units do you want to sell?"<<endl;
						cin>>units;
						if(units>autost)
						{
						
							cout<<"You dont have enough units"<<endl;	
						}
						else if(units<=autost)
						{
							money+=(units*y);
							autost-=units;
						}
					}
					if(comp==2)
					{
						int units,cost;
						cout<<"How many units do you want to sell?"<<endl;
						cin>>units;
						if(units>techst)
						{
						
							cout<<"You dont have enough units"<<endl;	
						}
						else if(units<=techst)
						{
							money+=(units*x);
							techst-=units;
						}
					}
					if(comp==3)
					{
						int units,cost;
						cout<<"How many units do you want to sell?"<<endl;
						cin>>units;
						if(units>farmst)
						{
						
							cout<<"You dont have enough units"<<endl;	
						}
						else if(units<=farmst)
						{
							money+=(units*a);
							farmst-=units;
						}
					}
					if(comp==4)
					{
						int units,cost;
						cout<<"How many units do you want to sell?"<<endl;
						cin>>units;
						if(units>bankst)
						{
						
							cout<<"You dont have enough units"<<endl;	
						}
						else if(units<=bankst)
						{
							money+=(units*s);
							bankst-=units;
						}
					}
					if(comp==5)
					{
						int units,cost;
						cout<<"How many units do you want to sell?"<<endl;
						cin>>units;
						if(units>healthst)
						{
						
							cout<<"You dont have enough units"<<endl;	
						}
						else if(units<=healthst)
						{
							money+=(units*d);
							healthst-=units;
						}
					}

					


				}
			}
			money+=0;
		}
		else
		{
			cout<<"Please choose a choice from the list."<<endl;
			gameplay();
		}
		score+=(money+(autost*y)+(techst*x)+(farmst*a)+(bankst*s)+(healthst*d));
		cout<<endl<<endl<<endl<<endl;
		
	}
	cout<<"Your score is: "<<score<<endl;
	return score;
}
