#include<iostream>
#include<conio.h>
using namespace std;
class fastfoodShop{
	public:
		mainmenu()
	   {cout<<"\n\n\n\t\t\t\t\t==========================================\n"
		    <<"\t\t\t\t\t|\t ********M E N U**********       |\n"
	        <<"\t\t\t\t\t==========================================\n\n\n\n"
	        <<"**************************************************\n\n"
	        <<" \t1 . Pizza"   <<endl<<endl
	        <<" \t2 . Burgers" <<endl<<endl
	        <<" \t3 . Rolls"   <<endl<<endl
	        <<" \t4 . Beverages"<<endl<<endl
			<<" \t5 . Deals"    <<endl;
	        
		}

	};
		  //////FOR PIZZA///////
class PIZZA:public fastfoodShop{
	public:
		Pizza()
		{ int x,i,total;	
		  char ch1;
		  int amount[3];
		  int SNO[4]={01,02,03,04};
		  int pPrice[3]={150.00,499.00,699.00};
		  int Psize[3]={1,2,3};
		  string Customername;
	   	  string pizza[4]={"Fajita","Ch.supreme","tikkaBoti","HotShengai"};
		  string Size[3]={"Regular","Medium","Large"};

		  cout<<"\n**************************************************************************\n"
		      <<"    Flavours \t\t\t\tSize\t\t\tPrice "
		      <<"\n**************************************************************************\n\n"
		      <<" \t1 . Fajita\t              1.Regular\t\t\tRS.150"   <<endl
	          <<" \t2 . Chicken Supreme\t      2.Medium\t\t\tRS.499"  <<endl
	          <<" \t3 . Tikka Boti\t\t      3.Large\t\t\tRS.699"       <<endl
	          <<" \t4 . Hot Shengai"                                   <<endl;
	      cout<<"\nPlease Enter Your Name: ";
		  cin>>Customername;
		  cout<<"\nHello "<<Customername<<" ! ";
		  cout<<" \nHow many Pizza you want to buy?\n"
		      <<"(Maximum limit is 3 per order):";  
		  cin>>x; 
		  
		  if (x>3||x<1)  //if 1
		     {cout<<"Your Order cannot be done.\n\nits more than the max limit or less than minimum.  ";
			  cout<<"\n\ndo you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Pizza();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}
			  
		  else if (x>=1) //if 2
		      { for (i=0;i<x;i++)
	          { cout<<"\nEnter pizza flavour(no):";
	     	    cin>>SNO[i];
	     	   if (SNO[i]>4||SNO[i]<1)//if 3
	     	    {cout<<"NO flavour exist at this num.";
	     	    cout<<"do you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Pizza();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}//endd 1f3
			     
		   	   else   //else 3
			    {cout<<" Pizza Flavour "<<pizza[SNO[i]-1]<<endl<<endl
	     	         <<"Enter Size: ";
	     	     cin>>Psize[i];
	     	     cout<<" Pizza Size "<<Size[Psize[i]-1]<<endl;
	     	     amount[i]=pPrice[Psize[i]-1];
	     	
	}//else 3 ends
	}//for ends 
	}//if 2 ends

	
	    cout<<"\n  For Total Order list\n ";
		system("pause");
		system("cls");
		cout<<"----------------------------------------------------------------------------"<<endl
		    <<"|\t\t\t    PIZZA~Total Order     \t\t           |"
			<<"\n----------------------------------------------------------------------------"<<endl;
			
			
		cout<<"\n\n\t****************************************************\n\n"<<endl;
        
        cout<<" ================================================================"<<endl
            <<" |  PIZZA FLAVOUR           |    SIZE     |      Total Price    |"<<endl
            <<" =========~~======================~~=================~~=========="<<endl;
        for (i=0;i<x;i++)
	 	{
		 cout<<"\t"<<pizza[SNO[i]-1] <<"  \t\t"
		     <<Size[Psize[i]-1] <<"  \t"
	         <<"Rs."<<amount[i] <<"\t\t\t\n";
		 
			}
		 cout<<"\n\n___________________________________________________________________\n\n";	
		 total=amount[0]+amount[1]+amount[2];
		 cout<<"Dear "<<Customername <<" ! Your Total Amount is Rs "<<total<<"/-"
		     <<"\nYour order will be ready for takeaway in 20 minutes"
		     <<"\nTHANKS FOR VISITING OUR SHOP!";
		 	
		 	}//method end   
		 };//class ends
	                 //////FOR BURGERS//////
class BURGERS:public fastfoodShop		  
{    public:	    
	      Burgers()
	       {
			 int x,i,total;	
		   char ch1;
		   int amount[3];
		   string Customername;
		   string burgers[5]={"ZingerBurger","ZingerBurger.ch","BbqBurger","PettyBurger","ChickenBurger"};
		   int SNO[5]={01,02,03,04,05};
		   float bPrice[5]={150.00,160.00,100.00,250.00,220.00};
		   int bquantity[3];
		   cout<<"\n******************************************************\n"
		       <<"|      Burgers             |\t\t  Price      |\n"
		       <<"******************************************************\n"
		       <<"\n\t1 . Zinger Burger\t\t  RS.150"      <<endl
	           <<"\t2 . ZingerBurger(ch)\t\t  RS.160 "<<endl
	           <<"\t3 . BbqBurger\t\t\t  RS.100"            <<endl
	           <<"\t4 . PettyBurger\t\t\t  RS.250"          <<endl
	           <<"\t5 . ChickenBurger\t\t  RS.220"        <<endl;
	          
			  cout<<"\nPlease Enter Your Name: ";
		       cin>>Customername;
		      cout<<"\nHello "<<Customername<<" ! "; 
		      cout<<"\nHow many  burgers you want to buy?\n"
		          <<"(Maximum limit is 3 per order):";  
		      cin>>x; 
		  	if (x>3||x<1)  //if 1
		     {cout<<"Your Order cannot be done,\nits more than the max limit or less than minimum ";//end if 1
		      cout<<"\nDo you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Burgers();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}
			else if (x>=1) //if 2
		     { for (i=0;i<x;i++)
	          {cout<<"\nPlease Enter your choice(no):";
	     	   cin>>SNO[i];
	     	   if (SNO[i]>5||SNO[i]<1)//nested if of 2
	     	 { cout<<"NO burger exist at this num.";
	     	   cout<<"do you want to try again?(y/n)";
	     	   cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//double nestednested
	     	    { Burgers();}
	     	   else
			    {cout<<"thanks for visiting our shop.";}//else of double nested
			     return 0;}
			   else//else of nested if of 2
			   {cout<<" Burger Category "<<burgers[SNO[i]-1]<<endl;
	           	amount[i]=bPrice[SNO[i]-1];
             }//end else of nested if of 2
			 }//for
             cout<<"\n  For Total Order list\n ";
	     	 system("pause");
		     system("cls");
		cout<<"---------------------------------------------------------"<<endl
		    <<"|\t\t    BURGER~Total Order     \t\t|"
			<<"\n---------------------------------------------------------"<<endl;
			
			
		cout<<"\n\n\t**************************************\n\n"<<endl;
        
        cout<<" ================================================="          <<endl
            <<" |         BURGER          |      Total Price    |"          <<endl
            <<" ==========~~============================~~======="          <<endl;
        for (i=0;i<x;i++)
	 	{
		 cout<<"\t"<<burgers[SNO[i]-1] <<"\t\t "
	         <<"Rs."<<amount[i] <<"\t\t\t\n";
		 
			}
		 cout<<"\n\n___________________________________________________________________\n\n";	
		 total=amount[0]+amount[1]+amount[2];
		 cout<<"Dear "<<Customername <<" ! Your Total Amount is Rs "<<total<<"/-"
		     <<"\nYour order will be ready for takeaway in 20 minutes"
		     <<"\nTHANKS FOR VISITING OUR SHOP!";
		 		     	
	}//else end

	}//method end
};//class ends
	
	
	   //////////FOR ROLLS////////////
class ROLLS:public fastfoodShop
{ public:		  
	   Rolls()
		{ int x,i,total;	
		   char ch1;
		   int amount[5];
		   string Customername;
		   string rolls[5]={"ChatniRoll","ch.CheeseRoll","VegetableRoll","BroastRoll","ChocolateRoll"};
		   int SNO[5]={01,02,03,04,05};
		   float rPrice[5]={100.00,150.00,110.00,250.00,200.00};
		   int rquantity[4];
		   
		    cout<<"\n************************************************************\n"
		       <<"|              ROLLS            |\t   Price      |\n"
		       <<"************************************************************\n"
		       <<"\n\t1 . Chatni Roll\t\t\t  RS.100"       <<endl
	           <<"\t2 . Chicken Cheese Roll\t\t  RS.150 "<<endl
	           <<"\t3 . Vegetable Roll\t\t  RS.110"    <<endl
	           <<"\t4 . Broast Roll\t\t\t  RS.250"       <<endl
	           <<"\t5 . Chocolate Roll\t\t  RS.200"      <<endl;
	           
	           cout<<"\nPlease Enter Your Name: ";
		       cin>>Customername;
		      cout<<"\nHello "<<Customername<<" ! "; 
		      cout<<"\nHow many  Rolls you want to buy?\n"
		          <<"(Maximum limit is 4 per order):";  
		      cin>>x; 
		  	if (x>4||x<1)  //if 1
		     {cout<<"Your Order cannot be done\nits more than the max limit or its less than minimum.";//end if 1
		      cout<<"\ndo you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	    {Rolls();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}
			 
			else if (x>=1) //if 2
		     { for (i=0;i<x;i++)
	          {cout<<"\nPlease Enter your choice(no):";
	     	   cin>>SNO[i];
	     	   if (SNO[i]>5||SNO[i]<1)//nested if of 2
	     	 { cout<<"NO Roll exist at this num.";
	     	   cout<<"do you want to try again?(y/n)";
	     	   cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//double nestednested
	     	    { Rolls();}
	     	   else
			    {cout<<"thanks for visiting our shop.";}//else of double nested
			     return 0;}
			   else//else of nested if of 2
			   {cout<<" Rolls Category "<<rolls[SNO[i]-1]<<endl;
	           	amount[i]=rPrice[SNO[i]-1];
             }//end else of nested if of 2
			 }//for
             cout<<"\n  For Total Order list\n ";
	     	 system("pause");
		     system("cls");
		cout<<"---------------------------------------------------------"<<endl
		    <<"|\t\t    ROLLS~Total Order     \t\t|"
			<<"\n---------------------------------------------------------"<<endl;
			
			
		cout<<"\n\n\t**************************************\n\n"<<endl;
        
        cout<<" ================================================="          <<endl
            <<" |         ROLLS         |      Total Price    |"          <<endl
            <<" ==========~~============================~~======="          <<endl;
        for (i=0;i<x;i++)
	 	{
		 cout<<"\t"<<rolls[SNO[i]-1] <<"\t\t "
	         <<"Rs."<<amount[i] <<"\t\t\t\n";
		 
			}
		 cout<<"\n\n___________________________________________________________________\n\n";	
		 total=amount[0]+amount[1]+amount[2]+amount[3];
		 cout<<"Dear "<<Customername <<" ! Your Total Amount is Rs "<<total<<"/-"
		     <<"\nYour order will be ready for takeaway in 20 minutes"
		     <<"\nTHANKS FOR VISITING OUR SHOP!";
		 		     	
		  }//if 2 ends
		  }//method end
	
};
		  
		  ////////FOR BEVERAGES//////////
		  
class BEVERAGES:public fastfoodShop		  
{	public:
		Beverages()
		  { int x,i,total;	
		    char ch1;
		    int amount[4];
		    string Customername;
		    string beverage[6]={"Coke","Sprite","ChocolateShake","AlmondShake","McSpecial","MineralWater"};
		    int SNO[6]={01,02,03,04,05,06};
		    float bePrice[6]={60.00,60.00,80.00,250.00,500.00,30.00};
		    int bequantity[4];
		    
		    cout<<"\n************************************************************\n"
		       <<"|           BEVERAGES            |\t   Price      |\n"
		       <<"************************************************************\n"
		       <<"\n\t1 . Coke\t\t\t  RS.60"         <<endl
	           <<"\t2 . Sprite\t\t\t  RS.60 "        <<endl
	           <<"\t3 . Chocloate Shake\t\t  RS.80"  <<endl
	           <<"\t4 . Almond Shake\t\t  RS.250"    <<endl
	           <<"\t5 . Mc Special Shake\t\t  RS.500"<<endl
	           <<"\t6 . Mineral Water\t\t  RS.30"    <<endl;
               
			   cout<<"\nPlease Enter Your Name: ";
		       cin>>Customername;
		      cout<<"\nHello "<<Customername<<" ! "; 
		      cout<<"\nHow many  beverages you want to buy?\n"
		          <<"(Maximum limit is 4 per order):";  
		      cin>>x; 
		  	if (x>4||x<1)  //if 1
		     {cout<<"Your Order cannot be done.\nits more than the max limit or its less than minimum. ";//end if 1
		      cout<<"\ndo you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Beverages();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}
		    else if (x>=1) //if 2
		     { for (i=0;i<x;i++)
	          {cout<<"\nPlease Enter your choice(no):";
	     	   cin>>SNO[i];
	     	   if (SNO[i]>6||SNO[i]<1)//nested if of 2
	     	 { cout<<"NO Roll exist at this num.";
	     	   cout<<"do you want to try again?(y/n)";
	     	   cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//double nestednested
	     	    { Beverages();}
	     	   else
			    {cout<<"thanks for visiting our shop.";}//else of double nested
			     return 0;}
			   else//else of nested if of 2
			   {cout<<" Beverages Category ["<<beverage[SNO[i]-1]<<"]"<<endl;
	           	amount[i]=bePrice[SNO[i]-1];
             }//end else of nested if of 2
			 }//for	      
		     cout<<"\n  For Total Order list\n ";
	     	system("pause");
		    system("cls");
		    cout<<"---------------------------------------------------------"<<endl
		        <<"|\t\t    BEVERAGES~Total Order     \t\t|"
			    <<"\n---------------------------------------------------------"<<endl;
			
			
		    cout<<"\n\n\t**************************************\n\n"<<endl;
        
            cout<<" ================================================="<<endl
                <<" |         BEVERAGES        |      TOTAL PRICE    |"  <<endl
                <<" ==========~~============================~~======="<<endl;
            for (i=0;i<x;i++)
	     	{
		     cout<<"\t"<<beverage[SNO[i]-1] <<"    \t\t"
	             <<"Rs."<<amount[i] <<"\n";
		 
			}
		 cout<<"\n\n___________________________________________________________________\n\n";	
		 total=amount[0]+amount[1]+amount[2]+amount[3];
		 cout<<"Dear "<<Customername <<" ! Your Total Amount is Rs "<<total<<"/-"
		     <<"\nYour order will be ready for takeaway in 20 minutes"
		     <<"\nTHANKS FOR VISITING OUR SHOP!";
		 		     	
		  }//if 2 ends
		  }//method end
	};
		  ////////////////DEALS//////////////////
		  
class DEALS:public fastfoodShop	
{	public:
    Deals()
		{ int x,i,total;	
		  char ch1;
		  int amount[2];
		  int SNO[4]={01,02,03,04};
		  int dPrice[4]={599.00,499.00,799.00,299.00};
		  int dquantity[2];
		  string Customername;
	   	  string deal[4]={"DEAL1","DEAL2","DEAL3","DEAL4"};
		 

		  cout<<"\n**************************************************************************\n"
		      <<"       \t\t\tDEALS\t\t\t\tPrice "
		      <<"\n**************************************************************************\n\n"
		      <<" __________**DEAL 1**__________"  <<endl
	          <<" |   2 Zinger Burger          |"  <<endl
	          <<" |   1 ch.Chatni Roll         |\t\t\t\t RS 599"  <<endl
	          <<" |   2 Drinks                 |"  <<endl
	          <<" |                            |"  <<endl
			  <<" |____________________________|"  <<endl<<endl<<endl
			  <<" __________**DEAL 2**_________"<<endl
			  <<" |   2 Medium Pizza          |"<<endl
			  <<" |   1 Steak                 |\t\t\t\t RS 499"<<endl
			  <<" |   2 Mayo Rolls            |"<<endl
			  <<" |                           |"<<endl
			  <<" |___________________________|"<<endl<<endl<<endl
			  <<" __________**DEAL 3**_________"<<endl
			  <<" |   2 MC Special shake      |"<<endl
			  <<" |   1 Large Pizza(Bbq)      |\t\t\t\t RS 799"<<endl
			  <<" |   1 Broast Roll           |"<<endl
			  <<" |                           |"<<endl
			  <<" |___________________________|"<<endl<<endl<<endl
			  <<" __________**DEAL 4**_________"<<endl
			  <<" |   3 Petti Burger          |"<<endl
			  <<" |   1 Chocolate Roll        |\t\t\t\t RS 555"<<endl
			  <<" |   1 Drink                 |"<<endl
			  <<" |___________________________|"<<endl;
	      cout<<"\nPlease Enter Your Name: ";
		  cin>>Customername;
		  cout<<"\nHello "<<Customername<<" ! ";
		  cout<<" \nHow many Deals you want to buy?\n"
		      <<"(Maximum limit is 2 per order):";  
		  cin>>x; 
		  
		  if (x>2||x<1)  //if 1
		     {cout<<"\nYour Order cannot be done.\nits more than the max limit or its less than minimum. ";
		      cout<<"\ndo you want to try again?(y/n)";
	     	  cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Deals();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}
			  
		   else if (x>=1) //if 2
		      { for (i=0;i<x;i++)
	          { cout<<"\nEnter Deal(no):";
	     	    cin>>SNO[i];
	     	   if (SNO[i]>4||SNO[i]<1)//if 3
	     	    {cout<<"NO Deal exist at this num.";
	     	    cout<<"do you want to try again?(y/n)";
	     	    cin>>ch1;
	     	   if (ch1=='y'||ch1=='Y')//nested 1f 3
	     	   { Deals();}
	     	   else//nestedelse3
			    {cout<<"thanks for visiting our shop.";}
			     return 0;}//endd 1f3
			     
		   	   else   //else 3
			    {cout<<"DEAL "<<deal[SNO[i]-1]<<endl<<endl;
	     	     
	     	    
	     	     amount[i]=dPrice[SNO[i]-1];
	     	
	}//else 3 ends
	}//for ends 
	}//if 2 ends

	
	    cout<<"\n  For Total Order list\n ";
		system("pause");
		system("cls");
		cout<<"----------------------------------------------------------------------------"<<endl
		    <<"|\t\t\t    DEAL~Total Order     \t\t           |"
			<<"\n----------------------------------------------------------------------------"<<endl;
			
			
		cout<<"\n\n\t****************************************************\n\n"<<endl;
        
          cout<<" ==============================================="          <<endl
            <<" |         DEALS          |      Total Price    |"          <<endl
            <<" ==========~~============================~~======="          <<endl;
        for (i=0;i<x;i++)
	 	{
		 cout<<"\t"<<deal[SNO[i]-1] <<"  \t\t"
	         <<"Rs."<<amount[i] <<"\t\t\t\n";
		 
			}
		 cout<<"\n\n___________________________________________________________________\n\n";	
		 total=amount[0]+amount[1];
		 cout<<"Dear "<<Customername <<" ! Your Total Amount is Rs "<<total<<"/-"
		     <<"\nYour order will be ready for takeaway in 20 minutes"
		     <<"\nTHANKS FOR VISITING OUR SHOP!";
		 	
		 	}//method end   
};
int main() 
{ int x;
  char ch;
	fastfoodShop f;
	PIZZA p;
	BURGERS b;
	DEALS d;
	BEVERAGES be;
	ROLLS r;
	system("Color 0F");
	cout<<"\n\n\n\n\n\n"
	    <<"\n\n\t\t\t\t ###      ###         ###                                        \t     ##########   "   <<endl
		<<"\t\t\t\t ###      ### ######  ###   ######   ####    ###    ###  ######  \t     ##########  ######      "<<endl        
        <<"\t\t\t\t ###  ##  ### ##      ###  ##      ##    ##  ####  ####  ##      \t         ###    ##    ##" <<endl
	    <<"\t\t\t\t ### #### ### #####   ###  ##      ##    ##  ## #### ##  #####   \t         ###    ##    ##"<<endl
	    <<"\t\t\t\t #####  ##### ##      ###  ##      ##    ##  ##  ##  ##  ##      \t         ###    ##    ##"<<endl
	    <<"\t\t\t\t  ####  ####  ######  ###   ######   ####    ##      ##  ######  \t         ###     ######" <<endl;
	    
	cout<<"\n\n\n\n\n"
	    <<"  ##########                   ##\t #########              ##                                       \t ########                     ##          "             <<endl    
	    <<"  ##########                   ##\t###########             ##                  ##                   \t#########                     ##                    "   <<endl
	    <<"  ###                          ##\t###     ###  # ####     ##  ######  # #### #### ## ###   #####   \t####        ##   ##  ######   ##     #####   ##      ##"<<endl
        <<"  #######  #####   #####   ######\t###     ###  ##     ######  ##      ##      ##  ####### ##       \t #########  ##   ## ####    ######   ##      ###    ###"<<endl
        <<"  ###     #     # #     # #    ##\t###     ###  ##    #    ##  #####   ##      ##  ##   ## ## ##### \t      ####  ##  ##  ######    ##     #####   ## #### ##"<<endl
        <<"  ###     #     # #     # #    ##\t###########  ##    #    ##  ##      ##      ##  ##   ## ## ## ## \t##########    ##        ###   ##     ##      ##  ##  ##"<<endl
        <<"  ###      #####   #####   ##### \t #########   ##     #####   ######  ##      ##  ##   ##  #### ## \t#########     ##    #######   #####  #####   ##      ##"<<endl<<endl;
    cout<<"\n========================================================================================================================================================================"<<endl;
     cout<<"\n\n\nHELLO !this is ZEE FAST FOOD\nWe are providing high quality food at your doorstep."
	     <<"\n\n For MENU ";
		  system("pause");
	      system("cls");
	      
	f.mainmenu();
    cout<<"\nWhat would you like to Order?(no): ";
    cin>>x;
    if (x<6&&x>0)
    {
	   switch (x)
      { case 1:
         system("pause");
	     system("cls");
         p.Pizza();
	     break;
	    case 2:
	    	system("pause");
	     system("cls");
	     b.Burgers();
	     break;
	    case 3:
	     system("pause");
	     system("cls");
	     r.Rolls();
	     break;
	    case 4:
	     system("pause");
	     system("cls");
	     be.Beverages();
	     break;
	    case 5:
		 system("pause");
		 system("cls");
		 d.Deals();
		 break;
		 default:
		 cout<<"invalid input!";
		 break; 
	}//switch
    }//if
    else 
   { cout<<"\nInvalid Input";
     cout<<"do you want to try again?(y/n)";
	 cin>>ch;
	 if (ch=='y'||ch=='Y')//nested 1f 3
	 { 	f.mainmenu();
    cout<<"\nWhat would you like to Order?(no): ";
    cin>>x;
    if (x<6&&x>0)
    {
	   switch (x)
      { case 1:
         system("pause");
	     system("cls");
         p.Pizza();
	     break;
	    case 2:
	    	system("pause");
	     system("cls");
	     b.Burgers();
	     break;
	    case 3:
	     system("pause");
	     system("cls");
	     r.Rolls();
	     break;
	    case 4:
	     system("pause");
	     system("cls");
	     be.Beverages();
	     break;
	    case 5:
		 system("pause");
		 system("cls");
		 d.Deals();
		 break;
		 default:
		 cout<<"invalid input!";
		 break; 
	}//switch
    }//if
    else 
   { cout<<"\nInvalid Input.No more tries left!";}}
	 else//nestedelse3
	{cout<<"thanks for visiting our shop.";
	return 0;} }
    getch();

return 0;	}
   
	
