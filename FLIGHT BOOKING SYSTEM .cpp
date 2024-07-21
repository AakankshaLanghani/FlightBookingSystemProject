#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;

// Encapsulation and Abstraction
class d_booking
{
protected:
    int pnr; // Passenger Name Record or Reservation Number
    char f_d[10],toja[7],tojd[7]; // toja= time of arrival of flight, tojd= time of departure , f_d=flight details
    long int doj;
    int choice,src,dest;  // choice made by passenger, source=departure location selected by the passenger,dest=arrival location chosen by the passenger.
public:
	//responsible for generating a Passenger Name Record (PNR) number for a booking by incrementing a global counter (glob) and assigning it to the pnr member variable.
    void d_pnr() //member function of the passenger class.
    {
        glob++; //Increments the global variable glob by 1.
        pnr=glob; //Assigns the value of glob to the member variable pnr.
    }
    int j_detail() //interacts with the user to gather details about the flight journey.
    {
        cout << "\nEnter Date of Flight(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.New York(1) \t2.New Jersey(2) \t3.Sydney(3) \t4.Los Angeles(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        //check various combinations of source and destination codes and display available flights for those routes.
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$250\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$300\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$140\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$180\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$200\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$180\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$50\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$150\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nDestination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Eagle"<<endl;
                strcpy(f_d,"Eagle");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Falcon"<<endl;
                strcpy(f_d,"Falcon");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Jet Speed" << endl;
                strcpy(f_d,"Jet Speed");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};
// Encapsulation and Abstraction
class i_booking // international booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }

    int j_detaili()
    {
        cout << "Enter Date of Flight(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.London(1) \2.Dubai(2) \3.Quatar(3) \4.Singapore(4) \5.Thailand(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$255\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$213\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$290\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$420\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$170\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$140\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$170\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$100\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$250\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Speed" << endl;
            strcpy(f_i,"Speed");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Zoom" << endl;
               strcpy(f_i,"Zoom");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Fly Away" << endl;
            strcpy(f_i,"Fly Away");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};

//multiple inheritance
class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
		//abstraction
    void p_detail(int x) //used to collect passenger details after the user selects a flight. 
    {   if(x==1) // domestic booking
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili(); //international booking
             select_flighti();
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr() //Returns the PNR (Passenger Name Record) of a flight for the domestic booking.
        {
            return pnr;
        }

     int getpnri() //Returns the PNR for the international booking.
     {
         return pnri;
     }
	//abstraction
     void disp() //domestic flights 
     {
         cout<<"PNR:" << pnr << endl; //pnr number
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }
	//abstraction
      void dispi() //international flights 
     {
         cout<<"PNR:" << pnri << endl; // pnr for int booking
         cout<<"Flight:" << f_i << endl; //flight details for int booking
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl; // date of journey for int booking
         cout<<"Departure Time:" << tojdi << endl; //departure time for int booking
         cout<<"Arrival Time:" << tojai; //arrival time for int booking
     }
};


// Encapsulation and Abstraction
class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
	//abstraction
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: 1.West Blue Bank(1) 2.Naga Bank(2) 3.Standard Bank(3) 4.Personal Bank(4) 5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};
//This function essentially takes a passenger object, writes its data in binary format 
//to the "domestic.txt" file, and then closes the file stream
void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
//This function reads data from "domestic.txt", writes non-matching records to "domestic1.txt", 
//and cancels the ticket if the specified PNR number matches, refunding $100.
// If the ticket isn't found, it displays a message indicating that the ticket was not found.
void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: $100\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");

}
//Opens the "domestic.txt" file in binary mode for reading.
void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p)); ////Reads each passenger object from the file.
   while(fout)
   {
     if(p.getpnr()==x) ////Compares the PNR number of each passenger object with the input x.
     {p.disp(); //If a match is found, it displays the ticket details using p.disp().
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close(); //Closes the file and if no matching ticket is found, it displays "Ticket not found".
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p) //Opens "international.txt" in binary mode for writing and appending.
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p)); //Writes the passenger object p to the file.
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app); //Opens "international.txt" in binary mode for reading.
   ofstream fin("international1.txt",ios::binary|ios::app);//Creates "international1.txt" for writing and appending.
   fout.read((char *)&p,sizeof(p)); //Reads each passenger object from "international.txt".
   while(fout)
   {
     if(p.getpnri()!=x)    //f the PNR number of the passenger object matches x
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi(); //// displays the ticket details using p.dispi(),
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: $100\n";
         f++; //marks the ticket as canceled, and increments f.
     }
     fout.read((char *)&p,sizeof(p)); //Writes non-matching tickets to "international1.txt".
   }
   if(f==0)  
    cout<<"\nTicket not found\n";  //If no matching ticket is found, it displays "Ticket not found".
   fout.close();
   fin.close();
   //Closes both files, removes the original "international.txt"
   // and renames "international1.txt" to "international.txt".
   remove("international.txt");
   rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary); //Opens "international.txt" in binary mode for reading.
   fout.read((char *)&p,sizeof(p)); //Reads each passenger object from the file.
   while(fout)
   {
     if(p.getpnri()==x) //Compares the PNR number of each passenger object with the input x.
     {p.dispi();
      cout<<"\nYour ticket"<<endl; //If a match is found, it displays the ticket details using p.dispi().
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl; //Closes the file and if no matching ticket is found, it displays "Ticket not found".
}
int main()
{
    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Airline Flight Booking System" << endl << endl;

    cout << "\n\n\t\t\t1.Book Flight(1) \n\t\t\t2.Cancel Fight(2) \n\t\t\t3.Check Ticket(3) \n\t\t\t4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n1.Domestic Fights(1) \n2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                 	// Polymorphism: Calling methods that exhibit different behaviors based on the instance type (domestic or international)
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
}

