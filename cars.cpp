#include<iostream>
#include <iomanip>
#include <cstdlib>
#include<vector>
#include <algorithm>

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

void PrintCar(CAR a)
{
	cout<<setw(10)<<a.marka<<setw(15)<<a.model<<setw(5)<<a.year<<setw(5)<<a.cubatura<<setw(8)<<a.power<<setw(8)<<a.price<<endl;
}

bool compare (CAR a,CAR b)
 { return (a.marka<b.marka); }

void SortCAR(vector<CAR>vec)
{  int i;
  sort(vec.begin(), vec.end(), compare);
  for (int i = 0; i < vec.size(); i++) {
      PrintCar(vec[i]);
    }
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
    PrintCar(vec[i]);
  }
 
} 

void SearchbyBrand(vector<CAR>vec)
{
	cout<<"\n Please enter part of brand:";
	string s;
	cin>>s;
	int br=0;
	cout<<"LIST OF CARS:\n";
	for (int i=0; i<vec.size(); i++)
     { 
        std::size_t found = vec[i].marka.find(s);
        if (found!=std::string::npos){
                                 PrintCar(vec[i]);
                                 br++;
                             }
    
  }
   if (br==0) cout<<"No cars!";	
}

void SearchbyYear(vector<CAR>vec)
{
	cout<<"\n Please enter year:";
	int u;
	cin>>u;
	int br=0;
	cout<<"LIST OF CARS:\n";
	for (int i=0; i<vec.size(); i++)
     { 
        if (vec[i].year>=u){
                                 PrintCar(vec[i]);
                                 br++;
                             }
    
  }
   if (br==0) cout<<"No cars!";	
}

void SearchbyPrice(vector<CAR>vec)
{
	cout<<"\n Please enter year:";
	int p;
	cin>>p;
	int br=0;
	cout<<"LIST OF CARS:\n";
	for (int i=0; i<vec.size(); i++)
     { 
        if (vec[i].price<=p){
                                 PrintCar(vec[i]);
                                 br++;
                             }
    
  }
   if (br==0) cout<<"No cars!";
}

void SearchCAR(vector<CAR>vec)
{
	int c;
	cout<<"\n Please select search category:\n\n";
  cout<<"1 - By brand\n";
  cout<<"2 - By year of production\n";
  cout<<"3 - By price\n";
  cout<<"Your choice:";
  cin>>c;
  switch(c){
  	case 1:SearchbyBrand(vec);
  	       break;
  	case 2:SearchbyYear(vec);
  	       break;
	case 3:SearchbyPrice(vec);
  	       break;
	default: cout<<"\nInvalid choice!"; 	
  }
}

void DeleteCAR(vector<CAR>vec)
{   
   if (vec.size()>0)
    {
     vec.erase(vec.end());
      ViewCAR(vec);
  }
  else cout<<"\nNo Cars to delete!\n";
	
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
