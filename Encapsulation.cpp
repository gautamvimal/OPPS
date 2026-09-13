#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
        int id;
        int age;
        
    public:

        string name;
        int nos;

        Student(){
            cout<<"ctor has been called "<<endl;
        }
        Student(int id, int age, string name, int nos){
            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;

        }

        void sleep(){
            cout<<"sleeping"<<endl;
        }


        void studying(){//ctor
            cout<<"studying"<<endl;
        }

        ~Student(){//dtor
            cout<<"destructor has been called"<<endl;
        }


        //getter / setter
        void setId(int iiid){//layer of authentication
            this->id = iiid;
        }
        int getId() const{
            return this->id;
        }
    
    private:
        void gfChatting(){
            cout<<"chats withher gf"<<endl;
        }
    

};

int main(){
    Student A(1,17,"vimal",5);
    cout<<A.name<<endl;
    // cout<<A.id<<endl;//can't access it!
    A.setId(231);
    cout<<A.getId()<<endl;
    

    return 0;
}
