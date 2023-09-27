#include<iostream>

using namespace std;

class hero{
    private:
     int health;
     string name;
    char level;
    public:
    hero(){
        cout<<"default constructor called\n";//There is inbuilt default constructor which initializes object with default values.
        //but as we write new constructor it overwrites
    }
    //parameterized constructors--
    hero( string s, int h, char l){
        this->name= s;
        this->health= h;
        this->level= l;
    }

        //defining copy constructors
        // hero(hero &temp){
        //     string s= temp.name;

        //     this->name= s;
        //     this->level= temp.level;
        //     this->health= temp.health;
        // }

        void getValues(){
            cout<<this->health<<" "<<this-> level<<" "<<this->name<<endl;
        }
   int getHealth(){//gettters and setters
    return health;
   }
   char getLevel(){
    return level;
   }
   void setValues(int h, char c, string s){
    this->health= h;
    this->level= c;
    this->name= s;
   }


};

int main(){


//using copy constructors ---
cout<<"copy constructors defined-----------\n";
hero h3("mario",99,'A');

hero h4(h3);
h4.getValues();
h3.getValues();
h3.setValues(87,'D',"ankit");
h3.getValues();

    //constructors--
    cout<<"object created\n";
    hero *shaktiman= new hero("shaktiman",70,'A');//parameterized constructors called
    hero  *vilgax= shaktiman;//copy of a object--it will call defalult copy constructor which copy object as shallow copy ..i.e. change in other will reflect both

cout<<"vilgax--"<<(*vilgax).getHealth()<<" "<<(*vilgax).getLevel()<<endl;
    cout<<(*shaktiman).getHealth()<<" "<<(*shaktiman).getLevel()<<endl;
    cout<<"new object---";





    //dynamic allocation----

        /*same as array dynamic allocation*/
        hero *h2= new hero;
        // h2->health= 78;
        // h2->level= 'A';
        (*h2).setValues(70,'A',"alpha");
        
       
       cout<<(*h2).getHealth()<<" "<<(*h2).getLevel()<<endl;




//   hero h1;
//     cout<<h1.health<<" "<<h1.level<<endl;
//     h1.health= 90;
//     char x;
//     cin>>x;
//     cout<<"---input";
//     h1.level= x;
//      cout<<h1.health<<" "<<h1.level<<endl;
return 0;
}