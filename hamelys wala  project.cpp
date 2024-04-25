#include <iostream>

using namespace std;
int amount=20000;
string want="yes",sect;

class section{
public:
    layout(){
        cout<<"------------HAMLEY'S----------"<<endl;
        cout<<" _____________________________"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|     |    NERF(N) |  LEGOS(L)|"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|SOFT |____________|__________|"<<endl;
        cout<<"| TOYS|                       |"<<endl;
        cout<<"| (ST)|        REMOTE         |"<<endl;
        cout<<"|     |       CONTROLS (RC)   |"<<endl;
        cout<<"|     |          __           |"<<endl;
        cout<<"|_____|_________|  |__________|"<<endl;
    }

};
class customer{
    public:
    string toy;
    int num;
    string request="Y";
    int sum=0;
    intro(){
    cout<<"Welcome to Hamley's!.....what would you like to buy?"<<endl;
    cin>>sect;
    }
    shopping(){
    if (sect=="ST"){
        cout<<"Ok....please take a left and go straight and you will find the soft toys"<<endl;
        cout<<"Welcome to the soft toys area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","BALLU(B)","\t","   3500"},
            {" 2","\t","MICKEY MOUSE(M)","\t","   5000"},
            {" 3","\t","SIMBA(S)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="N"){
        cout<<"Ok....please go straight and you will find the Nerf guns on the left hand side"<<endl;
        cout<<"Welcome to the Nerf guns area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," GUNS","\t\t","   PRICE"},
            {" 1","\t","SNIPER(S)","\t","   3500"},
            {" 2","\t","PISTOL(P)","\t","   5000"},
            {" 3","\t","ASUALT(A)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="L"){
        cout<<"Ok....please go straight and you will find the Lego toys on the right hand side"<<endl;
        cout<<"Welcome to the Lego area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","STADIUM(S)","\t","   3500"},
            {" 2","\t","BOAT(B)","\t","           5000"},
            {" 3","\t","CAR(C)","\t","           4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="RC"){
        cout<<"Ok....This is the RC area please tell me what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","CAR(C)","\t","           3500"},
            {" 2","\t","CHOPPER(CH)","\t","   5000"},
            {" 3","\t","PLANE(P)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    }
    buying(){

        if(sect=="ST"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="B"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="M"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
         else if(sect=="N"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="P"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="A"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
         else if(sect=="L"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="B"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="C"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
         else if(sect=="RC"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="C"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="CH"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="P"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
    }
    cashing(){
    cout<<"your final Bill is:"<<sum<<endl;
    amount-=sum;
    cout<<"thank you for buying from Hamley's hope you liked our service"<<endl;}

};

int main()
{
    section maps;
    maps.layout();
    customer one;
    one.intro();
    while(want=="yes"){
        one.shopping();
        one.buying();
    }
    one.cashing();
}
