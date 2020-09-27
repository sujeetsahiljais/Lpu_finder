#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>

using namespace std;
char sn[10];
class section
{
        protected:  string sm,hd,cc;
        public:
        void getdata_A(string s1,string s2,string s4)
        {
                sm=s2;
                hd=s3;
                cc=s4;
                ofstream outf(sn,ios::app);
                outf<<sm <<"    " <<hd <<"    "<<cc<<"  ";
                outf.close();
        }
        void getsec()
        {
                cout<<"enter the secion name "<<endl;
                cin>>sn;

        }
};
class placement:public section
{

        string pm,sc,ec,pc;
    public:
        void getdata_A();
        void getdata_p(string s5,string s6,string s,string s8)
        {

                pm=s5;
                sc=s6;
                ec=s7;
                pc=s8;
                ofstream outf(sn,ios::app);
                outf<<pm <<"    " <<sc <<"  " <<ec <<"  " <<pc<<endl;
                outf.close();
        }
        void display()
        {


                cout<<"Enter the Section Name "<<endl;
                cin>>sn;
                ifstream inf(sn);
                inf >>sm;
                inf>>hd;
                inf>>cc;
                inf >>pm;
                inf>>sc;
                inf>>ec;
                inf>>pc;
                cout<<endl <<"The section details are: "<<endl;
                cout<<"Section Mentor      | "<<sm<<endl<<endl<<"Section HOD         | "<<hd<<endl<<endl<<"Course Coordinator  | "<<cc<<endl<<endl;
                cout<<"Placement Mentor    | "<<pm<<endl<<endl<<"Student Councellor  | "<<sc<<endl<<endl<<"E-Cell Cordinator   | "<<ec<<endl<<endl<<"Placement Coordiator| "<<pc<<endl;
        }
};
int main()
{
        string mentor,HOD,CourseCoordinator,pM,sC,Ecell,PC;
        int ch;
        system("color 02");
        section s;
        placement p;
        cout<<"                             WELCOME TO LPU FINDER"<<endl;
    p:  cout<<endl <<"Press [1] : To enter data  "<<endl <<"      [2] : Search deatial of perticular section "<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cin>>c;
        switch (c)
        {
            case 1:
            while(1)
            {
                s.getsec();
                cout<<"enter the section mentor name"<<endl;
                cin >>mentor;
                cout<<"enter the section HOD name :" <<endl;
                cin >> HOD;
                cout<<"enter the course coordinator name :"<<endl;
                ci>>CourseCoordinator;
                cout<<"enter the placement mentor "<<endl;
                cin >> pM;
                cout<<"enter the student councellor name : "<<endl;
                cin >>sC;
                cout<<"enter the  E-Cell coordinator "<<endl;
                cin>>Ecell;
                cout<<"enter the placement coordinator "<<endl;
                cin>>PC;
                s.getdata_A(mentor,HOD,CourseCoordinator);
                p.getdata_p(pM,sC,Ecell,PC);
                cout<<"continue  Y/N "<<endl;
                char c=getch();
                if(c=='N'|| c=='n')
				break;
        }
        cout<<"data written succesfully "<<endl;
				goto p;
				break;
            case 2:
                    p.display_();
            default:
                    cout<<"enter a valid data"<<endl;
    }
            getch();
}




























.
