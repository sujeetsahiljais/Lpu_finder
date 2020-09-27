#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<conio.h>
void mentor();
void HOD();
void coordinators();
void placement();
void counsellor();
void E_cell();
void placement_co();
using namespace std;
class welcome
{
	char name[20];
	public:
		void display_name();
};
void welcome::display_name(void)
{
	char name[50];
	cout<<"Please enter your NAME"<<"\n";
	cin>>name;
	cout<<"***************************************  LPU FINDER Welcomes You  "<<name<<"*************************************************"<<"\n";
}
class file
{
	public:
		void show_file();
};
void file::show_file()
{
	ofstream fout;
	fout.open("choice");
	fout<<"Enter ** 1 ** for Mentor for a particular section"<<"\n";
	fout<<"Enter ** 2 ** for Section`s HOD"<<"\n";
	fout<<"Enter ** 3 ** for Coarse Co-Cordinator"<<"\n";
	fout<<"Enter ** 4 ** for Placement Mentor"<<"\n";
	fout<<"Enter ** 5 ** for Student Counsellor"<<"\n";
	fout<<"Enter ** 6 ** for E-Cell Co-Cordinator"<<"\n";
	fout<<"Enter ** 7 ** for Placement Co-Ordinator"<<"\n";
	fout.close();
	const int N=80;
	char line[N];
	ifstream fin;
	fin.open("choice");
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<"\n";
	}
	fin.close();
}
class choice
{
	int c;
	public:
		void choice_c();
};
void choice::choice_c()
{
	int x=c;
	cout<<"TO WHOME YOU ARE SEARCHING FOR? "<<"\n";
	cin>>x;
	system("cls");
	switch (x)
	{
		case 1:cout<<"You choose for Mentor"<<"\n";
		              mentor();
		              break;
		case 2:cout<<"You choose for Section`s HOD"<<"\n";
		              HOD();
		              break;
		case 3:cout<<"You choose for Course coordinators"<<"\n";
		              coordinators();
		              break;
	 	case 4:cout<<"You choose for Placement Mentor"<<"\n";
		              placement();
		              break;
		case 5:cout<<"You choose for Student councellor "<<"\n";
		              counsellor();
		              break;
		case 6:cout<<"You choose for E-cell coordinators"<<"\n";
		              E_cell();
		              break;
	 	case 7:cout<<"You choose for Placement coordinators"<<"\n";
		              placement_co();
		              break;
		default:cout<<"WRONG CHOICE DUDE";
	}
} void coordinators()
{
 		int x;
	cout<<"## SECTION COURSE COORDINATOR ##"<<"\n";
	cout<<"tell us your desired section by entering the corrasponding number"<<"\n";
	cout<<"1 CS-1-CSE"<<"\n"<<"2 CS-1-HTML"<<"\n"<<"3 CS-1-MATH"<<"\n"<<"4 CS-1-PEL"<<"\n"<<"5 CS-1-CHE"<<"\n"<<"6 CS-1-MEC"<<"\n";
    cin>>x;
	switch(x)
    {  
	case 1:cout<<"Course Co-ordinator for CS-1-CSE is MR. ARUN PRAJAPATI"<<"\n";
	          cout<<"you can meet him at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 2:cout<<"Course Co-ordinator for CS-1-HTML is MR. PREM SINGHANIA"<<"\n";
	         cout<<"you can meet him at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 3:cout<<"Course Co-ordinator for CS-1-MATH is MRS.NEELEMA THAKUR"<<"\n";
	              cout<<"you can meet her at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 4:cout<<"Course Co-ordinator for CS-1-PEL is MR. SANJAY CHATURVEDI"<<"\n";
	                  cout<<"you can meet him at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	case 5:cout<<"Course Co-ordinator for CS-1-CHE is MRS. FALAK ANSARI"<<"\n";
	                cout<<"you can meet her at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 6:cout<<"Course Co-ordinator for CS-1-MEC is MR. RAMGOPAL VERMA"<<"\n";
	                  cout<<"you can meet him at -------------"<<"\n";
               cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	default:cout<<"you entered a wrong choice! TRY AGAIN";
    }
 }
 void HOD()
 {
 	{
    cout<<"**** HEAD OF DEPARTMENT ****"<<"\n";
   	cout<<"Enter Your Department to know abour your HEAD OF DEPARTMENT(HOD) from the following ---------->>>>>>"<<"\n";
	cout<<"Enter 1 for department of Object Oriented Programming(CSE)"<<"\n";
	cout<<"Enter 2 for department of  Mathematics(MTH)"<<"\n";
	cout<<"Enter 3 for department of  Communication Skills(PEL)"<<"\n";
	cout<<"Enter 4 for department of  Environmental  Science(CHE)"<<"\n";
	cout<<"Enter 5 for department of  Computer Science(CSE)"<<"\n";
    cout<<"Enter 6 for department of  Internet Programming(HTML)"<<"\n";
    cout<<"Enter 7 for department of  Mechanical Science(MEC)"<<"\n";
    cout<<"Enter 8 for department of  Electronics(ECE)"<<"\n";
	int x;
	cin>>x;
	switch (x)
	{
        case 1:cout<<"                                              |    Your HOD is MR. Himesh Reshamiya|"<<"\n";
               cout<<"you can meet him at -------------             |                                    |"<<"\n";
               cout<<"                                              |            block--> 033            |"<<"\n";
               cout<<"                                              |         Room No.--> 204            |"<<"\n";
               cout<<"                                              |        Cabin No.-->  04            |"<<"\n";
               break;
        case 2:cout<<"                                              |     Your HOD is Mr. ROOPAM THAKUR  |"<<"\n";
               cout<<"you can meet him at -------------             |                                    |"<<"\n";
               cout<<"                                              |               block--> 033         |"<<"\n";
               cout<<"                                              |            Room No.--> 203         |"<<"\n";
               cout<<"                                              |           Cabin No.-->  05         |"<<"\n";
               break;
        case 3:cout<<"                                              |     Your HOD is MRS. MADHUMA MA^AM |"<<"\n";
               cout<<"you can meet her at -------------             |                                    |"<<"\n";
			   cout<<"                                              |               block--> 038         |"<<"\n";
               cout<<"                                              |            Room No.--> 202         |"<<"\n";
               cout<<"                                              |           Cabin No.-->  01         |"<<"\n";
               break;
       case 4:cout<<"                                               |     Your HOD is MR. PRIYANSH BAJPAI|"<<"\n";
              cout<<"you can meet him at -------------              |                                    |"<<"\n"; 
			  cout<<"                                               |         block--> 033               |"<<"\n";
               cout<<"                                              |      Room No.--> 206               |"<<"\n";
               cout<<"                                              |     Cabin No.-->  04               |"<<"\n";
               break;
       case 5:cout<<"                                               | Your HOD is MR. MOHAMMAD FAHAD     |"<<"\n";
              cout<<"you can meet him at -------------              |                                    |"<<"\n";    
              cout<<"                                               |           block--> 038             |"<<"\n";
              cout<<"                                               |        Room No.--> 204             |"<<"\n";
              cout<<"                                               |       Cabin No.-->  02             |"<<"\n";
              break;
       case 6:cout<<"                                               |  Your HOD is MR. PRAKASH RANA      |"<<"\n";
              cout<<"you can meet him at -------------              |                                    |"<<"\n";
			  cout<<"                                               |          block--> 034              |"<<"\n";
              cout<<"                                               |       Room No.--> 203              |"<<"\n";
              cout<<"                                               |      Cabin No.-->  03              |"<<"\n";
               break;
		case 7:cout<<"                                              |Your HOD is MR.   FARUKH       |"<<"\n";
               cout<<"you can meet him at -------------             |                                    |"<<"\n"; 
			   cout<<"                                              |            block--> 033            |"<<"\n";
               cout<<"                                              |         Room No.--> 206            |"<<"\n";
               cout<<"                                              |        Cabin No.-->  04            |"<<"\n";
               break;
		default:cout<<"Wrong Choice";
	}
}
 }
  void placement()
  {
 		int x;
	cout<<"## PLACEMENT COORDINATOR ##"<<"\n";
	cout<<"tell us your desired section by entering the corrasponding number"<<"\n";
	cout<<"1 CS-1-A"<<"\n"<<"2 CS-1-B"<<"\n"<<"3 CS-1-C"<<"\n"<<"4 CS-1-D"<<"\n"<<"5 CS-1-E"<<"\n"<<"6 CS-1-F"<<"\n";
	cin>>x;
	system("cls");
	switch(x)
    {  
	case 1:cout<<"                             __________Placement Co-ordinator for CS-1-A is MR. ARUN PRAJAPATI_________"<<"\n";
	      cout<<"you can meet him at ----------__________                                                       _________"<<"\n"; 
			   cout<<"                         __________                   block--> 033                        _________"<<"\n";
               cout<<"                         __________                Room No.--> 206                        _________"<<"\n";
               cout<<"                         __________    Cabin No.-->  04                                   _________"<<"\n";
	break;
	case 2:cout<<"Placement Co-ordinator for CS-1-B is MR. PREM SINGHANIA"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 205"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
	case 3:cout<<"Placement Co-ordinator for CS-1-C is MRS.NEELEMA THAKUR"<<"\n";
	  cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;
	case 4:cout<<"Placement Co-ordinator for CS-1-D is MR. SANJAY CHATURVEDI"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 032"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	case 5:cout<<"Placement Co-ordinator for CS-1-E is MRS. FALAK ANSARI"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 208"<<"\n";
               cout<<"        Cabin No.-->  08"<<"\n";
	break;
	case 6:cout<<"Placement Co-ordinator for CS-1-F is MR. RAMGOPAL VERMA"<<"\n";
	 cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 034"<<"\n";
               cout<<"         Room No.--> 202"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;	
	default:cout<<"you entered a wrong choice! TRY AGAIN";
    }
 }
     void counsellor()
     {
 		int x;
	cout<<"## STUDENT COUNSELLOR ##"<<"\n";
	cout<<"tell us your desired department by entering the corrasponding number"<<"\n";
	cout<<"1 CSE-Department"<<"\n"<<"2 CIVIL-Deartment"<<"\n"<<"3 MECHANICAL-Department"<<"\n"<<"4 BIO-TECHNOLOGY-Department"<<"\n"<<"5 AEROSPACE-Department"<<"\n";
	cin>>x;
	system("cls");
	switch(x)
    {  
	case 1:cout<<"Student Counsellor for CS-1-A is MR. ARUN PRAJAPATI"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 2:cout<<"Student Counsellor for CS-1-B is MR. PREM SINGHANIA"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 205"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
	case 3:cout<<"Student Counsellor for CS-1-C is MRS.NEELEMA THAKUR"<<"\n";
	  cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;
	case 4:cout<<"Student Counsellor for CS-1-D is MR. SANJAY CHATURVEDI"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 032"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	case 5:cout<<"Student Counsellor for CS-1-E is MRS. FALAK ANSARI"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 208"<<"\n";
               cout<<"        Cabin No.-->  08"<<"\n";
	break;
	default:cout<<"you entered a wrong choice! TRY AGAIN";
    }
 }
    void E_cell()
    {
 	int x;
	cout<<"## E-CELL COORDINATOR ##"<<"\n";
	cout<<"	Choose  your desired Cell by entering the corrasponding number"<<"\n";
	cout<<"1 CS-1-A"<<"\n"<<"2 CS-1-B"<<"\n"<<"3 CS-1-C"<<"\n"<<"4 CS-1-D"<<"\n"<<"5 CS-1-E"<<"\n"<<"6 CS-1-F"<<"\n";
	cin>>x;
	system("cls");
	switch(x)
    {  
	case 1:cout<<"E-cell Co-ordinator for CS-1-A is MR. ARUN PRAJAPATI"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 2:cout<<"E-cell Co-ordinator for CS-1-B is MR. PREM SINGHANIA"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 205"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
	case 3:cout<<"E-cell Co-ordinator for CS-1-C is MRS.NEELEMA THAKUR"<<"\n";
	  cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;
	case 4:cout<<"E-cell Co-ordinator for CS-1-D is MR. SANJAY CHATURVEDI"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 032"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	case 5:cout<<"E-cell Co-ordinator for CS-1-E is MRS. FALAK ANSARI"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 208"<<"\n";
               cout<<"        Cabin No.-->  08"<<"\n";
	break;
	case 6:cout<<"E-cell Co-ordinator for CS-1-F is MR. RAMGOPAL VERMA"<<"\n";
	 cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 034"<<"\n";
               cout<<"         Room No.--> 202"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;	
	default:cout<<"you entered a wrong choice! TRY AGAIN";
    }
 }
     void placement_co()
     {
 		int x;
	cout<<"## PLACEMENT CO-ORDINATOR ##"<<"\n";
	cout<<"tell us your desired section by entering the corrasponding number"<<"\n";
    cout<<"1-K17WP"<<"\n"<<"2-K17WI"<<"\n"<<"3-K17WY"<<"\n"<<"4-K17WG"<<"\n"<<"5-K17WD"<<"\n"<<"6-K17WO"<<"\n"<<"7-K17WW"<<"\n"<<"8-K17WA"<<"\n"<<"9-K17WB"<<"\n"<<"10-K17WN"<<"\n"<<"11-K1630"<<"\n"<<"12-K1631"<<"\n";
	cin>>x;
	system("cls");
	switch(x)
    {  
	case 1:cout<<"Placement Coordinator of this section is MR. PRANJUL SAXENA"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 203"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 2:cout<<"Placement Coordinator of this section is MR. KUSHAL CHAUDHARY"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 208"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
	case 3:cout<<"Placement Coordinator of this section is MRS.PARUL THAKUR"<<"\n";
	  cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;
	case 4:cout<<"Placement Coordinator of this section  is MR. ANSH HABIBI"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 032"<<"\n";
               cout<<"         Room No.--> 24"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;	
	case 5:cout<<"Placement Coordinator of this section is MRS. PRATIBHA MUKHARJEE"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 036"<<"\n";
               cout<<"         Room No.--> 203"<<"\n";
               cout<<"        Cabin No.-->  06"<<"\n";
	break;
	case 6:cout<<"Placement Coordinator of this section is MR. NISHANT PRAJAPATI"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 203"<<"\n";
               cout<<"        Cabin No.-->  04"<<"\n";
	break;
	case 7:cout<<"Placement Coordinator of this section is MR. AFNAN KHAN"<<"\n";
	      cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 204"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
	case 8:cout<<"Placement Coordinator of this section is MRS.MARIA KHAN"<<"\n";
	  cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 038"<<"\n";
               cout<<"         Room No.--> 206"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;
	case 9:cout<<"Placement Coordinator of this section  is MR. ANSHUMAN"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 034"<<"\n";
               cout<<"         Room No.--> 203"<<"\n";
               cout<<"        Cabin No.-->  05"<<"\n";
	break;	
	case 10:cout<<"Placement Coordinator of this section is MRS. ANJALI SHRIVASTAVA"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 203"<<"\n";
               cout<<"        Cabin No.-->  02"<<"\n";
	break;
		case 11:cout<<"Placement Coordinator of this section  is MR. ABHISHEK RAJPUT"<<"\n";
           cout<<"you can meet him at -------------"<<"\n"; 
			   cout<<"            block--> 034"<<"\n";
               cout<<"         Room No.--> 209"<<"\n";
               cout<<"        Cabin No.-->  01"<<"\n";
	break;	
	case 12:cout<<"Placement Coordinator of this section is MRS. POONAM ALNAANI"<<"\n";
	 cout<<"you can meet her at -------------"<<"\n"; 
			   cout<<"            block--> 033"<<"\n";
               cout<<"         Room No.--> 207"<<"\n";
               cout<<"        Cabin No.-->  03"<<"\n";
	break;
	default:cout<<"you entered a wrong choice! TRY AGAIN";
    }
 }
void mentor()
{   
    cout<<"**** SECTION MENTOR ****"<<"\n";
    string se; 
  	string s1=("K17WP");
    string s2=("K17WI");
    string s3=("K17WY");
    string s4=("K17WG");
    string s5=("K17WJ");
    string s6=("K17WO");
    string s7=("K17WW");
    string s8=("K17WA");
    string s9=("K17WB");
    string s10=("K17WN");
    string s11=("K1630");
    string s12=("K1631");
    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<s3<<"\n";
    cout<<s4<<"\n";
    cout<<s5<<"\n";
    cout<<s6<<"\n";
    cout<<s7<<"\n";
    cout<<s8<<"\n";
    cout<<s9<<"\n";
    cout<<s10<<"\n";
    cout<<s11<<"\n";
    cout<<s12<<"\n";
    cout<<"ENTER YOUR SECTION NAME FROM THE FOLLOWING"<<"\n";
    cin>>se;
    if(se==s1||se==s2||se==s3||se==s4||se==s5||se==s6||se==s7||se==s8||se==s9||se==s10||se==s11||se==s12)
    {
    	if(se==s1)
    	{
    	cout<<"Section Mentor of this particular section is MRS. SHIRANJEET KAUR MA^AM"<<"\n";
    	cout<<"                   BLOCK NO. --> 033"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 206"<<"\n";
    	cout<<"                    CABIN NO,--> 08"<<"\n";
        }
        else if(se==s2)
        {
        cout<<"Section Mentor of this particular section is MR. PRIYANSHU PATHAK SIR"<<"\n";
        cout<<"                   BLOCK NO. --> 032"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 202"<<"\n";
    	cout<<"                    CABIN NO,--> 03"<<"\n";
		}
		 	if(se==s3)
    	{
    	cout<<"Section Mentor of this particular section is MR. DEEPAK SISODIA SIR"<<"\n";
    	cout<<"                   BLOCK NO. --> 033"<<"\n";
		cout<<"You can meet her at ROOM NO. --> 210"<<"\n";
    	cout<<"                    CABIN NO,--> 07"<<"\n";
        }
        else if(se==s4)
        {
        cout<<"Section Mentor of this particular section is MRS. SHREYA MA^AM"<<"\n";
        cout<<"                   BLOCK NO. --> 038"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 202"<<"\n";
    	cout<<"                    CABIN NO,--> 06"<<"\n";
		}
		 	if(se==s5)
    	{
    	cout<<"Section Mentor of this particular section is MR. RUPESH RASHTOGI SIR"<<"\n";
    	cout<<"                   BLOCK NO. --> 038"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 203"<<"\n";
    	cout<<"                    CABIN NO,--> 09"<<"\n";
        }
        else if(se==s6)
        {
        cout<<"Section Mentor of this particular section is MR. PRASHU SHARMA SIR"<<"\n";
        cout<<"                   BLOCK NO. --> 034"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 208"<<"\n";
    	cout<<"                    CABIN NO,--> 06"<<"\n";
		}
		 	if(se==s7)
    	{
    	cout<<"Section Mentor of this particular section is MR. KUSHAL TALWAR SIR"<<"\n";
    	cout<<"                   BLOCK NO. --> 034"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 211"<<"\n";
    	cout<<"                    CABIN NO,--> 11"<<"\n";
        }
        else if(se==s8)
        {
        cout<<"Section Mentor of this particular section is MRS. SHIVAM THAKUR SIR"<<"\n";
        cout<<"                   BLOCK NO. --> 034"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 202"<<"\n";
    	cout<<"                    CABIN NO,--> 09"<<"\n";
		}
		 	if(se==s9)
    	{
    	cout<<"Section Mentor of this particular section is MRS. SHRADDHA  MA^AM"<<"\n";
    	cout<<"                   BLOCK NO. --> 038"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 201"<<"\n";
    	cout<<"                    CABIN NO,--> 06"<<"\n";
        }
        else if(se==s10)
        {
        cout<<"Section Mentor of this particular section is MRS. NAVED QUERESHI SIR"<<"\n";
        cout<<"                   BLOCK NO. --> 038"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 205"<<"\n";
    	cout<<"                    CABIN NO,--> 05"<<"\n";
		} 	if(se==s11)
    	{
    	cout<<"Section Mentor of this particular section is MRS. MAHAK GUPTA MA^AM"<<"\n";
    	cout<<"                   BLOCK NO. --> 033"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 207"<<"\n";
    	cout<<"                    CABIN NO,--> 08"<<"\n";
        }
        else if(se==s12)
        {
        cout<<"Section Mentor of this particular section is MR. SHASHANK CHAUHAN SIR"<<"\n";
        cout<<"                   BLOCK NO. --> 038"<<"\n";
    	cout<<"You can meet her at ROOM NO. --> 206"<<"\n";
    	cout<<"                    CABIN NO,--> 09"<<"\n";
		}
	}
	else 
	{
		cout<<"SORRY! you entered wrong section name ";
	}
}
int main()
{    int i;
    char a;
    do
	{
	welcome y;
	y.display_name();
    file f;
	f.show_file();
	choice ch;
	ch.choice_c();
	cout<<"Enter 1 to return to Main Menu or 0 to exit";
	cin>>i;
	system("cls");
	 cout<<" Did it help you? We are waiting for your  your valuable feedback y/n"<<"\n";
    cin>>a;
    if(a=='y')
    {
    	cout<<"THANK YOU VERY MUCH"<<"\n""\n""\n""\n""\n""\n";
    }
    else
	{
    	cout<<"Sorry! for inconviniency.\n\n\n\n\n\n";
	}
    }
	while(i);
   	return 0;
}


