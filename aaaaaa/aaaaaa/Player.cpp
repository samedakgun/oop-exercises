#include <string>
#include <iostream>
#include "Player.hpp"
using namespace std;

    Player::Player()
    {
        setName();
        setTeam();
        setValue();
        setPhoneNumber();
        
        cout<<getName()<<" is created"<<endl;
    }
    
    Player::~Player()
    {
        fflush(stdin);
        cout<<"Player is deleted";
    }
    
    void Player::setName()
    {
        string _name="";
        
        do
        {
            cout<<"Please enter player name: ";
            cin>>_name;
        } while (_name.size()<=2);
        
        name = _name;
    
    }
    
    void Player::setTeam()
    {
        string _team="";
        
        do
        {
            cout<<"Please enter player team: ";
            cin>>_team;
        } while (_team.size()<=5);
        
        team = _team;
    }
    
    void Player::setValue()
    {
        if (name == "Ronaldo")
        {
            value=1000;
        }
        else if(name=="Pogba")
        {
            value=2000;
        }
        else if(name=="Messi")
        {
            value=1500;
        }
        else
        {
            value = 500;
        }
    }
    
    void Player::setPhoneNumber()
    {
        fflush(stdin);
        string _phoneNumber= "";
        
        do
        {
            cout<<"Please enter player phone: ";
            cin>>_phoneNumber;
        }while (_phoneNumber.size()!=11);
        
        phoneNumber = _phoneNumber;
    }
    
    string Player::getName() const
    {
        return name;
    }
    
    string Player::getTeam() const
    {
        return team;
    }
    
    int Player::getValue() const
    {
        return value;
    }
    
    string Player::getPhoneNumber() const
    {
        return phoneNumber;
    }
    
    void Player::displayPlayerInformation() const
    {
        cout<<"Player name is: "<<getName()<<endl;
        cout<<"Player team is: "<<getTeam()<<endl;
        cout<<"Player value is "<<getValue()<<endl;
        cout<<"Player phone is "<<getPhoneNumber()<<endl;
    }
#include <string>
#include <iostream>
#include "Player.hpp"
using namespace std;

int main()
{
    fflush(stdin);

    Player myPlayer;
    myPlayer.displayPlayerInformation();
    myPlayer.setName();
    myPlayer.displayPlayerInformation();
    
}
int number1,fak1=1;,number2,fak2=1;
cin>>number1;
cin>>number3;
if(number+number2%2==0)
{
    
}
else{
    for (inti i=number1;i>0;i--)
    {
        fak1=fak1*i;
    }
}

for(ınt ı = x, ınt n)

