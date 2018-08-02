#include<fstream.h>
#include<process.h>
#include<string.h>
#include<conio.h>
int choice,movie,theatre,seats,show,i,c,flag=1;
char ch,pass[20],id[40];
class registry
{ char fname[20], sname[20], city[20], password[20], email_id[40];
  public : void getdata();
	   char *getfname()
	   { return fname; }
	   char *getsname()
	   { return sname; }
	   char *getid()
	   { return email_id; }
	   char *getpass()
	   { return password; }
} customer,person;
void registry::getdata()
{ textcolor(WHITE); textbackground(BLACK); cout<<"\n\n\n\t\t";
  cprintf(" ENTER YOUR FIRST NAME      : ");
  textcolor(BLACK); textbackground(WHITE);
  cscanf("%s",fname);
  textcolor(WHITE); textbackground(BLACK); cout<<"\n\n\t\t";
  cprintf(" ENTER YOUR SECOND NAME     : ");
  textcolor(BLACK); textbackground(WHITE);
  cscanf("%s",sname);
  textcolor(WHITE); textbackground(BLACK); cout<<"\n\n\t\t";
  cprintf(" ENTER YOUR CITY            : ");
  textcolor(BLACK); textbackground(WHITE);
  cscanf("%s",city);
  textcolor(WHITE); textbackground(BLACK); cout<<"\n\n\t\t";
  cprintf(" ENTER YOUR EMAIL ID        : ");
  textcolor(BLACK); textbackground(WHITE);
  cscanf("%s",email_id);
  textcolor(WHITE); textbackground(BLACK); cout<<"\n\n\t\t";
  cprintf(" ENTER PASSWORD             : ");
  i=0;            getch();
  while(i!=20)
  { ch=getch();
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    { password[i++]=ch;
      textcolor(BLACK); textbackground(WHITE);
      cprintf("*"); }
    if(ch=='\b' && i>=1)
    { cout<<"\b \b"; --i; }
    if(ch==13)
    { password[i]='\0'; break; }
  }
}

void main()
{ clrscr();
 while(choice!=6)
 {clrscr();
  window(1,1,80,25);
  textbackground(6); cprintf(" "); clrscr();
  textcolor(RED);
  textbackground(BLACK);
  cout<<"\n\n ";
  cprintf("               MM    MM  Y   Y    ****  *  *  ****  *       *  "); cout<<"\n ";
  cprintf("                    M M  M M   Y Y     *     *  *  *  *  *       *  "); cout<<"\n ";
  cprintf("                   M  MM  M    Y      ****  ****  *  *   *  *  *   "); cout<<"\n ";
  cprintf("                    M      M    Y         *  *  *  *  *   * * * *   "); cout<<"\n ";
  cprintf("               M      M    Y      ****  *  *  ****    *   *    "); cout<<"\n ";
  textbackground(6);
  cout<<"\n\n\t\t";
  textcolor(WHITE);  textbackground(9);
  cprintf("       Welcome to ");
  textcolor(GREEN+BLINK);
  cprintf("Book My Show      ");
  cout<<"\n\n\t";
  textcolor(5);  textbackground(BLACK);
  cprintf("             MENU                    "); cout<<"\n\t";
  cprintf("                                     "); cout<<"\n\t";
  textcolor(3);
  cprintf("      1. MOVIES                      "); cout<<"\n\t";
  cprintf("      2. THEATRES                    ");cout<<"\n\t";
  cprintf("      3. TICKET Booking              "); cout<<"\n\t";
  cprintf("      4. SIGN IN                     "); cout<<"\n\t";
  cprintf("      5. REGISTER                    "); cout<<"\n\t";
  cprintf("      6. EXIT                        "); cout<<"\n\t";
  cprintf("                                     "); cout<<"\n\t";
  cprintf("                                     "); cout<<"\n\n\t     ";
  textcolor(WHITE);
  cprintf("CHOICE = ");
  cscanf("%d",&choice);
  clrscr();
  switch(choice)
  { case 1 : textbackground(5); cprintf(" "); clrscr();
	     window(8,6,30,21);
	     textbackground(BLUE); textcolor(WHITE);
	     cprintf("                        85% CHENNAI EXPRESS                           72% BESHARAM                                  44% GRAAND MASTII                             90% THE LUNCH BOX                             60% AASHIQUI II                               43% Ek Tha TIGER                              50% MADRAS CAFE                              ");
	     window(35,6,58,21);
	     textbackground(GREEN); textcolor(WHITE);
	     cprintf("                         BESHARAM (HINDI)                                RAJA RANI (TAMIL)                               ELYSIUM (ENGLISH)                               GRAAND MASTI (HINDI)                            THE LUNCH BOX (HINDI)                           CHENNAI EXPRESS (HINDI)                         SKYFALL (ENGLISH)                              ");
	     window(63,6,75,21);
	     textbackground(RED); textcolor(WHITE);
	     cprintf("              DHOOM 3                   KRISH 3                   RAM LEELA                 DIANA                     BULLET RAJA               DON III                   DABBANG III              ");
	     window(8,3,30,5);
	     textbackground(BLACK); textcolor(BLUE);
	     cprintf("    TOP   MOVIES   IN       YOUR   REGION     ");
	     window(35,3,58,5);
	     textbackground(BLACK); textcolor(GREEN);
	     cprintf("    NOW   PLAYING   IN           THEATRES       ");
	     window(63,3,75,5);
	     textbackground(BLACK); textcolor(RED);
	     cprintf(" COMING SOON              ");
	     getch(); getch(); break;

    case 2 : textbackground(BLUE); getch(); clrscr();
	     window(2,2,36,2); textcolor(CYAN); textbackground(BLACK);
	     cprintf("           THEATRES             ");
	     window(37,2,43,2); textcolor(GREEN); textbackground(BLACK);
	     cprintf(" CODE ");
	     window(46,2,54,2); textcolor(5); textbackground(BLACK);
	     cprintf(" SHOW 1 ");
	     window(58,2,66,2); textcolor(5); textbackground(BLACK);
	     cprintf(" SHOW 2 ");
	     window(70,2,79,2); textcolor(5); textbackground(BLACK);
	     cprintf(" SHOW 3 ");
	     cout<<"\n\n";
	     window(1,5,80,25); textcolor(YELLOW); textbackground(BLACK);
	     cprintf(" DT Star Cinemas, DLF Promenade Mall  1    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" DT Star Cinemas, DLF Place Mall      2    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" DT Cinemas     , DLF Centre Mall     3    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" DT Cinemas     , DLF Mega Mall       4    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" DT Cinemas     , DLF Star Mall       5    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" SRS Cinemas    , Sohna Road          6    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" PVR Cinemas    , M G Road            7    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" PVR Cinemas    , Vasant Kunj         8    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" PVR Cinemas    , Vasant Vihar        9    12:00- 3:00  4:00-7:00  8:00-11:00   "); cout<<"\n";
	     cprintf(" PVR Cinemas    , Vikaspuri          10    12:00- 3:00  4:00-7:00  8:00-11:00   ");
	     getch(); break;

    case 3 : textbackground(LIGHTGREEN); cprintf(" "); clrscr();
	     cout<<"\n\t\t"; textcolor(BLUE);
	     cprintf("     TICKET BOOKING COUNTER ");
	     if(flag)
	     { if(strcmp(customer.getfname(),NULL)==0)
	       { textcolor(RED+BLINK); textbackground(BLACK); cout<<"\n\n\n\n\t";
		 cprintf(" SIGN IN (if already have an account) "); cout<<"\n\t";
		 cprintf(" Else get REGISTER YOURSELF first "); }
	       else
	       { cout<<"\n\n\t\t\t\t Welcome "<<customer.getfname();
		 textcolor(BROWN); cout<<endl;
		 cprintf("    Select Movie   "); cout<<endl;
		 cprintf("  1. Chennai Express "); cout<<endl;
		 cprintf("  2. Besharam        "); cout<<endl;
		 cprintf("  3. Aashiqui II     "); cout<<endl;
		 cprintf("  4. The Lunch Box   "); cout<<endl;
		 cprintf("  5. Skyfall         "); cout<<endl<<endl;
		 cprintf("  Choice = ");         cin>>movie;
		 cout<<endl;
		 cprintf(" Enter Code of the Theatre(1-10)");  cin>>theatre;
		 cout<<endl;
		 cprintf(" Enter the show no. "); cin>>show;
		 cout<<endl;
		 cprintf(" Enter no. of seats "); cin>>seats;
		 clrscr(); gotoxy(1,6);
		 cout<<"---------------------------------------------------------------------------------";
		 textcolor(RED);  cout<<"\n\t\t\t";  cprintf(" TICKET ");
		 textcolor(BLACK);    cout<<endl;
		 cprintf(" Customer Name :  %s",customer.getfname());  cout<<endl;
		 cprintf(" Movie         :");
		 switch(movie)
		 { case 1 : cprintf("Chennai Express"); break;
		   case 2 : cprintf("Besharam       "); break;
		   case 3 : cprintf("Aashiqui II    "); break;
		   case 4 : cprintf("The Lunch Box  "); break;
		   case 5 : cprintf("SkyFall        "); break; }
		 cout<<endl;
		 cprintf(" Theatre       :");
		switch(theatre)
		{  case 1 : cprintf("DT Star Cinemas, DLF Promenade Mall "); break;
		   case 2 : cprintf("DT Star Cinemas, DLF Place Mall     "); break;
		   case 3 : cprintf("DT Cinemas  , DLF Centre Mall       "); break;
		   case 4 : cprintf("DT Cinemas  , DLF Mega Mall         "); break;
		   case 5 : cprintf("DT Cinemas  , DLF Star Mall         "); break;
		   case 6 : cprintf("SRS Cinemas , Sohna Road            "); break;
		   case 7 : cprintf("PVR Cinemas , M G Road              "); break;
		   case 8 : cprintf("PVR Cinemas , Vasant Kunj           "); break;
		   case 9 : cprintf("PVR Cinemas , Vasant Vihar          "); break;
		   case 10: cprintf("PVR Cinemas , Vikaspuri             "); break; }
		 cout<<endl;
		 cprintf(" Show timings  :  ");
		switch(show)
		{ case 1 : cprintf("12:00-3:00"); break;
		  case 2 : cprintf(" 4:00-7:00"); break;
		  case 3 : cprintf("7:00-11:00"); break; }
		cout<<endl;
	       cprintf(" Seats Booked   :  %d",seats); cout<<endl;
	       cprintf(" Cost           : Rs %d",seats*200); cout<<endl;
	       cout<<"------------------------------------------------------------------------------"; getch();
	     }   }
	     else
	     { cout<<"\n\n\t\t\t\t Welcome "<<person.getfname();
		 textcolor(RED); cout<<endl;
		 cprintf("     Select Movie   "); cout<<endl;
		 cprintf(" 1. Chennai Express "); cout<<endl;
		 cprintf(" 2. Besharam        "); cout<<endl;
		 cprintf(" 3. Aashiqui II     "); cout<<endl;
		 cprintf(" 4. The Lunch Box   "); cout<<endl;
		 cprintf(" 5. Skyfall         "); cout<<endl<<endl;
		 cprintf("  Choice = "); cin>>movie;
		 cout<<endl;
		 cprintf(" Enter Code of the Theatre ");  cin>>theatre;
		 cout<<endl;
		 cprintf(" Enter the show no. "); cin>>show;
		 cout<<endl;
		 cprintf(" Enter no. of seats "); cin>>seats;
		 clrscr(); gotoxy(1,6);
		 cout<<"------------------------------------------------------------------------------";
		 textcolor(RED);   cout<<"\n\t\t\t"; cprintf(" TICKET ");
		 textcolor(BLACK); cout<<endl;
		 cprintf(" Customer Name : %s",person.getfname()); cout<<endl;
		 cprintf(" Movie         : ");
		 switch(movie)
		 { case 1 : cprintf("Chennai Express"); break;
		   case 2 : cprintf("Besharam       "); break;
		   case 3 : cprintf("Aashiqui II    "); break;
		   case 4 : cprintf("The Lunch Box  "); break;
		   case 5 : cprintf("SkyFall        "); break; }
		 cout<<endl;
		 cprintf(" Theatre       : ");
		switch(theatre)
		{  case 1 : cprintf("DT Star Cinemas, DLF Promenade Mall "); break;
		   case 2 : cprintf("DT Star Cinemas, DLF Place Mall     "); break;
		   case 3 : cprintf("DT Cinemas  , DLF Centre Mall       "); break;
		   case 4 : cprintf("DT Cinemas  , DLF Mega Mall         "); break;
		   case 5 : cprintf("DT Cinemas  , DLF Star Mall         "); break;
		   case 6 : cprintf("SRS Cinemas , Sohna Road            "); break;
		   case 7 : cprintf("PVR Cinemas , M G Road              "); break;
		   case 8 : cprintf("PVR Cinemas , Vasant Kunj           "); break;
		   case 9 : cprintf("PVR Cinemas , Vasant Vihar          "); break;
		   case 10: cprintf("PVR Cinemas , Vikaspuri             "); break; }
		 cout<<endl;
		 cprintf(" Show timings  : ");
		switch(show)
		{ case 1 : cprintf("12:00-3:00"); break;
		  case 2 : cprintf(" 4:00-7:00"); break;
		  case 3 : cprintf("7:00-11:00"); break; }
		cout<<endl;
	       cprintf(" Seats Booked  : %d",seats); cout<<endl;
	       cprintf(" Cost          : Rs %d",seats*200); cout<<endl;
	       cout<<"------------------------------------------------------------------------------"; getch();
	     }
	     getch(); getch();
	     break;

s : case 4 : window(1,1,80,25); textbackground(CYAN); cprintf(" "); clrscr();
	     window(25,6,45,6); textbackground(WHITE); textcolor(5);
	     cprintf(" WELCOME TO SIGN IN ");
	     window(15,10,36,10);
	     textcolor(WHITE); textbackground(BLUE);
	     cprintf(" EMAIL ID           ");
	     window(37,10,70,10);
	     textcolor(WHITE); textbackground(BLACK);
	     cscanf("%s",id);
	     window(15,13,36,13);
	     textcolor(WHITE); textbackground(BLUE);
	     cprintf(" PASSWORD           ");
	     window(37,13,70,13);
	     textcolor(WHITE); textbackground(BLACK);
	     i=0;            getch();
	     while(i!=20)
	     { ch=getch();
	       if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
	       { pass[i++]=ch;
		 textcolor(WHITE); textbackground(BLACK);
		 cprintf("*"); }
	       if(ch=='\b' && i>=1)
	       { cout<<"\b \b"; --i; }
	       if(ch==13)
	       { pass[i]='\0'; break; }
	     }
	     ifstream file1;
	     file1.open("ACCOUNT",ios::in);   file1.seekg(0);
	     while(!file1.eof())
	     { file1.read((char*)&person,sizeof(person));
	       if(strcmp(person.getid(),id)==0)
		{ if(strcmp(person.getpass(),pass)==0)
		  { window(22,20,80,20); textcolor(BLINK); textbackground(5);
		    cprintf(" Welcome back %s %s ",person.getfname(),person.getsname()); flag=0;
		    getch(); break;  }
		 }
	      }
	     if(flag)
	     { window(22,20,80,20); textcolor(BLINK); textbackground(5);
	       cprintf(" Either username or password is incorrect ");
	       textcolor(BLUE); cout<<"\n\n";
	     cprintf("Press 1 to try again ");
	     cprintf("Press 2 for Main MENU");
	     cin>>c;
	     if(c==1) goto s;
	     }
	     break;

    case 5 : window(1,1,80,25); textbackground(RED); cprintf(" "); clrscr();
	     cout<<"\n\n\n\t\t"; textcolor(GREEN+BLINK);
	     cprintf("Please fill all the information correctly");
	     ofstream file;
	     file.open("ACCOUNT",ios::out|ios::app);
	     customer.getdata();
	     file.write((char*)&customer,sizeof(customer));
	     file.close();
	     break;

    case 6 : file1.close();
	     exit(0);

}
}
}