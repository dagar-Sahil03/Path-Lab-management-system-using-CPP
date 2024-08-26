void login();
void registr();

void login_menu()
{
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Pathlab                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        cout<<"Thanks for using this program\nThis program is created by @Sahil_dagar\n\n";
                        break;
                default:
                        system("clear");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        login_menu();
        }
        
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello"<<user<<"\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                return;
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                login_menu();
        }
}

void registr()
{
        
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        login_menu();
        
        
}
