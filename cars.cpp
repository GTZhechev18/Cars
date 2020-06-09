#include<iostream>
#include <iomanip>
#include <cstdlib>
#include<vector>
using namespace std;
struct CAR{
	string marka;
	string model;
	int year;
	int cubatura;
	int power;
	float price;
};

void InputCAR(vector<CAR>&vec)
{
	CAR c;
 cout<<"\nInput CAR's data:\n\n";
 cout<<"marka: ";
 cin>>c.marka;
 cout<<"model: ";
 cin>>c.model; 
 cout<<"Year of production: ";
 cin>>c.year;
 cout<<"cubatura: ";
 cin>>c.cubatura;
 cout<<"Engine power: ";
 cin>>c.power;
 cout<<"Price of the car: ";
 cin>>c.price;
 vec.push_back (c);
}

void SortCAR(vector<CAR>vec)
{
}

void ViewCAR(vector<CAR>vec)
{
	system("cls");
  if (vec.size()==0) { cout<<"\nNo cars!\n";
                     return;
                   }
  cout<<"LIST OF CARS:\n";

  for (int i=0; i<vec.size(); i++)
  { 
    cout<<setw(10)<<vec[i].marka<<setw(15)<<vec[i].model<<setw(5)<<vec[i].year<<setw(5)<<vec[i].cubatura<<setw(8)<<vec[i].power<<setw(8)<<vec[i].price<<endl;
  }
 
} 

void SearchCAR(vector<CAR>vec)
{
}

void DeleteCAR(vector<CAR>vec)
{
	
}
void ShowMenu(vector<CAR>vec)
{
	int c;
  do{ 
  	
  cout<<"\nMain menu\n\n";
  cout<<"1 - Enter car\n";
  cout<<"2 - View cars\n";
  cout<<"3 - Sort car\n";
  cout<<"4 - Search car\n";
  cout<<"5 - Delete a car\n";
  cout<<"6 - Quit program\n";
  cout<<"Your choice:";
  cin>>c;
  
  switch(c){
  	 case 1: InputCAR(vec); break;
  	 case 2: ViewCAR(vec); break;
  	 case 3: SortCAR(vec); break;
  	 case 4: SearchCAR(vec); break;
  	 case 5: DeleteCAR(vec); break;
  	 
  	}
  } while (c!=6);
}

int main()
{
	vector<CAR>vec;
	ShowMenu(vec);
	
}
