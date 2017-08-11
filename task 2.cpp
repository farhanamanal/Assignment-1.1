// task 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
//task 1
{
	
		int s1, s2, s3, s4, s5, sum, total = 500;
		float per;

		cout<<"Enter marks of Physics : "<<endl;
		cin >> s1;
		cout<<"Enter marks of Chemistry : "<<endl;
		cin>>s2; 
		cout<<"Enter marks of Biology : "<<endl;
		cin>>s3; 
		cout<<"Enter marks of Maths : "<<endl;
		cin>>s4;
		cout<<"Enter marks of Computer : "<<endl;
		cin>>s5; 
		
		sum = s1 + s2 + s3 + s4 + s5;
		cout<<"Sum= "<< sum<<endl;

		per = (sum * 100) / total;
		cout<<"Percentage : "<< per<<endl;
		
		if (per >= 90)
		{
			cout<<"Grade A"<<endl;
		}
		else if (per >= 80)
		{
			cout<<"Grade B"<<endl;
		}
		else if (per >= 70)
		{
			cout<<"Grade C"<<endl;
		}
		else if (per >= 60)
		{
			cout<<"Grade D"<<endl;
		}
		else if (per >= 40)
		{
			cout<<"Grade E"<<endl;
		}
		else
		{
			cout<<"Grade F"<<endl;
		}

		return 0;
	}
	//Task 2
	/*
{
	int unit;
	float amt, total_amt, sur_charge;

	
	cout<<"Enter total units consumed: "<<endl;
	cin >> unit;


	
	if (unit <= 50)
	{
		amt = unit * 0.50;
	}
	else if (unit <= 150)
	{
		amt = 25 + ((unit - 50)*0.75);
	}
	else if (unit <= 250)
	{
		amt = 100 + ((unit - 150)*1.20);
	}
	else
	{
		amt = 220 + ((unit - 250)*1.50);
	}
	sur_charge = amt * 0.20;
	total_amt = amt + sur_charge;

	cout << "Electricity Bill = Rs."<<total_amt<<endl;

	return 0;
}
*/