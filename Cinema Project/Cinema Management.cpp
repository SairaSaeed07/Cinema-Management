#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class LOG
{
	 public:
	    void dis_ref()
	    {
	cout<<" ****************************************************************** "<<endl;
	cout<<" __________________"<<endl;
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	cout<<" |_________________"<<endl;
	cout<<" |				"<<endl;
	cout<<" |				"<<endl;
	cout<<" |   ___  ___    ___   "<<endl;	
	cout<<" |  / _ \\/ _ \\  |   \\ "<<endl;
    cout<<" |  |___/\\___/  | |) | "<<endl;
	cout<<" |              |___/"<<endl;
	cout<<" |               "<<endl;
	cout<<endl<<endl;
	    
	    	int mrzi;   // to input choice
	    	do
	    	{
	    		int mm;
	    			cout<<"####### YOU HAVE ENTERED THE MEAL FACTORY OF CINEMA ####### "<<endl;
	    		cout<<" GET 50 % off ON ANY MEAL IF YOU PRE REGISTER YOUR ORDER "<<endl<<endl;
	    		
	    		
				cout<<" DO YOU WANT TO BUY MEAl IF YES PRESS 1 IF NO PRESS 2 : ";
	    		cin>>mm;
				
				if(mm==1)
				{
					int mmm;
					for(int i=1; i>0; i++)
					{
				
					cout<<" HERE IS THE LIST OF MEAL "<<endl<<endl;
					dis_meal();  // function call
					cout<<" Please note all of the above ID. "<<endl;
					cout<<" Do you want to buy another meal Press 1 if Yes and Press 2 if no: ";
					cin>>mmm;
					if(mmm!=1)
						break;	
					}
				}	    		
			}while(mrzi=='y' && mrzi =='Y');
			dis_exit();
			
		}	
			void dis_exit()
		{
			cout<<"********************\n";
			cout<<"********************\n";
			cout<<"------------------------------------------------------------\n";
 cout<<" _____ _              _                      _   _ "<<endl;
 cout<<"|_   _| |_  __ _ _ _ | |__   _  _ ___ _  _  | | | |"<<endl;  
 cout<<"  | | | ' \\/ _` | ' \\| / /  | || / _ \\ || | |_| |_|"<<endl;
 cout<<"  |_| |_||_\\__,_|_||_|_\\_\\   \\_, \\___/\\_,_| (_) (_)"<<endl;

 cout<<" __  ___    _ _       _      |__/   _        _   _ "<<endl;
 cout<<"\\ \\ / (_)__(_) |_    /_\\ __ _ __ _(_)_ _   | | | |"<<endl;
  cout<<"\\ V /| (_-< |  _|  / _ \\/ _` / _` | | ' \  |_| |_|"<<endl;
  cout<<" \\_/ |_/__/_|\\__| /_/ \\_\\__, \\__,_|_|_||_| (_) (_)"<<endl;
   cout<<"                       |___/  "<<endl;
	

			cout<<"____________________\n";
			cout<<"********************\n";
			cout<<"********************"<<endl;
		}
	void dis_meal()
		{
				cout<<"============================================================================================================================================"<<endl;
	cout<<"                                               MEAL LIST                                                 "<<endl;
	cout<<"============================================================================================================================================"<<endl;
	cout<<"      BURGERS(1) "<<"\t"<<" COLD DRINKS(2)  "<<"\t"<<" SHAKES(3) "<<"\t\t"<<"    PIZZA (4)"<<"\t\t\t"<<" PRICES "<<endl;
	cout<<"============================================================================================================================================"<<endl;
	cout<<"1)    CHICKEN\t"<<"\t COCA COLA "<<"\t\t"<<" BANANA  "<<"\t\t"<<"CHICKEN FAJITA "<<"\t\t"<<"  800Rs (small)  | 1200Rs (medium) | 1700(large)"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"2)    ZINGER\t"<<"\t  SPRITE "<<"\t\t"<<" OREO "<<"\t\t"<<"        CHICKEN TIKKA "<<"\t\t"<<"    800Rs (small)  | 1200Rs (medium) | 1700(large) "<<endl;

	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"3)    SHAMI\t"<<"\t  DEW "<<"\t\t\t"<<" MANGO "<<"\t\t"<<"         GREEK PIZZA "<<"\t\t"<<"    800Rs (small)  | 1200Rs (medium) | 1700(large) "<<endl;

	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"4)    BEEF\t"<<"\t  7-up "<<"\t\t\t"<<" APPLE "<<"\t\t"<<"       ST.LOUIS PIZZA  "<<"\t\t"<<"    800Rs (small)  | 1200Rs (medium) | 1700(large) "<<endl;

	cout<<"============================================================================================================================================"<<endl;
			int chosi;  // variable for choice
			cout<<" ENTER YOUR CHOICE FROM (1-4) : ";
			cin>>chosi;
			if(chosi==1)
			{
				cout<<" YOU WANT TO ORDER BURGER : "<<endl;
				cout<<" ENTER FLAVOUR : (1-4) : ";
				int fmrzi;
				cin>>fmrzi; // for flavour choice
				if(fmrzi==1)
				{
					cout<<" YOU ORDER FOR CHICKEN BURGER HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE FOOD IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					
					}
					else if(fmrzi==2)
					{
						cout<<" YOU ORDER FOR ZINGER BURGER HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE FOOD IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(fmrzi==3)
					{
						cout<<" YOU ORDER FOR SHAMI  BURGER HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE FOOD IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(fmrzi==4)
					{
						cout<<" YOU ORDER FOR BEEF BURGER HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE FOOD IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else
					
					{
						cout<<" invalid ENTRY . "<<endl;
					}
				}
			else if(chosi==2)
			{
				cout<<" YOU WANT TO ORDER COLD DRINK : "<<endl;
				cout<<" ENTER FLAVOUR : (1-4) : ";
				int cmrzi;
				cin>>cmrzi;
				if(cmrzi==1)
				{
					cout<<" YOU ORDER FOR COCA COLA HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE COCA COLA IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MANAGER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					
					}
					else if(cmrzi==2)
					{
						cout<<" YOU ORDER FOR SPRITE HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE SPRITE IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MANAGER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(cmrzi==3)
					{
						cout<<" YOU ORDER FOR DEW HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE DEW IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MANAGER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(cmrzi==4)
					{
						cout<<" YOU ORDER FOR 7--UP HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE 7--UP IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MANAGER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else
					
					{
						cout<<" invalid ENTRY . "<<endl;
					}
				
			}
			else if(chosi==3)
			{
				cout<<" YOU WANT TO ORDER SHAKES : ";
				cout<<" ENTER FLAVOUR : (1-4) : ";
				int smrzi;
				cin>>smrzi;
				if(smrzi==1)
				{
					cout<<" YOU ORDER FOR BANANA SHAKE HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE SHAKE IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					
					}
					else if(smrzi==2)
					{
						cout<<" YOU ORDER FOR OREO SHAKE HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE SHAKE IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(smrzi==3)
					{
						cout<<" YOU ORDER FOR MANGO SHAKE HAS BEEN PLACED  ";
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE SHAKE IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(smrzi==4)
					{
						cout<<" YOU ORDER FOR APPLE SHAKE HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE SHAKE IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else
					
					{
						cout<<" invalid ENTRY . "<<endl;
					}	
			
	}
	       else if(chosi==4)
			{
				cout<<" YOU WANT TO ORDER PIZZA : ";
				cout<<" ENTER FLAVOUR : (1-4) : ";
				int pmrzi;
				cin>>pmrzi;
				if(pmrzi==1)
				{
					cout<<" YOU ORDER FOR CHICKEN FAJITA HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE PIZZA IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					
					}
					else if(pmrzi==2)
					{
						cout<<" YOU ORDER FOR CHICKEN TIKKA  HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE PIZZA IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(pmrzi==3)
					{
						cout<<" YOU ORDER FOR GREEK PIZZA HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE PIZZA IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else if(pmrzi==4)
					{
						cout<<" YOU ORDER FOR ST.LOUIS PIZZA HAS BEEN PLACED  "<<endl;
					srand(time(NULL));
					
					cout<<" YOUR ID TO TAKE PIZZA IS  "<<rand()<<endl;
					cout<<" KINDLY SHOW THIS ID TO MEAL GIVER ON YOUR MOVIE DAY . THANK YOU  "<<endl;
					}
					else
					
					{
						cout<<" invalid ENTRY . "<<endl;
					}
	
				}
				else 
				{
					cout<<" PLEASE SELECT 1-4 : "<<endl;
					dis_meal(); // function call
				}
			}
	
	
};



class guest:public LOG
{
	public:
    	string userName[2];  // array
    	int pas[2];
    	string loginName[2];
    	int pass[2];
    	int age[2];
    	int ss;
	public:
		guest() // default constructor
		{
			int i=0;
			
			pas[i]=0;
			age[i]=0;
			pass[i]=0;
		}
		void dis_menu() // displaying menu 
		{
		cout<<"		**************************************************************************"<<endl;
		cout<<"		**************************************************************************" <<endl<<endl;

    cout<<"     ___           _      ___ _                       _"<<endl;
    cout<<"    | _ ) ___  ___| |__  / __(_)_ _  ___ _ __  __ _  | |"<<endl;
    cout<<"    | _ \\/ _ \\/ _ \\ / / | (__| | ' \\/ -_) '  \\/ _` | |_|"<<endl;
    cout<<"    |___/\\___/\\___/_\\_\\  \\___|_|_||_\\___|_|_|_\\__,_| (_)"<<endl;


			    cout<<"   ###### YOUR ULTIMATE STOP FOR CINEMA BOOKING ######"<<endl<<endl;
    			cout<<" ****************************************************************"<<endl;
     			cout<<" =============   WELCOME TO BOOK CINEMA  ============= "<<endl<<endl;;
       			cout<<" =============    SELECT ONE OF THE FOLLOWING CHOICES ========"<<endl<<endl; 
         		cout<<"      		1 ==>  REGISTER - Make a new Account "<<endl;
          		cout<<"      		2 ==>  LOGIN - Use existing Account"<<endl;
           		cout<<"      		3 ==>  GUEST - Login as guest "<<endl;
                cout<<"      		4 ==>  FOOD FACTORY - Pre order food befor reaching cinema "<<endl;
                cout<<"             	5 ==>  QUIT - To exit "<<endl;
                
                int choice;
                cout<<" Please enter the choice: ";
                cin>>choice; // ceck choice
                if(choice==1)
				{
                	system("cls"); // clear screen
                	dis_register();
				}
				else if(choice==2)
				{
					system("cls");
					dis_login();
				}
				else if(choice==3)
				{
					system("cls");
					dis_guest();
					int cc; // checking choice
					cout<<" IF YOU WANT TO BUY TICKET FIRST REGISTER YOURSELF PRESS 1 TO REGISTER : ";
					cin>>cc;
					if(cc==1)
					{
						dis_register();
					}
				}
				else if(choice==4)
				{
						system("cls");
					dis_ref();
					
				}
				else if(choice==5)
				{
						system("cls");
					dis_exit();
				}
				else{
					cout<<" INVALID ENTRY ==> PLEASE PRESS 1-4 ONLY "<<endl<<endl<<endl;
					dis_menu();
				}
		}
		void dis_register()
		{
				
      cout<<"   _____            _     "<<endl;
      cout<<"  |  __ \\          (_)   | |"<<endl;
      cout<<"  | |__) |___  __ _ _ ___| |_ ___ _ __"<<endl;
      cout<<"  |  _  // _ \\/ _` | / __| __/ _ \\ '__|"<<endl;
      cout<<"  | | \\ \\  __/ (_| | \\__ \\ ||  __/ |"<<endl;
      cout<<"  |_|  \\_\\___|\\__, |_|___/\\__\\___|_|"<<endl;
      cout<<"               __/ |"<<endl;
      cout<<"              |___/"<<endl;

				cout<<" YoU want to register an account/create new account   "<<endl;
				cin.ignore();
				char yn;
				int i=0;
				do 
				{
					cout<<" Enter age : ";
					cin>>age[i];
					cin.ignore();
					cout<<" Enter username : ";
					getline(cin,userName[i]);
					
					cout<<" Enter password in integers : ";
					cin>>pas[i];
					
					cout<<" You have registered successfully . "<<endl;
					cout<<"Do you want to register another account?"<<endl;
					cout<<"Press y for Yes and n for No : ";
					cin>>yn;	
					i++;
					if(yn=='n' || yn=='N')
					{
						system("cls");
					}
					
				}while(yn=='y' || yn=='Y');
				dis_menu();
			
		}
		void dis_login()
		{
			int i=0;
			cout<< "_____________________________________________________________"<<endl;
			cout<<"______________________________________________________________"<<endl;
			cout<<"			  _             _       "<<endl;
			cout<<"			 | |           (_)      "<<endl;
			cout<<"			 | |   __   _ _ _ _ _  "<<endl;
			cout<<"			 | |  /  \\ / ` | | ' \\ "<<endl;
			cout<<"			 | |_| () | (| |_|_|_| "<<endl;
			cout<<"			 |____\\__/ \\ | | "<<endl;
			cout<<"			           __/ |        "<<endl;
			cout<<"			          |___/        "<<endl;
			cout<<"___________________________________"<<endl;
			cout<<endl;
			cout<<"|||||||||||||||||||||||||Login into your Account||||||||||||||||||||||||||"<<endl;
			cout<<"___________________________________________________________________________"<<endl;
			cout<<endl;
			cin.ignore();
			cout<<" Enter Username : ";
			getline(cin,loginName[i]);
			cout<<" Enter password in integers : ";
			cin>>pass[i];
			
			for(int j=0;j<1;j++) //loop to check EQUAL names 
			{
			
				if(loginName[i]==userName[j] && pass[i]==pas[j])
				{
					cout<<"Login SuccesFull"<<endl;
					dis_movieDashboard();
					dis_table();
					
					cout<<"Do you want to buy ticket. Press y for Yes and n for No : ";
					char tb;
					cin>>tb;
					if(tb=='y'|| tb=='Y')
					{
						cout<<"Which movie ticket you want to buy"<<endl;
						cout<<"Press 1 for Avengers"<<endl;
						cout<<"Press 2 for Jumanji"<<endl;
						cout<<"Press 3 for Teefa in Trouble"<<endl;
						cout<<"Press 4 for Minions"<<endl;
						int mn;
						cout<<"Enter your movie choice :";
						cin>>mn;
						if(mn==1){
							cout<<"You have selected Avengers"<<endl;
							cout<<"Which seat you want to buy"<<endl;
							cout<<"1. Silver Seat"<<endl<<"2. Gold Seat"<<endl<<"3. Platinum Seat"<<endl;
							cout<<"Enter the seat number (1-3) :";
							cin>>ss;
							if(ss==1){
								cout<<"You have successfuly bought Silver Seat ticket for Avengers"<<endl;
								dis_exit();
							}
							else if(ss==2){
								cout<<"You have successfuly bought Gold Seat ticket for Avengers"<<endl;
								dis_exit();
							}
							else if(ss==3){
								cout<<"You have successfuly bought Platinum Seat ticket for Avengers"<<endl;
								dis_exit();
							}
							else {
								cout<<"Invalid Input"<<endl;
							}
						}
						else if(mn==2){
							cout<<"You have selected Jumanji"<<endl;
							cout<<"Which seat you want to buy"<<endl;
							cout<<"1. Silver Seat"<<endl<<"2. Gold Seat"<<endl<<"3. Platinum Seat"<<endl;
								cout<<"Enter the seat number (1-3) :";
							cin>>ss;
							if(ss==1){
								cout<<endl<<"You have successfuly bought Silver Seat ticket for Jumanji"<<endl<<endl;
								dis_exit();
							}
							else if(ss==2){
								cout<<endl<<"You have successfuly bought Gold Seat ticket for Jumanji"<<endl<<endl;
								dis_exit();
							}
							else if(ss==3){
								cout<<endl<<"You have successfuly bought Platinum Seat ticket for Jumanji"<<endl<<endl;
								dis_exit();
							}
							else {
								cout<<"Invalid Input"<<endl;
							}
						}
						else if(mn==3){
							cout<<"You have selected Teefa in Trouble"<<endl;
							cout<<"Which seat you want to buy"<<endl;
							cout<<"1. Silver Seat"<<endl<<"2. Gold Seat"<<endl<<"3. Platinum Seat"<<endl;
								cout<<"Enter the seat number (1-3) :";
							cin>>ss;
							if(ss==1){
								cout<<endl<<"You have successfuly bought Silver Seat ticket for Teefa in Trouble."<<endl<<endl;
								dis_exit();
								
							}
							else if(ss==2){
								cout<<endl<<"You have successfuly bought Gold Seat ticket for Teefa in Trouble."<<endl;
								dis_exit();
							}
							else if(ss==3){
								cout<<endl<<"You have successfuly bought Platinum Seat ticket for Teefa in Trouble."<<endl<<endl;
								dis_exit();
							}
							else {
								cout<<"Invalid Input"<<endl;
							}
						}
						else if(mn==4){
							cout<<"You have selected Minions"<<endl;
							cout<<"Which seat you want to buy"<<endl;
							cout<<"1. Silver Seat"<<endl<<"2. Gold Seat"<<endl<<"3. Platinum Seat"<<endl;
								cout<<"Enter the seat number (1-3) :";
							cin>>ss;
							if(ss==1){
								cout<<endl<<"You have successfuly bought Silver Seat ticket for Minions"<<endl<<endl;
								dis_exit();
							}
							else if(ss==2){
								cout<<endl<<"You have successfuly bought Gold Seat ticket for Minions"<<endl<<endl;
								dis_exit();
							}
							else if(ss==3){
								cout<<endl<<"You have successfuly bought Platinum Seat ticket for Minions"<<endl<<endl;
								dis_exit();
							}
							else {
								cout<<"Invalid Input"<<endl;
							}
						}
						else{
							cout<<"Invalid Movie Number"<<endl;
						}
					}
				}
				else {
					cout<<"Invalid User Name and Password"<<endl;
				}
			}
		}
		void dis_movieDashboard() // display dashboard
		{
			cout<<"*********************\n";
			cout<<"*********************\n";
cout<<"  ___          _    _                      _   _   ___ _"<<endl;                  
cout<<" |   \\ __ _ __| |_ | |__  ___  __ _ _ _ __| | | | / __| |_  ___  __ __  __"<<endl;
cout<<" | |) / _` (_-< ' \\| '_ \\/ _ \\/ _` | '_/ _` | | | \\__ \\ ' \\/ _\  V  V  /(_-<"<<endl;
cout<<" |___/\\__,_/__/_||_|_.__/\\___/\\__,_|_| \\__,_| | | |___/_||_\\___/\\_/\\_/ /__/"<<endl;
cout<<"                                              |_|                         "<<endl;                       
			cout<<"*******Dashboard:All shows here******\n"<<endl;
		}
		void dis_table()
		{
			cout<<"=========================================================================================================="<<endl;
	cout<<"                                               MOVIES LIST                                                "<<endl;
	cout<<"=========================================================================================================="<<endl;
	cout<<" MOVIE NO "<<"\t"<<"MOVIE NAME "<<"\t\t	"<<" RATING "<<"\t"<<" AGE RESTRICTION "<<"\t"<<" PRICES "<<endl;
	cout<<"=========================================================================================================="<<endl;
	cout<<"    1\t"<<"\t"<<"Avangers: End Game "<<"\t\t"<<"  8.4* "<<"\t\t"<<"      14+ "<<"\t\t"<<" Silver:   800RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Gold:     1200RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Platinum: 1800RS "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"    2\t"<<"\t"<<"Jumanji: Welcome to the Jungle "<<"\t"<<"  6.9* "<<"\t\t"<<"      16+ "<<"\t\t"<<" Silver:   800RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Gold:     1200RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Platinum: 1800RS "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"    3\t"<<"\t"<<"Teefa in Trouble "<<"\t\t"<<"  7.2* "<<"\t\t"<<"      7+ "<<"\t\t"<<" Silver:   800RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Gold:     1200RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Platinum: 1800RS "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	
	cout<<"    4\t"<<"\t"<<"Minions "<<"\t\t\t"<<"  6.4* "<<"\t\t"<<"      4+ "<<"\t\t"<<" Silver:   800RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Gold:     1200RS "<<endl;
	cout<<" "<<"\t\t\t\t\t\t\t\t\t\t\t Platinum: 1800RS "<<endl;
	cout<<"=========================================================================================================="<<endl;
		}
			
		void dis_guest()
		{
					cout<<"*************************GUEST VIEW*************************"<<endl;
					dis_movieDashboard();
					dis_table();
				
					cout<<"As you have signed in as a guest you are unable to buy tickets"<<endl;
		}
		
};
int main()
{
	guest g;
	g.dis_menu();
}
	
	


