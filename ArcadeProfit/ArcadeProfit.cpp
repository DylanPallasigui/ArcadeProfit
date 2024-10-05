#include <iostream>

using namespace std;

int main()
{
    //set variables
    int lucas_quar;
    int dustin_quar;
    int mike_quar;
    int max_quar;

    int lucas_cost;
    int dustin_cost;
    int mike_cost;
    int max_cost;

    int dustin_maxg;
    int mike_maxg;
    int max_maxg;

    //promt user for info
    cout << "Welcome to Hawkins arcade!" << endl;
    cout << "How many quarters did Lucas bring with him? >>" << endl;
    cin >> lucas_quar;
    cout << "How many quarters do the games Lucas prefer cost? >>" << endl;
    cin >> lucas_cost;

    cout<<"How many quarters did Dustin bring with him? >>" << endl;
    cin>>dustin_quar;
    cout<<"How many quarters do the games Dustin prefer cost? >>" << endl;
    cin>>dustin_cost;

    cout<<"How many quarters did Mike bring with him? >>" << endl;
    cin>>mike_quar;
    cout<<"How many quarters do the games Mike prefer cost? >>" << endl;
    cin>>mike_cost;

    cout<<"How many quarters did Max bring with him? >>" << endl;
    cin>>max_quar;
    cout<<"How many quarters do the games Max prefer cost? >>" << endl;
    cin>>max_cost;

    //make formula after values are input for the convenience of the output
    int lucas_games = lucas_quar/lucas_cost;
    int dustin_games = dustin_quar/dustin_cost;
    int mike_games = mike_quar/mike_cost;
    int max_games = max_quar/max_cost;

    //calculate max games that can be played and quarters remaining
    cout << "Lucas will be able to play " << lucas_games << " that each cost " << lucas_cost << " quarter(s), and will have " << lucas_quar%lucas_cost << " quarters remaining." << endl;
    cout << "Dustin will be able to play " << dustin_games << " that each cost " << dustin_cost << " quarter(s), and will have " << dustin_quar%dustin_cost << " quarters remaining." << endl;
    cout << "Mike will be able to play " << mike_games << " that each cost " << mike_cost << " quarter(s), and will have " << mike_quar%mike_cost << " quarters remaining." << endl;
    cout << "Max will be able to play " << max_games << " that each cost " << max_cost << " quarter(s), and will have " << max_quar%max_cost << " quarters remaining." << endl;
    
    //calculate profit made by the arcade
    //average profit for an arcade is 200 quarters(im guessing) + what the group spends
    //had no idea what the sample is based on so i used a random number for the nightly profit(200 quarters)
    float night = (lucas_games + dustin_games + mike_games + max_games + 200)*0.25;
    float week = night*7;
    float month = week*4;
    float year = month*12;

    //output the profit calculated
    //sadly there was no actual need to use setprecision as it is calcualted in quarters
    //thus it either ends in a multiple of 0.25 or a whole number
    cout << "On an average night, how much money does The Palace make?: $" << night << endl;
    cout << "The Palace weekly profit: $" << week << endl;
    cout << "The Palace monthly profit: $" << month << endl;
    cout << "The Palace yearly profit: $" << year << endl;

    return 0;
}