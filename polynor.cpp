#include<iostream>
using namespace std;

class Animal {
   public :

   void speed() {

    cout<<"who is more faster\n";
   }
};

class Cheetah : public Animal {
    public:

    void speed() {
        cout<<"cheetah says  i m faster\n";
    }
};

class whale : public Animal {
    public :

    void speed() {
        cout<<" whale says  i m faster than cheetah and animal";
    }
};


int main ()
{
Animal a;
Cheetah c;
whale w;
a.speed();
c.speed();
w.speed();

return 0;
}