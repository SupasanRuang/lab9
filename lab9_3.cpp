#include<iostream>

using namespace std;



int main()
{
    int age,tall,money;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=20)
    {
        //age<=20
        cout<<"Enter your height: ";
            cin>>tall;
            if(tall<160)
            {
                // tall<160  UNFRIEND
                
                cout<<"Your status = "<<"UNFRIEND";
            }
            else if(tall<175)
            {
                // tall<175  FRIEND
                cout<<"Your status = "<<"FRIEND";
            }
            else 
            {
                cout<<"Enter your property: ";
                cin>>money;
                if(money>69000000)
                {
                    //money>69 000 000   MARRIED
                    cout<<"Your status = "<<"MARRIED";
                    
                }
                else 
                {
                    //money<=69 000 000  ONE-NIGHT-STAND
                    cout<<"Your status = "<<"ONE-NIGHT-STAND";
                }

            }


    }
    else if(age<30)
    {
        //age<=30
        cout<<"Enter your property: ";
        cin>>money;
        if(money>10000000)
        {
            //money>10 000 000  BEST FRIEND
            cout<<"Your status = "<<"BEST FRIEND";
        }
        else 
        {
            //money<=10 000 000  UNFRIEND
            cout<<"Your status = "<<"UNFRIEND";
        }
    }
    else 
    {
        //age=30++ UNFRIEND
        cout<<"Your status = "<<"UNFRIEND";
    }




    return 0 ;
}









/*
"Enter your age: "
cout<<"Enter your height: ";
cout<<"Enter your property: ";
cout<<"Your status = ";
cout<<"Your status = "<<"UNFRIEND"<<endl;
cout<<"Your status = "<<"FRIEND"<<endl;
cout<<"Your status = "<<"BEST FRIEND"<<endl;
cout<<"Your status = "<<"ONE-NIGHT-STAND"<<endl;
cout<<"Your status = "<<"MARRIED"<<endl;
*/
