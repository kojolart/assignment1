#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{



    //Global variable declaration
    cout<<"\a";
    double totalCost,totalAmountPaid,balance,vatAmount;
    //Question
     string question="Yes";"yes";"YES";
     string tryAgain="Yes";"yes";"YES";"NO";"no";"NO";

      //Constant prices
    double printPrice=40;
    double phonePrice=80;
    double tablePrice=30;



    do{
   // Welcoming message
    cout<<endl;
    cout<<"$$$$$$$$ WELCOME TO LEXIS SUPERMARKET $$$$$$$$"<<endl;
    cout<<"         --------------------------     "<<endl;

    //Declarations
    long int contact= +264846706;
    string loc="Santa Maria";

    cout<<"CONTACT US: "<<"0" <<contact<<"        "<<"LOCATE US @:"<<loc<<endl;


    cout<<"Please, obey what you will be asked to do here. "<<endl;
    cout<<endl;


     cout<<endl;

    //Things done at the supermarket
    cout<<"Two things are done in the company but at the moment option one only works: "<<endl;
    cout<<"1. Purchasing an item"<<endl;
    cout<<"2. Make enquirers"<<endl;


     //options
     int option;
    cout<<"Select an option"<<endl;
    cin>>option;


     // Name of the customer
     cout<<"Enter your first  name: "<<endl;
     string name1 , name2;
     cin>>name1;

     cout<<"Enter last name: "<<endl;
     cin>>name2;
     cout<<"\a";




    //Items been sold
    cout<<"The items been sold and prices are: "<<endl;
    cout<<"ITEMS      |   PRICES"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"A.Printer: |   40CEDIS "<<endl;
    cout<<"B.Phone    |   80CEDIS  "<<endl;
    cout<<"C.Table    |   30CEDIS  "<<endl;

    //For spacing
    cout<<endl;


    // VAT
    const double vat=0.12;

    //Customer ID
    cout<<"Please enter your Unique ID in numbers"<<endl;
    int ID;
    cin>>ID;

    //For spacing
     cout<<endl;
     //strings
     string print1= "Printer";
     string phone1= "Phone";
     string table1= "Table";

     // Demand of customer
    cout<<"What do you want to buy? (One at a time for now). Please, type the name of the item to avoid any inconveniences"<<endl;
    string buy;
    cin>>buy;

    //For spacing
    cout<<endl;




    // Quantity demanded
    cout<<"Can we know the quantity you like to buy? "<<endl;
    int quantity;
    cin>>quantity;

    //For spacing
    cout<<endl;



    cout<<"How much do you have on you? "<<endl;
    double moneyNow;
    cin>>moneyNow;

    //For spacing
    cout<<endl;



    if(!moneyNow==printPrice || !moneyNow==phonePrice || !moneyNow==tablePrice){
        cout<<"#####Your money can't buy the items you need just load your wallet!! BECAUSE YOU OWE####" <<endl;
        cout<<"Do you want to try again?? YES OR NO"<<endl;
        cin>>tryAgain;}



    else if (moneyNow<printPrice ||  moneyNow<phonePrice || moneyNow<tablePrice){
        cout<<"You can't buy"<<endl;
        cout<<"Do you want to try?"<<endl;
        cin>>tryAgain;
    }




   else if(buy=="Printer" || buy=="printer" || buy=="PRINTER"){

      vatAmount=(quantity*printPrice*0.12);
      cout<<"The vatAmount is: "<< vatAmount<<endl;
      totalCost=printPrice*quantity+vatAmount;
      cout<<"Total amount to be paid with vat: "<<totalCost<<" Cedis"<<endl;
      balance=moneyNow-totalCost;
      cout<<"Your balance after payment: "<<fixed<<balance<<" Cedis"<<endl;

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<setw(4)<<name1<<"  "<<name2<<endl;
      cout<<"UNIQUE ID: "<<setw(10)<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<setw(12)<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<setw(2)<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<setw(10)<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<setw(8)<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<setw(5)<<moneyNow<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<setw(16)<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;
      cout<<endl;

      cout<<"Do you want to buy again?? Enter yes if you want to."<<endl;
      cin>>question;
      cout<<endl;

    }


     else if(buy=="Phone" || buy=="phone" || buy=="PHONE"){

      vatAmount=(quantity*phonePrice*0.12);
      cout<<"The vatAmount is: "<< vatAmount<<endl;
      totalCost=phonePrice*quantity+vatAmount;
      cout<<"Total amount to be paid with vat: "<<totalCost<<" Cedis"<<endl;
      balance=moneyNow-totalCost;
      cout<<"Your balance after payment: "<<fixed<<balance<<" Cedis"<<endl;

      //For spacing

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<setw(4)<<name1<<"  "<<name2<<endl;
      cout<<"UNIQUE ID: "<<setw(10)<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<setw(12)<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<setw(2)<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<setw(10)<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<setw(8)<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<setw(5)<<moneyNow<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<setw(16)<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;
      cout<<endl;

      cout<<"Items been bought are not RETURNABLE only for EXCHANGE." <<endl;
      cout<<endl;

      cout<<"Do you want to buy again?? Enter yes if you want to."<<endl;
      cin>>question;
      cout<<endl;


    }

       else if(buy=="Table" || buy=="table" || buy=="TABLE"){

       vatAmount=(quantity*tablePrice*0.12);
      cout<<"The vatAmount is: "<< vatAmount<<endl;
      totalCost=tablePrice*quantity+vatAmount;
      cout<<"Total amount to be paid with vat: "<<totalCost<<" Cedis"<<endl;
      balance=moneyNow-totalCost;
      cout<<"Your balance after payment: "<<fixed<<balance<<" Cedis"<<endl;

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<name1<<"  "<<name2<<endl;
      cout<<"UNIQUE ID: "<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<moneyNow<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;

       cout<<"Items been bought are not RETURNABLE only for EXCHANGE." <<endl;
      cout<<endl;

      cout<<"Do you want to buy again?? Enter yes if you want to."<<endl;
      cin>>question;
      cout<<endl;



    }


    else{
        cout<<"Obey simple instructions. You gave a wrong input"<<endl;
        cout<<"Do you want to try again"<<endl;
        cin>>tryAgain;
    }


     } while((question=="Yes" || question=="yes" || question=="YES") && (tryAgain=="Yes" || tryAgain=="yes" || tryAgain=="YES") );
     cout<<"Thank you for coming"<<endl;


return 0;
}
