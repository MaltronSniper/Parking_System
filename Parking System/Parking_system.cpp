#include <iostream>

using namespace std;


class park
{
    private:
        static int idNum;
        int floor;
        int lotSpace;
        int user;
        string CarComp = "NA";
        string CarColor = "NA";

    public:
        park(int level, int Space)
        {
            idNum++;
            floor = level;
            lotSpace = Space;
            user = idNum;
        }

        void getId()
        {
            cout << floor << "/"<< lotSpace << "/" << idNum << endl;
        }

        void LocateCar()
        {
            cout << "The Floor your car is on : " << floor << " You Have parked in lot Number " << lotSpace << endl;
        }

        void SetCarParam(string company, string color)
        {
            CarComp = company;
            CarColor = color;
        }

        void GetAllInfo()
        {
            cout << "The car is Located on Floor Number " << floor << " On the Number Lot " << lotSpace << endl;
            cout << "The Company of the car is " << CarComp << " And the Color is " << CarColor << endl;
            cout << "The Parking Member being " << user <<endl;
            cout << "\n";
        }


};

int park :: idNum;

int main()
{
    park id1(2,53);
    id1.getId();
    id1.SetCarParam("Honda", "Pink");
    id1.GetAllInfo();

    park id2(3,45);
    id2.GetAllInfo();

    id1.GetAllInfo();
    
    return 0;
}