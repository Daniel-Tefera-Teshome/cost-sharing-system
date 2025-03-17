

 #include<iostream>
#include<conio.h>
using namespace std;
struct node
{
string full_name;
string sex;
int id_number;
string Nationality;
string date_of_birth;
string place_of_birth;
int region;
string zone;
string wereda;
string towen;
int kebele;
int house_number;
int phone_number;
string  mother_name;
string school_name;
string date_completed;
string university;
string faculty;
string department;
string year_of_interance;
int tuition_fee;
int food_expence;
int medical_expence;
int amount_for_bed;
int duration_year;
node *next;
};
struct node *start=NULL;
 void insert_at_beg();
 void insert_at_mid();
 void insert_at_end();
 void delete_at_start();
 void delete_at_end();
 void search_specific();
 void developer();
int delete_at_middle();
void search();
void display();
void final_cost_all();
void final_cost_specific();
void insert_at_end()
{
char ch;
 node *temp,*temp1;
 temp=new node;
 cout<<"\n\n\t\tYOU ARE ABOUT TO INSERT AT END ";
 cout<<"\n\n\t\t```````````````````````````````";
 cout<<"\n\n\t\t Enter full name: ";
 cin>>temp->full_name;
 cout<<"\n\n\t\t Enter your id number:";
 cin>>temp->id_number;
 cout<<"\n\n\t\tEnter your sex : ";
 cin>>temp->sex;
 cout<<"\n\n\t\tEnter your nationality: ";
 cin>>temp->Nationality;
 cout<<"\n\n\t\tEnter date of birth: ";
 cin>>temp->date_of_birth;
 cout<<"\n\n\t\tEnter place of birth: ";
 cin>>temp->place_of_birth;
 cout<<"\n\n\t\t -Enter region: ";
 cin>>temp->region;
 cout<<"\n\n\t\tEnter zone:";
 cin>>temp->zone;
 cout<<"\n\n\\t\tEnter wereda:";
 cin>>temp->wereda;
 cout<<"\n\n\t\tenter towen:";
 cin>>temp->towen;
 cout<<"\n\n\t\tEnter house number:";
 cin>>temp->house_number;
 cout<<"\n\n\t\tEnter phone numbr:";
 cin>>temp->phone_number;
 cout<<"\n\n\t\tEnter mother  name:";
 cin>>temp->mother_name;
 cout<<"\n\n\t\tEnter preparatory and high school name:";
 cin>>temp->school_name;
 cout<<"\n\n\t\tEnter the date that you completed:";
 cin>>temp->date_completed;
 cout<<"\n\n\t\tEnter the university name:";
 cin>>temp->university;
 cout<<"\n\n\t\tEnter the faculty:";
 cin>>temp->faculty;
 cout<<"\n\n\t\tEnter department:";
 cin>>temp->department;
 cout<<"\n\n\t\tEnter year of interace:";
 cin>>temp->year_of_interance;
 cout<<"\n\n\t\tEnter tuition_fee per year:";
 cin>>temp->tuition_fee;
 cout<<"\n\n\t\tEnter food_expence per year:";
 cin>>temp->food_expence;
 cout<<"\n\n\t\tEnter amount for bed per year:";
 cin>>temp->amount_for_bed;
 cout<<"\n\n\t\t Enter medical expence per year:";
 cin>>temp->medical_expence;
 cout<<"\n\n\t\tEnter number of years that you live in the campus:";
 cin>>temp->duration_year;
 temp->next=NULL;
 if(start==NULL)
 {
 start=temp;
 cout<<"\n\n\n\t\t------ Info Inserted Successfully at End ------\n\n";
 }
 else
 {
 temp1=start;
 while(temp1->next!=NULL)
 {
 temp1=temp1->next;
 }
 temp1->next= temp;
 temp->next=NULL;
 cout<<"\n\n\t\tYOU ARE ABOUT TO INSERT AT END ";
  cout<<"\n\n\n\t\t------ Info Inserted Successfully at End ------\n\n";
}
}

void insert_at_mid()
 {
 node *temp,*temp2;
 int x;
 temp=start;
 if(temp==NULL)
 {
 cout<<"\n\n\t\tSorry,You Can't Insert At Mid,Because Your List Is Empty...!!!\n\n";
 }
 else{
 cout<<"\n\n\t\tEnter the ID_NO Neighbour element : ";
 cin>>x;
 while(temp->id_number<x&&temp->next!=NULL)
 {
 temp=temp->next;
 }
 if(temp->id_number==x)
 {
 temp2=temp->next;
 temp->next=new node[1];
 temp=temp->next;
 temp->next=temp2;
 cout<<"\n\n\t\tYOU ARE ABOUT TO INSERT AT MIDDLE ";
 cout<<"\n\n\t\t`````````````````````````````````";
 cout<<"\n\n\t\t Enter full name: ";
 cin>>temp->full_name;
 cout<<"\n\n\t\tEnter your id number : ";
 cin>>temp->id_number;
 cout<<"\n\n\t\tEnter your sex : ";
 cin>>temp->sex;
 cout<<"\n\n\t\tEnter nationality: ";
 cin>>temp->Nationality;
 cout<<"\n\n\t\tEnter date of birth: ";
 cin>>temp->date_of_birth;
cout<<"\n\n\t\t-Enter place of birth:";
cin>>temp->place_of_birth;
cout<<"\n\n\t\t-Enter your region:";
cin>>temp->region;
cout<"\n\n\t\tEnter your zone:";
cin>>temp->zone;
cout<<"\n\n\t\tEnter your wereda:";
cin>>temp->wereda;
cout<<"\n\n\t\tEnter your kebele:";
cin>>temp->kebele;
cout<<"\n\n\t\tEnterhouse number:";
cin>>temp->house_number;
cout<<"\n\n\t\tEnter your phone number:";
cin>>temp->phone_number;
cout<<"\n\n\t\tEnter mother name:";
cin>>temp->mother_name;
cout<<"\n\n\t\tEnter school name that you complete high school and prepatory:";
cin>>temp->school_name;
cout<<"\n\n\t\tEnter date of completed:";
cin>>temp->date_completed;
cout<<"\n\n\t\tEnter university name:";
cin>>temp->university;
cout<<"\n\n\t\tEnter faculty:";
cin>>temp->faculty;
cout<<"\n\n\t\tEnter department:";
cin>>temp->department;
cout<<"\n\n\t\tEnteryear of interance:";
cin>>temp->year_of_interance;
cout<<"\n\n\t\tEnter tuition fee:";
cin>>temp->tuition_fee;
cout<<"\n\n\t\tEnter food expence:";
cin>>temp->food_expence;
cout<<"\n\n\t\tEnter medical expence:";
cin>>temp->medical_expence;
cout<<"\n\n\t\tEnter amount for bed:";
cin>>temp->amount_for_bed;
cout<<"\n\n\t\tEnter number of years that you live in the campus:";
cin>>temp->duration_year;
 cout<<"\n\n\n\t\t------ Info Inserted Successfully at middle------\n\n";
}
else
{
cout<<"\n\n\n\t\tYour Neighbour element Does not Exist In The List\n\n";}
}
}
void insert_at_beg()
{
node *temp;
temp=new node [1];
temp->next=start;
start=temp;
cout<<"\n\n\t\tYOU ARE ABOUT TO INSERT AT BEGINNING ";
cout<<"\n\n\t\t````````````````````````````````````";

 cout<<"\n\n\t\tEnter full name: ";
 cin>>start->full_name;
 cout<<"\n\n\t\tEnter your id number: ";
 cin>>start->id_number;
 cout<<"\n\n\t\tEnter your sex : ";
 cin>>start->sex;
 cout<<"\n\n\t\tEnter your nationality: ";
 cin>>start->Nationality;
 cout<<"\n\n\t\tEnter your date of birth: ";
 cin>>start->date_of_birth;
cout<<"\n\n\t\tEnter your place of birth:";
cin>>temp->place_of_birth;
cout<<"\n\n\t\t-Enter your region:";
cin>>temp->region;
cout<<"\n\n\t\tEnter your zone:";
cin>>temp->zone;
cout<<"\n\n\t\tEnter your wereda:";
cin>>temp->wereda;
cout<<"\n\n\t\tEnter your towen:";
cin>>temp->towen;
cout<<"\n\n\t\tEnter your kebele:";
cin>>temp->kebele;
cout<<"\n\n\t\tEnter your house number:";
cin>>temp->house_number;
cout<<"\n\n\t\tEnter your phone number:";
cin>>temp->phone_number;
cout<<"\n\n\t\tEnter your mother name:";
cin>>temp->mother_name;
cout<<"\n\n\t\tEnter your school name:";
cin>>temp->school_name;
cout<<"\n\n\t\tEnter date of completed:";
cin>>temp->date_completed;
cout<<"\n\n\t\tEnter university name:";
cin>>temp->university;
cout<<"\n\n\t\tEnter faculty:";
cin>>temp->faculty;
cout<<"\n\n\t\tEnter department:";
cin>>temp->department;
cout<<"\n\n\t\tEnter year of interance:";
cin>>temp->year_of_interance;
cout<<"\n\n\t\tEnter tuition fee:";
cin>>temp->tuition_fee;
cout<<"\n\n\t\tEnter food expence:";
cin>>temp->food_expence;
cout<<"\n\n\t\tEnter amount for bed:";
cin>>temp->amount_for_bed;
cout<<"\n\n\t\tEnter medical expence:";
cin>>temp->medical_expence;
cout<<"\n\n\t\tEnter nummber of years that you live in the campus:";
cin>>temp->duration_year;
 cout<<"\n\n\n\t\t------ Info Inserted Successfully at begging------\n\n";

}
int delete_at_middle()
{
 node *temp,*prev;
int x;
if(start==NULL)
{
 cout<<"\n\n\t\tUnderflow -- No element to Delete \n";
 return 0;
 }
cout<<"\n\n\t\tEnter ID_NO Element to delete : ";
cin>>x;
if(start->id_number==x && start->next==NULL)
{
delete start;
start=NULL;
cout<<"\n\n\t\tDeletion successfull \n";
 return 0;
 }
if(start->id_number==x)
 {
temp=start->next;
delete start;
start=temp;
 cout<<"\n\n\t\tDeletion  Successful \n";
 return 0;
 }
temp=start;

while(temp->id_number!=x&&temp->next!=NULL)
 {
   prev=temp;
   temp=temp->next;
   }
   if(temp->id_number==x)
   {
prev->next=temp->next;
delete temp;
cout<<"\n\n\t\tDeletion Successful\n";
return x;
}
else
{
cout<<"\n\n\n\t\tDeletion Failed Because,Element Does not Exist In The List\n\n";
    }
 }
 void  display()
 {
 node *temp;
 temp=start;
 if(temp==NULL)
 {
 cout<<"\n\n\t\tYou don't Have Any List To Display\n\n";
 }
 else{
 cout<<"\n\n\t\tTHE IS ALL ARE WHAT YOU HAVE IN YOUR LIST";
 cout<<"\n\n\t\t`````````````````````````````````````````";
  while(temp->next!=NULL)
	{
 cout<<"\n\n\t\tfull name : "<< temp->full_name;
 cout<<"\n\n\t\tid number: "<<temp->id_number;
 cout<<"\n\n\t\tsex : "<<temp->sex;
 cout<<"\n\n\t\tnationality: "<<temp->Nationality;
 cout<<"\n\n\t\tdate of birth : "<<temp->date_of_birth;
 cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
 cout<<"\n\n\t\tregion:"<<temp->region;
 cout<<"\n\n\t\tzone:"<<temp->zone;
 cout<<"\n\n\t\twereda:"<<temp->wereda;
 cout<<"\n\n\t\ttowen:"<<temp->towen;
 cout<<"\n\n\t\tkebele:"<<temp->kebele;
 cout<<"\n\n\t\thouse number:"<<temp->house_number;
 cout<<"\n\n\t\tphone number:"<<temp->phone_number;
 cout<<"\n\n\t\tmother name:"<<temp->mother_name;
 cout<<"\n\n\t\tschool name:"<<temp->school_name;
 cout<<"\n\n\t\tdate of completed:"<<temp->date_completed;
 cout<<"\n\n\t\tuniversity:"<<temp->university;
 cout<<"\n\n\t\tfaculty:"<<temp->faculty;
 cout<<"\n\n\t\tdepartment:"<<temp->department;
 cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
 cout<<"\n\n\t\ttuition fee:"<<temp->tuition_fee;
 cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
 cout<<"\n\n\t\tamount for bed:"<<temp->amount_for_bed;
 cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 /*int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;*/
 int total;
 total=temp->tuition_fee+temp->food_expence+temp->medical_expence+temp->amount_for_bed;
 cout<<"\n\n\t\tTotal cost sharing per year="<<total;
 //int duration_year;

cout<<"\n\n\t\tTotal cost sharing is"<<total*temp->duration_year;
 cout<<"\n\n\t\t```````````````````````````````````````````````` ``````````````````````````````````";
 temp=temp->next;
	}
cout<<"\n\n\t\t full name:"<<temp->full_name;
 cout<<"\n\n\t\tid number : "<<temp->id_number;
 cout<<"\n\n\t\tsex : "<<temp->sex;
 cout<<"\n\n\t\tnationality : "<<temp->Nationality;
 cout<<"\n\n\t\t date of birth : "<<temp->date_of_birth;
cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
cout<<"\n\n\t\tregion:"<<temp->region;
cout<<"\n\n\t\tzone:"<<temp->zone;
cout<<"\n\n\t\twereda:"<<temp->wereda;
cout<<"\n\n\t\ttowen:"<<temp->towen;
cout<<"\n\n\t\tkebele:"<<temp->kebele;
cout<<"\n\n\t\tphone number:"<<temp->phone_number;
cout<<"\n\n\t\thouse number:"<<temp->house_number;
cout<<"\n\n\t\tmother name:"<<temp->mother_name;
cout<<"\n\n\t\tschool name:"<<temp->school_name;
cout<<"\n\n\t\tdate of completed:"<<temp->date_completed;
cout<<"\n\n\t\tuniversity:"<<temp->university;
cout<<"\n\n\t\tfaculty:"<<temp->faculty;
cout<<"\n\n\t\tdepartment:"<<temp->department;
cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
cout<<"\n\n\t\ttuotion fee:"<<temp->tuition_fee;
cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
cout<<"\n\n\t\tamount for bed:"<<temp->amount_for_bed;
cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 /*int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;*/
 int total=temp->tuition_fee+temp->food_expence+temp->medical_expence+temp->amount_for_bed;
cout<<"\n\n\t\tTotal cost sharing per year="<<total;
//int duration_year;
/*if(department==COSC){
duration_year=4;
}
else if(department==HO){
duration_year=4;
}
else if(department==It){
duration_year=4;
}
else if(department==geology){
duration_year=4;
}
else if(department==Land adminstration){
duration_year=4;
}
else if(department==Engennering){
duration_year=5;
}
else{
duration_year=3;
}*/
cout<<"\n\n\t\tTotal cost sharing is"<<total*temp->duration_year;
 cout<<"\n\n\t\t```````````````````````````````````````````````````````````````````````````````";
}
}
void search_specific()
{

   node *temp;
   temp=start;
   if(start==NULL)
   cout<<"\n\n\t\tSorry,Your Item Can't Be Found In The List....!\n\n";
   else{
   int b;
   cout<<"\n\t\tPlease enter the ID_NO  of elements to be searched : ";
   cin>>b;
    while(temp->id_number!=b&&temp->next!=NULL)
    {
   temp=temp->next;
    }
    if(temp->id_number==b)
    {
 cout<<"\n\n\t\tfull name : "<<temp->full_name;
 cout<<"\n\n\t\ttsex : "<<temp->sex;
 cout<<"\n\n\t\tID _NO : "<<temp->id_number;
 cout<<"\n\n\t\tnationality : "<<temp->Nationality;
 cout<<"\n\n\t\tdate of birth : "<<temp->date_of_birth;
cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
cout<<"\n\n\t\tregion:"<<temp->region;
cout<<"\n\n\t\tzone:"<<temp->zone;
cout<<"\n\n\t\twereda:"<<temp->wereda;
cout<<"\n\n\t\ttowen:"<<temp->towen;
cout<<"\n\n\t\tkebele:"<<temp->kebele;
cout<<"\n\n\t\thoouse number:"<<temp->house_number;
cout<<"\n\n\t\tphone number:"<<temp->phone_number;
cout<<"\n\n\t\tmother name:"<<temp->mother_name;
cout<<"\n\n\t\tschool name:"<<temp->school_name;
cout<<"\n\n\t\tdate of completed"<<temp->date_completed;
cout<<"\n\n\t\tuniversity:"<<temp->university;
cout<<"\n\n\t\tfaculty:"<<temp->faculty;
cout<<"\n\n\t\tdepartment:"<<temp->department;
cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
cout<<"\n\n\t\ttuition fee:"<<temp->tuition_fee;
cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
cout<<"\n\n\t\tamount_for_bed:"<<temp->amount_for_bed;
cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 /*int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;*/
 int total= temp->tuition_fee+temp->food_expence+temp->medical_expence+temp->amount_for_bed;
cout<<"\n\n\t\tTotal cost sharing per year="<< total;
//int duration_year;
/*if(department==COSC){
duration_year=4;
}
else if(department==HO){
duration_year=4;
}
else if(department==It){
duration_year=4;
}
else if(department==geology){
duration_year=4;
}
else if(department==Land adminstration){
duration_year=4;
}
else if(department==Engennering){
duration_year=5;
}
else{
duration_year=3;
}*/
cout<<"\n\n\t\tTotal cost sharing is"<<total*temp->duration_year;
 cout<<"\n\n\t\t````````````````````````````````````````````````````````````````````````````````````````````````";
}
else
{
    cout<<"\n\n\n\t\tYour  Element Does not Exist In The List\n\n";
    }
   }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void final_cost_specific()
{
node *temp;
   temp=start;
   if(start==NULL)
   cout<<"\n\n\t\tSorry,Your Item Can't Be Found In The List....!\n\n";
   else{
   int b;
   cout<<"\n\t\tPlease enter the ID_NO  of elements to be searched : ";
   cin>>b;
    while(temp->id_number!=b&&temp->next!=NULL)
    {
   temp=temp->next;
    }
    if(temp->id_number==b)
    {
 cout<<"\n\n\t\tfull name : "<<temp->full_name;
 cout<<"\n\n\t\ttsex : "<<temp->sex;
 cout<<"\n\n\t\tID _NO : "<<temp->id_number;
 cout<<"\n\n\t\tnationality : "<<temp->Nationality;
 cout<<"\n\n\t\tdate of birth : "<<temp->date_of_birth;
cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
cout<<"\n\n\t\tregion:"<<temp->region;
cout<<"\n\n\t\tzone:"<<temp->zone;
cout<<"\n\n\t\twereda:"<<temp->wereda;
cout<<"\n\n\t\ttowen:"<<temp->towen;
cout<<"\n\n\t\tkebele:"<<temp->kebele;
cout<<"\n\n\t\thoouse number:"<<temp->house_number;
cout<<"\n\n\t\tphone number:"<<temp->phone_number;
cout<<"\n\n\t\tmother name:"<<temp->mother_name;
cout<<"\n\n\t\tschool name:"<<temp->school_name;
cout<<"\n\n\t\tdate of completed"<<temp->date_completed;
cout<<"\n\n\t\tuniversity:"<<temp->university;
cout<<"\n\n\t\tfaculty:"<<temp->faculty;
cout<<"\n\n\t\tdepartment:"<<temp->department;
cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
cout<<"\n\n\t\ttuition fee:"<<temp->tuition_fee;
cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
cout<<"\n\n\t\tamount_for_bed:"<<temp->amount_for_bed;
cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;
 int total= tuition_fee+food_expence+medical_expence+amount_for_bed;
cout<<"\n\n\t\tTotal cost sharing per year="<< total;
//cout<<"\n\n\t\tEnter length of year in the campus:";
//int l;
//cin>>l;
//cout<<"Your total cost sharing  for all year="<<total*l;
//int duration_year;
/*if(department==COSC){
duration_year=4;
}
else if(department==HO){
duration_year=4;
}
else if(department==It){
duration_year=4;
}
else if(department==geology){
duration_year=4;
}
else if(department==Land adminstration){
duration_year=4;
}
else if(department==Engennering){
duration_year=5;
}
else{
duration_year=3;
}*/
//int duration_year;
cout<<"\n\n\t\tYour Total Cost Sharing is"<<total*temp->duration_year;
 cout<<"\n\n\t\t````````````````````````````````````````````````````````````````````````````````````````````````";
}
else
{
    cout<<"\n\n\n\t\tYour  Element Does not Exist In The List\n\n";
    }
   }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void final_cost_all()
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
{
 node *temp;
 temp=start;
 if(temp==NULL)
 {
 cout<<"\n\n\t\tYou don't Have Any List To Display\n\n";
 }
 else{
 cout<<"\n\n\t\tTHE IS ALL ARE WHAT YOU HAVE IN YOUR LIST";
 cout<<"\n\n\t\t`````````````````````````````````````````";
  while(temp->next!=NULL)
	{
 cout<<"\n\n\t\tfull name : "<< temp->full_name;
 cout<<"\n\n\t\tid number: "<<temp->id_number;
 cout<<"\n\n\t\tsex : "<<temp->sex;
 cout<<"\n\n\t\tnationality: "<<temp->Nationality;
 cout<<"\n\n\t\tdate of birth : "<<temp->date_of_birth;
 cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
 cout<<"\n\n\t\tregion:"<<temp->region;
 cout<<"\n\n\t\tzone:"<<temp->zone;
 cout<<"\n\n\t\twereda:"<<temp->wereda;
 cout<<"\n\n\t\ttowen:"<<temp->towen;
 cout<<"\n\n\t\tkebele:"<<temp->kebele;
 cout<<"\n\n\t\thouse number:"<<temp->house_number;
 cout<<"\n\n\t\tphone number:"<<temp->phone_number;
 cout<<"\n\n\t\tmother name:"<<temp->mother_name;
 cout<<"\n\n\t\tschool name:"<<temp->school_name;
 cout<<"\n\n\t\tdate of completed:"<<temp->date_completed;
 cout<<"\n\n\t\tuniversity:"<<temp->university;
 cout<<"\n\n\t\tfaculty:"<<temp->faculty;
 cout<<"\n\n\t\tdepartment:"<<temp->department;
 cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
 cout<<"\n\n\t\ttuition fee:"<<temp->tuition_fee;
 cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
 cout<<"\n\n\t\tamount for bed:"<<temp->amount_for_bed;
 cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 /*int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;
 int duration_year;*/
 int total=temp->tuition_fee+temp->food_expence+temp->medical_expence+temp->amount_for_bed;
 cout<<"\n\n\t\tTotal cost sharing per year="<<total;

 cout<<"\n\n\t\tYour Total cost sharing="<<total*temp->duration_year;
 cout<<"\n\n\t\t```````````````````````````````````````````````` ``````````````````````````````````";
 temp=temp->next;
	}
cout<<"\n\n\t\t full name:"<<temp->full_name;
 cout<<"\n\n\t\tid number : "<<temp->id_number;
 cout<<"\n\n\t\tsex : "<<temp->sex;
 cout<<"\n\n\t\tnationality : "<<temp->Nationality;
 cout<<"\n\n\t\t date of birth : "<<temp->date_of_birth;
cout<<"\n\n\t\tplace of birth:"<<temp->place_of_birth;
cout<<"\n\n\t\tregion:"<<temp->region;
cout<<"\n\n\t\tzone:"<<temp->zone;
cout<<"\n\n\t\twereda:"<<temp->wereda;
cout<<"\n\n\t\ttowen:"<<temp->towen;
cout<<"\n\n\t\tkebele:"<<temp->kebele;
cout<<"\n\n\t\tphone number:"<<temp->phone_number;
cout<<"\n\n\t\thouse number:"<<temp->house_number;
cout<<"\n\n\t\tmother name:"<<temp->mother_name;
cout<<"\n\n\t\tschool name:"<<temp->school_name;
cout<<"\n\n\t\tdate of completed:"<<temp->date_completed;
cout<<"\n\n\t\tuniversity:"<<temp->university;
cout<<"\n\n\t\tfaculty:"<<temp->faculty;
cout<<"\n\n\t\tdepartment:"<<temp->department;
cout<<"\n\n\t\tyear of interance:"<<temp->year_of_interance;
cout<<"\n\n\t\ttuotion fee:"<<temp->tuition_fee;
cout<<"\n\n\t\tfood expence:"<<temp->food_expence;
cout<<"\n\n\t\tamount for bed:"<<temp->amount_for_bed;
cout<<"\n\n\t\tmedical expence:"<<temp->medical_expence;
 /*int tuition_fee;
 int food_expence;
 int amount_for_bed;
 int medical_expence;
 int duration_year;*/
 int total=temp->tuition_fee+temp->food_expence+temp->medical_expence+temp->amount_for_bed;
cout<<"\n\n\t\tTotal cost sharing per year="<<total;

cout<<"\n\n\t\tYour total cost sharing="<<total*temp->duration_year;
 cout<<"\n\n\t\t```````````````````````````````````````````````````````````````````````````````";
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void delete_at_start()
 {
 node *temp;
 //temp=start;
  if(start==NULL)
 {
  cout<<"\n\n\t\tUnderflow -- No element to Delete \n";
 }
 else
 {
 start=start->next;
 delete start;
 cout<<"\n\n\n\t\t------ Info Deleted Successfully at Start ------\n\n";
}
 }
 void delete_at_end()
 {
      node*temp1,*temp2;
      if(start==NULL)
      cout<<"\n\n\t\tUnderflow -- No element to Delete \n";
      else{
           temp1=start;
           if(temp1->next==NULL)
           {
              delete temp1;
              start=NULL;
           }
           else{
                while(temp1->next!=NULL)
                {
                     temp2 =temp1;
                temp1=temp1->next;
                }
                delete temp1;
                temp2->next=NULL;
                cout<<"\n\n\n\t\t------ Info Deleted Successfully End ------\n\n";
                }
           }
  }
   void developer()
  {
      cout<<"\n\t\t========================================================";
      cout<<"\n\t\t===================  DEVELOPER  ========================";
      cout<<"\n\t\t========================================================";
      cout<<"\n\t\t=   GROUP NAME                         ID              =";
      cout<<"\n\t\t=   ----------                        -----            =";
      cout<<"\n\t\t=  DANIEL TEFERA                     1699/08           =";
      cout<<"\n\t\t=  DANIEL TEFERA                      1699/08          =";
      cout<<"\n\t\t=                                                      =";
      cout<<"\n\t\t=                                                      =";
      cout<<"\n\t\t=                                                      =";
      cout<<"\n\t\t========================================================\n\n";
   }
int main()
{
system("color ed");

int n=0,a;
char ch;
 do{

cout<<"\n\n\n\n";
        cout<<"\n\t\t\t*********************************";
        cout<<"\n\t\t\t******       L  C          ******";
        cout<<"\n\t\t\t*****     L        O        *****";
        cout<<"\n\t\t\t*****    E           M      *****";
        cout<<"\n\t\t\t****   W              E      ****";
        cout<<"\n\t\t\t****   TO OUR   PROJECT      ****";
        cout<<"\n\t\t\t*********************************";
        cout<<"\n\n\t\t___________________________________________\n";
         cout<<"\n\t\t################################################################";
         cout<<"\n\t\t###### AUTOMATING WOLDIA UNIVERSITY COST SHARING SYSTEM  #######";
         cout<<"\n\t\t######                                                   #######";
         cout<<"\n\t\t################################################################";
cout<<"\n\t\t\t######M A I N   M E N U ######\n";
cout<<"\n\t\t\t#### 1==>>Insertion ####";
cout<<"\n\t\t\t#### 2==>>Deletion  ####";
cout<<"\n\t\t\t#### 3==>>Display   ####";
cout<<"\n\t\t\t#### 4==>>Developer ####";
cout<<"\n\t\t\t\tEnter your choice : ";
cin>>a;
 switch(a)
 {
 case 1:
      cout<<"\n\n\n\t\t ////// INSERTION MENU /////\n";
      cout<<"\n\n\t\t1 ***** Insert at Beginning*****";
      cout<<"\n\n\t\t2 ***** Insert at Middle   *****";
      cout<<"\n\n\t\t3 ***** Insert at End      *****";
      cout<<"\n\n\t\tEnter your choice : ";
      int i;
      cin>>i;
       switch(i)
       {
                case 1: insert_at_beg();
                         break;
                case 2: insert_at_mid();
                         break;
                case 3: insert_at_end();
                         break;
                 default :cout<<"\n\t\tWrong Choices : ";
       }
      	break;
 case 2:
      cout<<"\n\n\n\t\t////// DELETION  MENU \\\\\\n";
      cout<<"\n\n\t\t1 ****** Delete at Start *******";
      cout<<"\n\n\t\t2 ******Delete at Random *******";
      cout<<"\n\n\t\t3 ******Delete at End    *******";
      cout<<"\n\n\t\tEnter your choice : ";
      int o;
      cin>>o;
       switch(o)
       {
                case 1: delete_at_start();
                         break;
                case 2: delete_at_middle();
                         break;
                case 3: delete_at_end();
                         break;
                 default :cout<<"\n\t\tWrong Choices : ";
       }
      	break;
case 3:
      cout<<"\n\n\n\t\t/////// OUTPUT  MENU \\\\\\\n";
      cout<<"\n\n\t\t1 *******Display All    ***************************";
      cout<<"\n\n\t\t2 *******Search Specific **************************";
      cout<<"\n\n\t\t3 *******final cost sharing paper for all**********";
      cout<<"\n\n\t\t4 *******final cost sharing paper for specific*****";
      cout<<"\n\n\t\tEnter your choice : ";

      int p;
      cin>>p;
       switch(p)
       {
                case 1: display();
                         break;
                case 2: search_specific();
                         break;
                case 3: final_cost_all();
				         break;
				case 4: final_cost_specific();
				         break;
                 default :cout<<"\n\t\tWrong Choices : ";
       }
     	break;
 case 4 :developer();
			break;

  default : cout<<"\n Invalid Entry \n";
			 break;
  }
  cout<<"\n\n\t\tDo you want to continue [Y/N]? : ";
  cin>>ch;
}
while(ch=='Y' || ch=='y');

getch();
return 0;
 }

