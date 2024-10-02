#include<iostream>
using namespace std;
void Display_Orders(int  spool_ordered, int Spool_in_stock, int special_charges = 10);
void Get_Data_From_User()
{

    int  spool_ordered, Spool_in_stock, special_charges ;
    string choice;
    do
    {
        cout << "How much Spools ordered ? : " << endl;
        cin >> spool_ordered;
    }while (spool_ordered <1);
    do
    {
        cout << "How much Spools are in Stock ? : " << endl;
        cin >> Spool_in_stock;
    } while (Spool_in_stock < 0);
  
    
        cout << "If there is any special shipping or handling " << endl;
      cout << " Press y for yes and n for no :" << endl;
            cin >> choice;
            if (choice == "y")
            {
                do
                {
                    cout << "Enter The Special charges :" << endl;
                    cin >> special_charges;
                } while (special_charges < 0);
                Display_Orders(spool_ordered ,Spool_in_stock, special_charges);
                  
            }
    
        else
        {
                Display_Orders(spool_ordered, Spool_in_stock);
        }

}
void Display_Orders(int  spool_ordered, int Spool_in_stock, int special_charges)
{
    if (spool_ordered <= Spool_in_stock)
    {
        cout << " The number of spools read to ship from current stock" << endl;
        cout << spool_ordered << endl;
        cout << "The subtotal of Handling : " << spool_ordered * 100 << endl;
        cout << "Total shipping and handling charges : " << spool_ordered * special_charges << endl;
        cout << "Total of order ready to ship : " << (spool_ordered * 100) + (spool_ordered * special_charges) << endl;
    }
    else
    {
        int ready_to_ship = Spool_in_stock;
        cout << "The number of Backorder Spools are : " << spool_ordered - Spool_in_stock << endl;
        cout<<"Spools  ready to ship : "<< Spool_in_stock << endl;
        cout << "The subtotal of Handling : " << Spool_in_stock * 100 << endl;
        cout << "Total shipping and handling charges : " << ready_to_ship * special_charges << endl;
        cout << "Total of order ready to ship : " << (ready_to_ship * 100) + (ready_to_ship * special_charges) << endl;
    }

}
int main()
{
    Get_Data_From_User();
}