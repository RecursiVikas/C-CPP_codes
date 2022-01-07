#include<iostream>
using namespace std;

class Position {
private:
    int x,y;

public:
    void setPosition(int x,int y)
    {
        this->x = x;
        this->y = y;
    }

    void getPosition()
    {
        cout<<x<<" "<<y<<endl;
    }

    friend void changePos(Position&);
};

void changePos(Position &p)
{
    p.x = 100;
    p.y = 200;

    cout<<"In friend..."<<p.x<<" "<<p.y<<endl;
}

int main()
{
    Position p1;
    p1.setPosition(132,3424);
    p1.getPosition();

    changePos(p1);

    p1.getPosition();

}