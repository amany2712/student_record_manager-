#include <iostream>
using namespace std;
class student_record_manager
{
private :
    string roll_no[30],
    name[30],
    Class [30],
    course[30],
    mobile_no[30];
//arrays for storing students data.
int total=0; //to store all data

public :
    void enter();
    void show();
    void search();
    void update();
    void Delete();


};
void student_record_manager :: enter()
{
int ch=0;
cout<<"How many students do you want to enter?"<<endl;
cin>>ch;
if(total==0)
{
total=ch+total;
for(int i=0;i<ch;i++)
{
cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
cout<<"Enter Roll NO:  "<<endl;
cin>>roll_no[i];
cout<<"Enter Name:  "<<endl;
cin>>name[i];
cout<<"Enter Class:  "<<endl;
cin>>Class[i];
cout<<"Enter Course:  "<<endl;
cin>>course[i];
cout<<"Enter Mobile NO:  "<<endl;
cin>>mobile_no[i];
}
}
else
{
for(int i=total;i<ch+total;i++)
//to store onward students data rather than storing double data()
{
cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
cout<<"Enter Roll NO ";
cin>>roll_no[i];
cout<<"Enter Name: ";
cin>>name[i];
cout<<"Enter Class: ";
cin>>Class[i];
cout<<"Enter Course: ";
cin>>course[i];
cout<<"Enter Mobile NO: ";
cin>>mobile_no[i];
}
total=ch+total; //making choice
}
}
void student_record_manager :: show()
{
if(total==0)
{
cout<<"No Data is Entered"<<endl;
}
else
{
for(int i=0;i<total;i++)
{
cout<<"\nData of Student "<<i+1<<endl<<endl;
cout<<"Roll NO:  "<<roll_no[i]<<endl;
cout<<"Name:  "<<name[i]<<endl;
cout<<"Class:  "<<Class[i]<<endl;
cout<<"Course:  "<<course[i]<<endl;
cout<<"Mobile NO:  "<<mobile_no[i]<<endl;
}
}
}
void student_record_manager :: search()

{
if(total==0)
{
cout<<"No data is entered"<<endl;
}
else
{
string rollno;
cout<<"Enter the roll number of student"<<endl;
cin>>rollno;

for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\nRoll NO:  "<<roll_no[i]<<endl;
cout<<"Name:  "<<name[i]<<endl;
cout<<"Class:  "<<Class[i]<<endl;
cout<<"Course:  "<<course[i]<<endl;
cout<<"Mobile NO:  "<<mobile_no[i]<<endl;
break;
}
if (rollno!=roll_no[i]){
    cout<<"not found !";
    break;}
}
//for(int i=0;i<total;i++){
 //if (rollno!=roll_no[i])
   // cout<<"not found !";
    //break;}

}
}
void student_record_manager :: update()
{

if(total==0)
{
cout<<"No data is entered"<<endl;
}
else{
string rollno;
cout<<"Enter the roll no of student you want to update"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\nPrevious data of Student who has a roll number:"<<roll_no[i]<<endl<<endl;
cout<<"Roll NO: "<<roll_no[i]<<endl;
cout<<"Name:  "<<name[i]<<endl;
cout<<"Class:  "<<Class[i]<<endl;
cout<<"Course:  "<<course[i]<<endl;
cout<<"Mobile NO:  "<<mobile_no[i]<<endl;
cout<<"\nEnter new data"<<endl<<endl;
cout<<"Enter Roll NO:  ";
cin>>roll_no[i];
cout<<"Enter Name:  ";
cin>>name[i];
cout<<"Enter Class:  ";
cin>>Class[i];
cout<<"Enter Course:  ";
cin>>course[i];
cout<<"Enter Mobile NO:  ";
cin>>mobile_no[i];
}
}
}
}
void student_record_manager :: Delete()
{
if(total==0)
{
cout<<"No data is entered yet"<<endl;
}
else
{
int a;
cout<<"Are you Sure to Delete Data?"<<endl;
cout<<"\nPress 1 to delete all record"<<endl;
cout<<"Press 2 to choice which student you want to delete"<<endl;
cin>>a;
if(a==1)
{
total=0;
cout<<"All record is deleted..!!"<<endl;
}
else if (a==2)
{
string rollno;
cout<<"Enter the roll no of student you want to delete"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\nPrevious data"<<endl<<endl;
cout<<"Data of Student "<<i+1<<endl;
cout<<"Roll NO: "<<roll_no[i]<<endl;
cout<<"Name:  "<<name[i]<<endl;
cout<<"Class:  "<<Class[i]<<endl;
cout<<"Course:  "<<course[i]<<endl;
cout<<"Mobile NO:  "<<mobile_no[i]<<endl;
roll_no[i].clear();
name[i]="";
Class[i]=std::string();
course[i]="";
mobile_no[i]="";
total -- ;
cout << "\n\n\t The data of student's roll no " << rollno << " is deleted successfully!!\n" << endl;

}
}
}
}
}
int main()
{
    student_record_manager student ;
    int choice;

     printf("\n");
  cout<<("\t\t\t\t\t----------------------------------------\n");
  cout<<("\t\t\t\t\t|    STUDENT RECORD MANAGEMENT SYSTEM  |\n");
  cout<<("\t\t\t\t\t----------------------------------------\n");
  cout<<("\n\n\n");
  cout<<("\t\t\tPress Enter to continue......");
  getchar();
do
{

	//char data[15];

cout << "\n\n\t\t\t ** Main Menu **\n "<<endl;

cout<<"\n\t\t\tPress 1 to Enter data"<<endl<<endl;
cout<<"\t\t\tPress 2 to Show data"<<endl<<endl;
cout<<"\t\t\tPress 3 to Search data"<<endl<<endl;
cout<<"\t\t\tPress 4 to Update data"<<endl<<endl;
cout<<"\t\t\tPress 5 to Delete data"<<endl<<endl;
cout<<"\t\t\tPress 6 to Quit"<<endl<<endl;
cin>>choice;
switch(choice)
{
case 1:
    student.enter();
    break;
case 2:
    student.show();
    break;
case 3:
    student.search();
    break;
case 4:
    student.update();
    break;
case 5:
    student.Delete();
    break;
case 6:
    cout << "\n Thanks for using this program and GOODBYE! \n ";
    exit(0);
    break;
default:
    cout<<"Invalid input! Please Enter a valid one \n"<<endl;

}
} while (choice!=6);



    return 0;
}
