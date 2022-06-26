#include<iostream>
#include<string.h>

using namespace std;

class ticket
{
	private:
	         char name[30];
	         char departure[30];
	         char arrival[30];
	         int age;
	         int choice1;
	         int choice2;
	         char meal_type[30];
	         int day;
	         char month[30];
	         int year;
	         int rday;
	         char rmonth[30];
	         int ryear;
	         int passengers;
	         int i;
	         int total;
	        
	         
	        
	         
	public:
		 
		  void input()
		  {
		  
		  		cout << "\nENTER THE NAME OF THE PASSENGER:";
		  		cin >> name;
		  		cout << "\n ENTER THE AGE:";
		  		cin >> age;
		  		cout << "\nENTER MEAL PREFERRENCE:";
		  		cout << "\n 1.VEGETERIAN MEAL \n 2.NON-VEGETERIAN MEAL \n 3.DIET MEAL \n";
		  		cin >> choice2;
		  		
		  		switch(choice2)
		  		{
		  			case 1:
		  				
		  				strcpy(meal_type,"VEGETARIAN MEAL");
		  				break;
		  			
					case 2:
					
					strcpy(meal_type,"NON-VEGETARIAN MEAL");
						break;
					
					case 3:
						
						strcpy( meal_type,"DIET MEAL");
						break;
					
					default:
					
						cout << "\n ENTER VALID SELECTION";
						break;			
				  }
		  		
		  		
			  
			 
			 cout << "\n ENTER THE TYPE OF JOURNEY 1. ROUND TRIP 2. ONE WAY \n:";
			 cin >> choice1;
			 
			 switch(choice1)
			 {
			 	case 1:
			 		cout << "\n ENTER THE START LOCATION:";
					 cin >> departure;
			 
			 		cout << "\n ENTER THE DESTINATION:";
			 		cin >> arrival;
			 		
			 		cout << "\n ENTER THE DATE:";
			 		cin >> day >> month >> year;
			 		
			 		cout << "\n ENTER THE RETURN DATE:";
			 		cin >> rday >> rmonth >> ryear;
			 		break;
			 		
			 	case 2:
			 		
			 		cout << "\n ENTER THE START LOCATION:";
					 cin >> departure;
			 
			 		cout << "\n ENTER THE DESTINATION:";
			 		cin >> arrival;
			 		
			 		cout << "\n ENTER THE DATE:";
			 		cin >> day >> month >> year;
			 		break;
			 		
			 		
			 }
			
		  	
		}
			  
		void fare()
		  	  {
		  	  	
	
	if(choice1==1)
	{
		total = 2*20000;
		cout << "\n TOTAL FARE:" << total;
	
	}
   else 
	{
		total = 20000;
		cout << "\n TOTAL FARE:" << total;
	
	}
}
				
	      
		  	
		  	void output()
		  	{
			  
			  	 cout << "\n\n name of the passenger:" << name;
			  	 cout << "\t\t AGE OF THE PASSENGER:" << age;
			  	 cout << "\t MEAL PREFERRED:" << meal_type;
			  	 
			  
	         
	         if(choice1==1)
	         {
	         	cout << "\n\nFROM:" << departure;
	         	cout << "\t TO:" << arrival;
	         	cout << "\n START JOURNEY:" << day << "-"<< month << "-" << year;
	        	cout << "\n RETURN JOURNEY:" << rday << "-" << rmonth << "-"<< ryear;
	        
				 			
			 }
			 
			 else if(choice1==2)
			 {
			 	cout << "\n FROM:" << departure;
	         	cout << "\t\t\t TO:" << arrival;
	         	cout << "\t\t\t START JOURNEY:" << day << "-"<< month << "-" << year;
	         	
			 }
		  	
		   }
		   
		   
		
};
class info
{
			
		private:
		    	    	 
                         ticket data[50];
                         int n;
                         
                      
                     
		public:
                        
                        
                        void input();
                       	void fare();
                        void output();
};

void info::input()
{
            cout << endl << "Enter no of passengers: ";
             cin >> n;
             for ( int i=0; i<n; i++)
               data[i].input();
}
void info::fare()
{   
for ( int i=0; i<n; i++)
               data[i].fare();
    
}
            
void info::output()
{
            
			for ( int i=0; i<n; i++)
           		 data[i].output();
		    	
		    	
}


 
main()
{
     
    cout << "\n ***********WELCOME TO ONLINE TICKET BOOKING FOR AIR INDIA***********";
  	info t1;
    t1.input();
    t1.output();
    t1.fare();
     
	
}
