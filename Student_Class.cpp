#include<iostream>
#include<string>
using namespace std;

class Student {
    public:


        //ctor:
        Student(){
            cout<<this->name<<" calling default constructor"<<endl;
        }

        //Parameterized constructor
        Student(int id, string name, int age, int nos){
            cout<<this->name<<" calling default constructor"<<endl;
            this->id = id;
            this->name = name;
            this->age = age;
            this->nos = nos;
        }

         //Copy constructor
        Student(const Student &srcobj){
            cout<<this->name<<" calling default constructor"<<endl;
            this->id = srcobj.id;
            this->name = srcobj.name;
            this->age = srcobj.age;
            this->nos = srcobj.nos;
        }


        //Attribute
        int id;
        int age;
        string name;
        int nos;

        //Behaviour
        void study(){
            cout<<this->name<<" Studying"<<endl;
        }

        void sleep(){
            cout<<this->name<<" Sleeping"<<endl;
        }

        void bunking(){
            cout<<this->name<<" bunking"<<endl;
        }

        //destructor
        ~Student(){
            cout<<this->name<<" calling default destructor"<<endl;
        }

};
int main(){
    // Student A;
    // A.name = "Ramu";
    // A.id = 10;
    // A.nos = 5;
    // A.age = 19;

    // cout<<A.name<<endl;
    // cout<<A.age<<endl;
    // cout<<A.id<<endl;
    // cout<<A.nos<<endl;
    // A.sleep();
    // A.bunking();
    
    // Student B;
    // B.name = "Shamu";
    // B.id = 1;
    // B.nos = 5;
    // B.age = 19;
    // cout<<B.name<<endl;
    // cout<<B.age<<endl;
    // cout<<B.id<<endl;
    // cout<<B.nos<<endl;
    // B.sleep();
    
    
    
    // Student A(1,"vimal",19,5);//allocate in stack
    // cout<<A.name<<" "<<A.age<<endl;
    // Student B = A;
    // cout<<B.name<<" "<<B.age<<endl;


    //Dyanmic allocation
    Student *A = new Student(1,"vimal",19,5);
    cout<<A->name<<endl;
    cout<<A->age<<endl;
    A->study();
  
    Student *B = new Student(2,"Deepak",23,4);
    cout<<B->name<<endl;
    cout<<B->age<<endl;
    B->study();

    delete A;//we need to delete it manually bcz its in dynamic memory,... before it was in stack so destructor call itself
    delete B;


    return 0;
}