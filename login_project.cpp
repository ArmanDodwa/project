#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class temp{
    public:
    string yourname, email, passward, jeck;
    fstream file;
    

    void signup();
    void login();
    void forget(){

    };
        
    
};

void temp:: signup(){
        cout<<"enter yourname"<<endl;
        getline(cin, jeck); //yaha ye first getline ko nahi le raha he pata karna  
        getline(cin, yourname);
        cout<<"enter email"<<endl;
        getline(cin, email);
        cout<<"enter passward"<<endl;
        getline(cin, passward);

        file.open("signup.txt",ios::out | ios ::app);
        file<<yourname<<endl<<email<<endl<<passward<<endl;
        file.close();
}
void temp :: login(){
    string searchName, searchPassward, jeck2;

    cout<<"-------------login--------"<<endl;

    cout<<"enter your name"<<endl;
    getline(cin, jeck2); //some problem
    getline(cin, searchName);
    cout<<"enter your passward"<<endl;
    getline(cin, passward);

     string fileName = "signup.txt";
    

    ifstream file(fileName);
    string line;
    string line2;

    if(file.is_open()){
        while(getline(file,line)){
            
            if(line == searchName)
            {
                 if(file.is_open())
                {
                    while(getline(file,line))
                    {
                          if(line == passward){
                                      cout<<"success";
                          }
                    }
                    
                }
          
          
   
                
            }
                else{
                    cout<<"";
                }

          

        }
    }
    else{
        cout<<"unable"<<fileName<<endl;

    }

        
}

int main(){
    temp obj;
   int choice;
   cout<<"enter for login-----1"<<endl;
   cout<<"enter for signup-----2"<<endl;
   cout<<"enter for forget-----3"<<endl;
   cout<<"enter for login-----4"<<endl;
   cin>>choice;
   switch (choice)
   {
   case 1:
        obj.login();
    
    break;
   case 2:
        obj.signup();
    
    break;
   case 3:
        obj.signup();
    
    break;
   case 4:
        obj.signup();
    
    break;
   
   default:
   cout<<"invilad";
    break;
   }
    
 

    return 0;

}