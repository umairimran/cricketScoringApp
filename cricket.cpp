#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>
#include <Windows.h>

using namespace std;


int TrA = 0, TrB = 0;

class cricketinfo {

protected:
    //teams for current match
    vector<string>TeamA;
    vector<string>TeamB;
    //vectors for storing teams and other things
    vector<string>Pakistan; vector<string>India; vector<string>England; vector<string>Afghanistan; vector<string>Australia; vector<string>Ireland;
    vector<string>NewZealand; vector<string>SouthAfrica; vector<string>SriLanka;
    vector<string>WestIndies; vector<string>Zimbabwe; vector<string>Umpires; vector<string>Stadiums; vector<string>Commentators; vector<string>Coaches;
    vector<string>MatchEmpires; vector<string>MatchCommentary;
    string MatchStadium;
    string CoachA;
    string CoachB;
    double RunRate;
    double RequiredRR;
    double StrikeRate;
    int PS;
    //private functions
    void SetRunRate(int TotalRuns, int TotalBalls) {
        this->RunRate = ((double)TotalRuns / (double)TotalBalls) * 6;
        cout << this->RunRate << endl;
    }
    void SetStrikeRate(int RunsScored, int BallsFaced) {
        this->StrikeRate = ((double)RunsScored / (double)BallsFaced) * 100;
        cout << this->StrikeRate << endl;
    }
    void ProjectedScore(int TotalRuns, int OversPlayed, int TotalOvers) {
        PS = (TotalRuns / OversPlayed) * TotalOvers;
        cout << this->PS << endl;
    }
    void RRR(int TotalRunsScored, int RequiredTarget, int TotalOvers, int OversPlayed) {
        int RemainingOvers = TotalOvers - OversPlayed;
        int RunsLeft = RequiredTarget - TotalRunsScored;
        RequiredRR = RunsLeft / RemainingOvers;
        cout << this->RequiredRR << endl;
    }


public:
    //constructor
    cricketinfo() {
        Pakistan.push_back("Imam-ul-Haq");
        Pakistan.push_back("Fakhar Zaman");
        Pakistan.push_back("Shan Masood");
        Pakistan.push_back("Abdullah");
        Pakistan.push_back("Babar Azam");
        Pakistan.push_back("Khushdil");
        Pakistan.push_back("Haris Sohail");
        Pakistan.push_back("M.Rizwan");
        Pakistan.push_back("Muhammad Haris");
        Pakistan.push_back("Shadab Khan");
        Pakistan.push_back("Mohammad Nawaz");
        Pakistan.push_back("Agha Salman");
        Pakistan.push_back("Iftikhar Ahmed");
        Pakistan.push_back("Shaheen ");
        Pakistan.push_back("Naseem Shah");
        Pakistan.push_back("Haris Rauf");
        Pakistan.push_back("Mohammad Wasim Jr");
        Pakistan.push_back("Shahnawaz Dahani");
        Pakistan.push_back("Mohammad Zahid");
        Pakistan.push_back("Mohammad Hasnain");
        India.push_back("Virat Kohli");
        India.push_back("Rohit Sharma");
        India.push_back("Suryakumar Yadav");
        India.push_back("Shreyas Iyer");
        India.push_back("Sanju Samson");
        India.push_back("KL Rahul");
        India.push_back("Ishan Kishan");
        India.push_back("Rishabh Pant");
        India.push_back("Hardik Pandya");
        India.push_back("Ravindra Jadeja");
        India.push_back("Axar Patel");
        India.push_back("Washington Sundar");
        India.push_back("Yuzvendra Chahal");
        India.push_back("Jasprit Bumrah");
        India.push_back("Kuldeep Yadav");
        India.push_back("Arshdeep Singh");
        India.push_back("Umran Malik");
        India.push_back("Mohammed Siraj");
        India.push_back("Mohammed Shami");
        Afghanistan.push_back("Mohammad Nabi");
        Afghanistan.push_back("Najabullah Zadran");
        Afghanistan.push_back("Fareed Ahmed");
        Afghanistan.push_back("Qais Ahmad");
        Afghanistan.push_back("Fazalhaq Farooqi");
        Afghanistan.push_back("Usman Ghani");
        Afghanistan.push_back("Rahmanullah Gurbaz");
        Afghanistan.push_back("Rashid Khan");
        Afghanistan.push_back("Azmatullah Omarzai");
        Afghanistan.push_back("Darwish Rasool");
        Afghanistan.push_back("Mohammad Saleem");
        Afghanistan.push_back("Naveen-Ul-Haq");
        Afghanistan.push_back("Mujeeb-Ur-Rehman");
        Afghanistan.push_back("Ibrahim Zadran");
        Afghanistan.push_back("Hazratullah Zazai");
        England.push_back("Jos Butler");
        England.push_back("Moeen Ali");
        England.push_back("Jofra Archer");
        England.push_back("Sam Curran");
        England.push_back("Will Jacks");
        England.push_back("Saqib Mahmood");
        England.push_back("Dawid Malan");
        England.push_back("Adil Rashid");
        England.push_back("Rehan Ahmed");
        England.push_back("Jason Roy");
        England.push_back("Phil Salt");
        England.push_back("Reece Topley");
        England.push_back("James Vince");
        England.push_back("Chris Woakes");
        England.push_back("Mark Wood");
        England.push_back("Tom Abeli");
        Australia.push_back("Pat Cummins");
        Australia.push_back("Ashton Agar");
        Australia.push_back("Alex Carey");
        Australia.push_back("Peter Handscomb");
        Australia.push_back("Travis Head");
        Australia.push_back("Marnus Labuschange");
        Australia.push_back("Lance Morris");
        Australia.push_back("Matt Renshaw");
        Australia.push_back("Mitchelle Renshaw");
        Australia.push_back("Steve Smith");
        Australia.push_back("Scott Boland");
        Australia.push_back("Cameron Green");
        Australia.push_back("Josh Hazlewood");
        Australia.push_back("Usman Khawaja");
        Australia.push_back("Nathan Lyon");
        Australia.push_back("Todd Murphy");
        Australia.push_back("Mitchell Starc");
        Australia.push_back("David Warner");
        SouthAfrica.push_back("Lungi Ngidi");
        SouthAfrica.push_back("Tristan Stubbs");
        SouthAfrica.push_back("Aiden Markram");
        SouthAfrica.push_back("Beuran Hendricks");
        SouthAfrica.push_back("JP Duminy");
        SouthAfrica.push_back("Tabraiz Shamsi");
        SouthAfrica.push_back("Chris Morris");
        SouthAfrica.push_back("Faf Du Plessis");
        SouthAfrica.push_back("Andile Phehlukwayo");
        SouthAfrica.push_back("Rassie Van Der Dussen");
        SouthAfrica.push_back("Kagiso Rabada");
        SouthAfrica.push_back("Gerald Coetzee");
        SouthAfrica.push_back("Tony De Zorzi");
        SouthAfrica.push_back("Quinton De Knock");
        SouthAfrica.push_back("David Miller");
        NewZealand.push_back("Henry Nicolls");
        NewZealand.push_back("Michael Bracewell");
        NewZealand.push_back("Mark Chapman");
        NewZealand.push_back("Daryl Mitchell");
        NewZealand.push_back("Tom Latham");
        NewZealand.push_back("Mitchell Santner");
        NewZealand.push_back("Finn Allen");
        NewZealand.push_back("Devon Conway");
        NewZealand.push_back("Glenn Phillips");
        NewZealand.push_back("Jacob Duffy");
        NewZealand.push_back("Lockie Ferguson");
        NewZealand.push_back("Doug Bracewell");
        NewZealand.push_back("Blair Tickner");
        NewZealand.push_back("Henry Shipley");
        NewZealand.push_back("Ish Sodhi");
        Ireland.push_back("Gareth Delany");
        Ireland.push_back("Andy McBrine");
        Ireland.push_back("Harry Tector");
        Ireland.push_back("Simi Singh");
        Ireland.push_back("Neil Rock");
        Ireland.push_back("Paul Stirling");
        Ireland.push_back("Andrew Balbirnie");
        Ireland.push_back("George Dockrell");
        Ireland.push_back("Mark Adair");
        Ireland.push_back("Graham Hume");
        Ireland.push_back("Curtis Campher");
        Ireland.push_back("Barry McCarthy");
        Ireland.push_back("Matthew Humphreys");
        Ireland.push_back("James McCollum");
        Ireland.push_back("Fion Hand");
        Ireland.push_back("Murray Commins");
        Ireland.push_back("Benjamin White");
        Ireland.push_back("Stephen Doheny");
        Ireland.push_back("Joshua Little");
        Ireland.push_back("Lorcan Tucker");
        Ireland.push_back("Tyrone Kane");
        Ireland.push_back("Craig Young");
        SriLanka.push_back("Dimuth Karunaratne");
        SriLanka.push_back("Kusal Perera");
        SriLanka.push_back("Isuru Udana");
        SriLanka.push_back("Lahiru Thirimanne");
        SriLanka.push_back("Kusal Mendis");
        SriLanka.push_back("Wanindu Hasaranga");
        SriLanka.push_back("Avishka Fernando");
        SriLanka.push_back("Jeffrey Vandersay");
        SriLanka.push_back("Angelo Mathews");
        SriLanka.push_back("Kasun Rajitha");
        SriLanka.push_back("Dhananja Silva");
        WestIndies.push_back("Darren Bravo");
        WestIndies.push_back("Jomel Warrican");
        WestIndies.push_back("Jeremy Solozano");
        WestIndies.push_back("Jermaine Blackwood");
        WestIndies.push_back("Joshua Da Silva");
        WestIndies.push_back("Kyle Mayers");
        WestIndies.push_back("Devon Thomas");
        WestIndies.push_back("Shermon Lewis");
        WestIndies.push_back("Shanon Gabriel");
        WestIndies.push_back("Jason Holder");
        WestIndies.push_back("Raymon Reifer");
        WestIndies.push_back("Nkrumah Bonner");
        WestIndies.push_back("Gudakesh Motie");
        WestIndies.push_back("Oshane Thomas");
        WestIndies.push_back("Kraigg Brathwaite");
        WestIndies.push_back("Nicholas Pooran");
        WestIndies.push_back("Sunil Ambris");
        WestIndies.push_back("Rahkeem Cornwall");
        WestIndies.push_back("Roston Chase");
        WestIndies.push_back("Shimron Hetmyer");
        WestIndies.push_back("Keacy Carty");
        WestIndies.push_back("Kemar Roach");
        WestIndies.push_back("Shayne Moseley");
        WestIndies.push_back("Fabian Allen");
        WestIndies.push_back("Veerasammy Permaul");
        WestIndies.push_back("Evin Lewis");
        WestIndies.push_back("Jayden Seales");
        WestIndies.push_back("Shai Hope");
        WestIndies.push_back("Rana Hashir");
        Zimbabwe.push_back("Blessing Muzarabani");
        Zimbabwe.push_back("Tinotenda Mutombodzi");
        Zimbabwe.push_back("Craig Ervine");
        Zimbabwe.push_back("Wesley Madhevere");
        Zimbabwe.push_back("Brandon Mavuta");
        Zimbabwe.push_back("Regis Chakabva");
        Zimbabwe.push_back("Innocent Kaia");
        Zimbabwe.push_back("Tadiwanashe Marumani");
        Zimbabwe.push_back("Donald Tiripano");
        Zimbabwe.push_back("Richmond Mutumbami");
        Zimbabwe.push_back("Dion Myers");
        Zimbabwe.push_back("Ainsley Ndlovu");
        Zimbabwe.push_back("Wellington Masakadza");
        Zimbabwe.push_back("Kevin Kasuza");
        Zimbabwe.push_back("Tendai Chatara");
        Zimbabwe.push_back("Sean Williams");
        Zimbabwe.push_back("Tanaka Chivanga");
        Zimbabwe.push_back("Sikander Raza");
        Umpires.push_back("Christopher Gaffaney(NewZealand)");
        Umpires.push_back("Kumar Dharmasena(SriLanka)");
        Umpires.push_back("Marais Erasmus(SouthAfrica)");
        Umpires.push_back("Michael Gough(England)");
        Umpires.push_back("Nitin Menon(India)");
        Umpires.push_back("Paul Reiffel(Australia)");
        Umpires.push_back("Aleem Dar(Pakistan)");
        Umpires.push_back("Ahsan Raza(Pakistan)");
        Umpires.push_back("Rashid Riaz(Pakistan)");
        Umpires.push_back("Ali Naqvi(Pakistan)");
        Umpires.push_back("Faisal Afridi(Pakistan)");
        Umpires.push_back("Joel Wilson(WestIndies)");
        Umpires.push_back("Rodney Tucker(Australia)");
        Umpires.push_back("Ahmed Shah Pakteen(Afghanistan)");
        Stadiums.push_back("Narendra Modi Stadium");
        Stadiums.push_back("Eden Gardens");
        Stadiums.push_back("Melbourne Cricket Ground Stadium");
        Stadiums.push_back("Perth Stadium");
        Stadiums.push_back("Adelaide Oval Stadium");
        Stadiums.push_back("Multan Cricket Stadium");
        Stadiums.push_back("Gaddafi Stadium");
        Stadiums.push_back("The Oval");
        Stadiums.push_back("Lords Stadium");
        Stadiums.push_back("Dubai International Cricket Stadium");
        Stadiums.push_back("Sydney Showground Stadium");
        Stadiums.push_back("Sheikh Zayed Cricket Stadium");
        Stadiums.push_back("Buffalo Park Stadium");
        Stadiums.push_back("Quaid-e-Azam Cricket Stadium");
        Stadiums.push_back("Bellerive Oval");
        Stadiums.push_back("HPCA Stadium");
        Stadiums.push_back("Sky Stadium");
        Stadiums.push_back("National Stadium Karachi");
        Commentators.push_back("Akash Chopra");
        Commentators.push_back("Wasim Akram");
        Commentators.push_back("Ramiz Raja");
        Commentators.push_back("Natalie Germanos");
        Commentators.push_back("Shane Watson");
        Commentators.push_back("Athar Ali Khan");
        Commentators.push_back("Aamir Sohail");
        Commentators.push_back("Bazid Khan");
        Commentators.push_back("Michael Clarke");
        Commentators.push_back("Dale Steyn");
        Commentators.push_back("Sunil Gavaskar");
        Commentators.push_back("Simon Doull");
        Commentators.push_back("Samuel Badree");
        Commentators.push_back("Mel Jones");
        Commentators.push_back("Anjum Chopra");
        Commentators.push_back("Ajay Mehra");
        Commentators.push_back("Gautam Gambhir");
        Coaches.push_back("Mickey Arthur");
        Coaches.push_back("Intikhab Alam");
        Coaches.push_back("Gary Kirsten");
        Coaches.push_back("Kapil Dev");
        Coaches.push_back("Mohsin Khan");
        Coaches.push_back("Rahul Dravid");
        Coaches.push_back("Allan Donald");
        Coaches.push_back("Andy Flower");
        Coaches.push_back("Saqlain Mushtaq");
        Coaches.push_back("Mark Boucher");
        Coaches.push_back("Stephen Fleming");
        Coaches.push_back("Mike Hesson");
        Coaches.push_back("Gary Stead");


    }
    //functions
    void displayinfo() {
        int team1 = 0, team2 = 0;
        do {
            cout << "Select two teams to play the match:  " << endl;
            cout << "1.Pakistan" << endl;
            cout << "2.Afghanistan" << endl;
            cout << "3.India" << endl;
            cout << "4.NewZealand" << endl;
            cout << "5.Australia" << endl;
            cout << "6.Ireland" << endl;
            cout << "7.Zimbabwe" << endl;
            cout << "8.South-Africa" << endl;
            cout << "9.West-Indies" << endl;
            cout << "10.SriLanka" << endl;
            cout << "11.England" << endl;
            cout << endl << endl;
            cout << "Enter Team A: ";
            cin >> team1;
            cout << "Enter Team B: ";
            cin >> team2;
        } while (team1 <= 0 || team1 > 11 || team2 <= 0 || team2 > 11 || team1 == team2);
        //teams selection
        if (team1 == 1) {
            cout << "The first team you selected is Pakistan!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Pakistan.size(); i++) {
                cout << i + 1 << ":" << Pakistan[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > Pakistan.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == Pakistan[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(Pakistan[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for Pakistan are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }
        if (team1 == 2) {
            cout << "The first team you selected is Afganistan!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Afghanistan.size(); i++) {
                cout << i + 1 << ":" << Afghanistan[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > Afghanistan.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == Afghanistan[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(Afghanistan[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for Afghanistan are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }
        if (team1 == 3) {
            cout << "The first team you selected is India!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < India.size(); i++) {
                cout << i + 1 << ":" << India[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > India.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == India[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(India[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for India are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 4) {
            cout << "The first team you selected is NewZealand!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < NewZealand.size(); i++) {
                cout << i + 1 << ":" << NewZealand[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > NewZealand.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == NewZealand[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(NewZealand[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for NewZealand are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 5) {
            cout << "The first team you selected is Australia!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Australia.size(); i++) {
                cout << i + 1 << ":" << Australia[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > Australia.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == Australia[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(Australia[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for Australia are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }
        if (team1 == 6) {
            cout << "The first team you selected is Ireland!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Ireland.size(); i++) {
                cout << i + 1 << ":" << Ireland[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > Ireland.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == Ireland[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(Ireland[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for Ireland are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 7) {
            cout << "The first team you selected is Zimbabwe!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Zimbabwe.size(); i++) {
                cout << i + 1 << ":" << Zimbabwe[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > Zimbabwe.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == Zimbabwe[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(Zimbabwe[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for Zimbabwe are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 8) {
            cout << "The first team you selected is South-Africa!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < SouthAfrica.size(); i++) {
                cout << i + 1 << ":" << SouthAfrica[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > SouthAfrica.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == SouthAfrica[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(SouthAfrica[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for South-Africa are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 9) {
            cout << "The first team you selected is West-Indies!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < WestIndies.size(); i++) {
                cout << i + 1 << ":" << WestIndies[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > WestIndies.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == WestIndies[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(WestIndies[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for West-Indies are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 10) {
            cout << "The first team you selected is SriLanka!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < SriLanka.size(); i++) {
                cout << i + 1 << ":" << India[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > SriLanka.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == SriLanka[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(SriLanka[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for SriLanka are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team1 == 11) {
            cout << "The first team you selected is England!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < England.size(); i++) {
                cout << i + 1 << ":" << England[i] << endl;
            }
            int playerinput = 0;
            int choice0 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput;

                bool playeralreadyselected = false;

                if (playerinput <= 0 || playerinput > England.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamA.size(); i++) {
                    if (TeamA[i] == England[playerinput - 1]) {
                        playeralreadyselected = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected) {
                    TeamA.push_back(England[playerinput - 1]);
                    choice0++;
                }

            } while (choice0 < 10);

            cout << "Your Selected players for England are: " << endl;
            for (int i = 0; i < TeamA.size(); i++) {
                cout << TeamA[i] << endl;
            }
        }

        if (team2 == 1) {
            cout << "The second team you selected is Pakistan!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Pakistan.size(); i++) {
                cout << i + 1 << ":" << Pakistan[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Pakistan.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == Pakistan[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(Pakistan[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for Pakistan are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 2) {
            cout << "The second team you selected is Afghanistan!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Afghanistan.size(); i++) {
                cout << i + 1 << ":" << Afghanistan[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Afghanistan.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == Afghanistan[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(Afghanistan[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for Afghanistan are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 3) {
            cout << "The second team you selected is India!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < India.size(); i++) {
                cout << i + 1 << ":" << India[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Pakistan.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == India[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(India[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for India are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 4) {
            cout << "The second team you selected is NewZealand!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < NewZealand.size(); i++) {
                cout << i + 1 << ":" << NewZealand[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > NewZealand.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == NewZealand[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(NewZealand[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for NewZealand are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 5) {
            cout << "The second team you selected is Australia!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Australia.size(); i++) {
                cout << i + 1 << ":" << Australia[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Australia.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == Australia[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(Australia[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for Australia are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 6) {
            cout << "The second team you selected is Ireland!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Ireland.size(); i++) {
                cout << i + 1 << ":" << Ireland[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Ireland.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == Ireland[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(Ireland[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for Ireland are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 7) {
            cout << "The second team you selected is Zimbabwe!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < Zimbabwe.size(); i++) {
                cout << i + 1 << ":" << Zimbabwe[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > Zimbabwe.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == Zimbabwe[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(Zimbabwe[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for Zimbabwe are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 8) {
            cout << "The second team you selected is South-Africa!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < SouthAfrica.size(); i++) {
                cout << i + 1 << ":" << SouthAfrica[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > SouthAfrica.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == SouthAfrica[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(SouthAfrica[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for South-Africa are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 9) {
            cout << "The second team you selected is West-Indies!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < WestIndies.size(); i++) {
                cout << i + 1 << ":" << WestIndies[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > WestIndies.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == WestIndies[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(WestIndies[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for West-Indies are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 10) {
            cout << "The second team you selected is SriLanka!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < SriLanka.size(); i++) {
                cout << i + 1 << ":" << SriLanka[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > SriLanka.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == SriLanka[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(SriLanka[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for SriLanka are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        if (team2 == 11) {
            cout << "The second team you selected is England!" << endl;
            cout << "Please select 10 players:" << endl;
            for (int i = 0; i < England.size(); i++) {
                cout << i + 1 << ":" << England[i] << endl;
            }
            int playerinput1 = 0;
            int choice1 = 0;
            do {
                cout << "Enter player no. to add: ";
                cin >> playerinput1;

                bool playeralreadyselected2 = false;

                if (playerinput1 <= 0 || playerinput1 > England.size()) {
                    cout << "Please enter a valid number!" << endl;
                    continue;
                }

                for (int i = 0; i < TeamB.size(); i++) {
                    if (TeamB[i] == England[playerinput1 - 1]) {
                        playeralreadyselected2 = true;
                        cout << "Player already selected!" << endl;
                        break;
                    }
                }

                if (!playeralreadyselected2) {
                    TeamB.push_back(England[playerinput1 - 1]);
                    choice1++;
                }

            } while (choice1 < 10);

            cout << "Your Selected players for England are: " << endl;
            for (int i = 0; i < TeamB.size(); i++) {
                cout << TeamB[i] << endl;
            }
        }

        int check = 0;
        int stdchoice;

        do {

            cout << "Select the stadium for the Cricket Match!" << endl;
            for (int i = 0; i < Stadiums.size(); i++) {
                cout << i + 1 << "." << Stadiums[i] << endl;
            }
            cin >> stdchoice;
            if (stdchoice <= 0 || stdchoice > Stadiums.size()) {
                cout << "Please pick a valid number!" << endl;
                check = 0;
                continue;
            }
            else {
                MatchStadium = Stadiums[stdchoice - 1];
                check = 1;
            }
        } while (check != 1);
        cout << "Your Selected Stadium is:  " << MatchStadium << endl;
        cout << "Please select three umpires for the match:" << endl;
        for (int i = 0; i < Umpires.size(); i++) {
            cout << i + 1 << ":" << Umpires[i] << endl;
        }
        int playerinput1 = 0;
        int choice1 = 0;
        do {
            cout << "Enter player no. to add: ";
            cin >> playerinput1;

            bool playeralreadyselected2 = false;

            if (playerinput1 <= 0 || playerinput1 > Umpires.size()) {
                cout << "Please enter a valid number!" << endl;
                continue;
            }

            for (int i = 0; i < MatchEmpires.size(); i++) {
                if (MatchEmpires[i] == Umpires[playerinput1 - 1]) {
                    playeralreadyselected2 = true;
                    cout << "Player already selected!" << endl;
                    break;
                }
            }

            if (!playeralreadyselected2) {
                MatchEmpires.push_back(Umpires[playerinput1 - 1]);
                choice1++;
            }

        } while (choice1 < 3);

        cout << "Your Selected umpires for the match are: " << endl;
        for (int i = 0; i < MatchEmpires.size(); i++) {
            cout << MatchEmpires[i] << endl;
        }

        cout << "Please select three Commentators for the match:" << endl;
        for (int i = 0; i < Commentators.size(); i++) {
            cout << i + 1 << ":" << Commentators[i] << endl;
        }
        playerinput1 = 0;
        choice1 = 0;
        do {
            cout << "Enter player no. to add: ";
            cin >> playerinput1;

            bool playeralreadyselected2 = false;

            if (playerinput1 <= 0 || playerinput1 > Commentators.size()) {
                cout << "Please enter a valid number!" << endl;
                continue;
            }

            for (int i = 0; i < MatchCommentary.size(); i++) {
                if (MatchCommentary[i] == Commentators[playerinput1 - 1]) {
                    playeralreadyselected2 = true;
                    cout << "Player already selected!" << endl;
                    break;
                }
            }

            if (!playeralreadyselected2) {
                MatchCommentary.push_back(Commentators[playerinput1 - 1]);
                choice1++;
            }

        } while (choice1 < 3);

        cout << "Your Selected commentators for the match are: " << endl;
        for (int i = 0; i < MatchCommentary.size(); i++) {
            cout << MatchCommentary[i] << endl;
        }
        check = 0;
        do {

            cout << "Select the Coach for the first team!" << endl;
            for (int i = 0; i < Coaches.size(); i++) {
                cout << i + 1 << "." << Coaches[i] << endl;
            }
            cin >> stdchoice;
            if (stdchoice <= 0 || stdchoice > Coaches.size()) {
                cout << "Please pick a valid number!" << endl;
                check = 0;
                continue;
            }
            else {
                CoachA = Coaches[stdchoice - 1];
                check = 1;
            }
        } while (check != 1);
        cout << "Your Coach for the first team is:  " << CoachA << endl;

        check = 0;
        do {

            cout << "Select the Coach for the second team!" << endl;
            for (int i = 0; i < Coaches.size(); i++) {
                cout << i + 1 << "." << Coaches[i] << endl;
            }
            cin >> stdchoice;
            if (stdchoice <= 0 || stdchoice > Coaches.size()) {
                cout << "Please pick a valid number!" << endl;
                check = 0;
                continue;
            }
            else {
                CoachB = Coaches[stdchoice - 1];
                check = 1;
            }
        } while (check != 1);
        cout << "Your Coach for the second team is:  " << CoachB << endl;


    }

    void StoreCricketDetails() {
        cout << "Welcome to Total Cricket Scorer \n";
        cout << endl;
        string nof;
        cout << "Enter name of the file : ";
        cin >> nof;
        ofstream data(nof.c_str());
        if (data.is_open()) {
            data << "Pakistan Players: " << endl;
            for (int i = 0; i < Pakistan.size(); i++) {
                data << Pakistan[i] << endl;
            }
            data << endl << endl;
            data << "Indian Players: " << endl;
            for (int i = 0; i < India.size(); i++) {
                data << India[i] << endl;
            }
            data << endl << endl;
            data << "England Players: " << endl;
            for (int i = 0; i < England.size(); i++) {
                data << England[i] << endl;
            }
            data << endl << endl;
            data << "Ireland Players: " << endl;
            for (int i = 0; i < Ireland.size(); i++) {
                data << Ireland[i] << endl;
            }
            data << endl << endl;
            data << "Sri-Lankan Players: " << endl;
            for (int i = 0; i < SriLanka.size(); i++) {
                data << SriLanka[i] << endl;
            }
            data << endl << endl;
            data << "West-Indies Players: " << endl;
            for (int i = 0; i < WestIndies.size(); i++) {
                data << WestIndies[i] << endl;
            }
            data << endl << endl;
            data << "Australian Players: " << endl;
            for (int i = 0; i < Australia.size(); i++) {
                data << Australia[i] << endl;
            }
            data << endl << endl;
            data << "South-African Players: " << endl;
            for (int i = 0; i < SouthAfrica.size(); i++) {
                data << SouthAfrica[i] << endl;
            }
            data << endl << endl;
            data << "NewZealand Players: " << endl;
            for (int i = 0; i < NewZealand.size(); i++) {
                data << NewZealand[i] << endl;
            }
            data << endl << endl;
            data << "Zimbabwe Players: " << endl;
            for (int i = 0; i < Zimbabwe.size(); i++) {
                data << Zimbabwe[i] << endl;
            }
            data << endl << endl;
            data << "Afghanistan Players: " << endl;
            for (int i = 0; i < Afghanistan.size(); i++) {
                data << Afghanistan[i] << endl;
            }
            data << endl << endl;

            data << "Stadium Details! " << endl;
            for (int i = 0; i < Stadiums.size(); i++) {
                data << Stadiums[i] << endl;
            }
            data << endl << endl;
            data << "Umpires Details: " << endl;
            for (int i = 0; i < Umpires.size(); i++) {
                data << Umpires[i] << endl;
            }
            data << endl << endl;

            data << "Coaches Details: " << endl;
            for (int i = 0; i < Coaches.size(); i++) {
                data << Coaches[i] << endl;
            }
            data << endl << endl;
            data << "Commentators Details: " << endl;
            for (int i = 0; i < Commentators.size(); i++) {
                data << Commentators[i] << endl;
            }

        }
        data.close();


    }

    void StoreMatchDetails() {
        string nof;
        cout << "Enter name of file for the match to record information: ";
        cin >> nof;
        ofstream data(nof.c_str());
        if (data.is_open()) {
            data << "The match details you are trying to play are: " << endl;
            data << "First Coach is: " << CoachA << endl;
            data << "Second Coach is: " << CoachB << endl;
            data << "The Stadium you are playing in: " << MatchStadium << endl;
            data << "The list of the Umpires: " << endl;
            for (int i = 0; i < MatchEmpires.size(); i++)
                data << MatchEmpires[i] << endl;
            data << endl << endl;
            data << "The list of the Commentators: " << endl;
            for (int i = 0; i < MatchCommentary.size(); i++)
                data << MatchCommentary[i] << endl;
            data << endl << endl;
            data << "The details of the first team in the match are: " << endl;
            for (int i = 0; i < TeamA.size(); i++)
                data << TeamA[i] << endl;
            data << endl << endl;
            data << "The details of are second team in the match are: " << endl;
            for (int i = 0; i < TeamB.size(); i++)
                data << TeamB[i] << endl;
        }

        cout << "The match details you are trying to play are: " << endl;
        cout << "First Coach is: " << CoachA << endl;
        cout << "Second Coach is: " << CoachB << endl;
        cout << "The Stadium you are playing in: " << MatchStadium << endl;
        cout << "The list of the Umpires: " << endl;
        for (int i = 0; i < MatchEmpires.size(); i++)
            cout << MatchEmpires[i] << endl;
        cout << endl << endl;
        cout << "The list of the Commentators: " << endl;
        for (int i = 0; i < MatchCommentary.size(); i++)
            cout << MatchCommentary[i] << endl;
        cout << endl << endl;
        cout << "The details of the first team in the match are: " << endl;
        for (int i = 0; i < TeamA.size(); i++)
            cout << TeamA[i] << endl;
        cout << endl << endl;
        cout << "The details of are second team in the match are: " << endl;
        for (int i = 0; i < TeamB.size(); i++)
            cout << TeamB[i] << endl;
        cout << endl << endl;
    }

};
class Score {
public:
    string how_out;
    int runs;
    int balls;
    int fours;
    int sixes;
    int dot_balls;
    float strike_rate;
    string bowler;
    int overs;
    int wickets;
    int wides;
    int no_balls;

public:
    Score(string how_out = "not out", int runs = 0, int balls = 0, int fours = 0, int sixes = 0,
        int dot_balls = 0, float strike_rate = 0.0, string bowler = "", int minutes = 0,
        int overs = 0, int wickets = 0, int wides = 0, int no_balls = 0) {
        this->how_out = how_out;
        this->runs = runs;
        this->balls = balls;
        this->fours = fours;
        this->sixes = sixes;
        this->dot_balls = dot_balls;
        this->strike_rate = strike_rate;
        this->bowler = bowler;

        this->overs = overs;
        this->wickets = wickets;
        this->wides = wides;
        this->no_balls = no_balls;
    }
    // Setters
    void setHowOut(string how_out);
    void setRuns(int runs);
    void setBalls(int balls);
    void setFours(int fours);
    void setSixes(int sixes);
    void setDotBalls(int dot_balls);
    void setStrikeRate(float strike_rate);
    void setBowler(string bowler);
    void setMinutes(int minutes);
    void setOvers(int overs);
    int getOvers();
    void setWickets(int wickets)
    {
        this->wickets = wickets;
    }
    int getWickets()
    {
        return wickets;
    }
    void setWides(int value) {
        wides = value;
    }

    int getWides() const {
        return wides;
    }

    void setNoBalls(int value) {
        no_balls = value;
    }

    int getNoBalls() const {
        return no_balls;
    }
    int getDotBalls()
    {
        return no_balls;
    }

    // Getters
    string getHowOut();
    int getRuns();
    int getBalls();
    int getFours();
    int getSixes();
    /*   int getDotBalls();*/
    float getStrikeRate();
    string getBowler();
    int getMinutes();
    /*calculate strike rate*/
    void calculate_strike_rate();
    Score& operator=(const Score& obj) {
        if (this != &obj) {
            // copy values from obj to this object
            how_out = obj.how_out;
            runs = obj.runs;
            balls = obj.balls;
            fours = obj.fours;
            sixes = obj.sixes;
            dot_balls = obj.dot_balls;
            strike_rate = obj.strike_rate;
            bowler = obj.bowler;

            overs = obj.overs;
            wickets = obj.wickets;
            wides = obj.wides;
            no_balls = obj.no_balls;
        }
        return *this;
    }


};
class Player : public cricketinfo {
public:
    string name;
    int indvidualscore;
    Score score;

};


void Score::calculate_strike_rate()
{

    this->strike_rate = (this->runs / this->balls) * 100;

}
// Setter definitions
void Score::setHowOut(string how_out) {
    this->how_out = how_out;
}

void Score::setRuns(int runs) {
    this->runs = runs;
    cout << "Runs=" << runs;
}

void Score::setBalls(int balls) {
    this->balls = balls;
    cout << endl << "balls=" << balls << endl;
}

void Score::setFours(int fours) {
    this->fours = fours;
}

void Score::setSixes(int sixes) {
    this->sixes = sixes;
}

void Score::setDotBalls(int dot_balls) {
    this->dot_balls = dot_balls;
}

void Score::setStrikeRate(float strike_rate) {
    this->strike_rate = strike_rate;
}

void Score::setBowler(string bowler) {
    this->bowler = bowler;
}



// Getter definitions
string Score::getHowOut() {
    return how_out;
}

int Score::getRuns() {
    return runs;
}

int Score::getBalls() {
    return balls;
}

int Score::getFours() {
    return fours;
}

int Score::getSixes() {
    return sixes;
}



float Score::getStrikeRate() {

    if ((this->runs && this->balls) != 0)
        calculate_strike_rate();
    return strike_rate;
}

string Score::getBowler() {
    return bowler;
}

void Score::setOvers(int overs)
{
    this->overs = overs;
}
int Score::getOvers()
{
    return overs;
}

class team {
public:
    Player players[11];

    //constructor





};

class CricketMatch : public Player {
    int** CMatchA;
    int** CMatchB;
    int state;

public:
    void gamestart() {
        StoreCricketDetails();
        int totalScoreByTeamA = 0;
        int totalScoreByTeamB = 0;
        int overs = 0;
        int check = 0, input;
        cout << "Select How many overs match do you want to play!" << endl;
        do {
            cout << "1) 1 Over Match!" << endl;
            cout << "2) 2 Overs Match!" << endl;
            cout << "3) 5 Overs Match!" << endl;
            cout << "4) 20 Overs Match(T-20)" << endl;
            cout << "5) 50 Overs Match(1 Day International)" << endl;
            cout << "6) Test Match(90 Overs)" << endl;
            cout << endl << endl << "Enter your desired overs to start the match!" << endl;
            cin >> input;
            if (input <= 0 || input > 6) {
                cout << "Please Enter a valid input!" << endl;
                check = 0;
                continue;
            }
            else {
                check = 1;
                continue;
            }
        } while (check != 1);
        if (input == 1) {
            overs = 1;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }


        }
        if (input == 2) {
            overs = 2;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }
        }
        if (input == 3) {
            overs = 5;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }

        }
        if (input == 4) {
            overs = 20;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }
        }
        if (input == 5) {
            overs = 50;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }
        }
        if (input == 6)
        {
            overs = 90;
            CMatchA = new int* [overs];
            CMatchB = new int* [overs];
            for (int i = 0; i < overs; i++)
            {
                CMatchA[i] = new int[6];
                CMatchB[i] = new int[6];
            }
        }
        displayinfo();
        StoreMatchDetails();
        int toss = 0;
        srand(static_cast<unsigned int>(time(nullptr)));
        int tossoutcome = 0;
        team* TeamAPlayers = new team;
        team* TeamBPlayers = new team;
        for (int i = 0; i < TeamA.size(); i++)
        {
            TeamAPlayers->players[i].name = TeamA[i];

            TeamBPlayers->players[i].name = TeamB[i];
        }
        if (tossoutcome == toss)
        {
            cout << "Congrats! Team A won the toss!" << endl;
            cout << "What would you like to do?" << endl;

            int decide = 1;

            system("CLS");
            cout << "You bilal batting of team A is first do what you can \n";

            if (decide == 1)
            {

                cout << "Team A is Batting ! " << endl;



                int variable_to_be_used_in_over_checker_only = 1;
                int i = 0; int j = 1; int k = 0;
                Player* currentBatsman = &TeamAPlayers->players[i];
                Player* oppositeBatsman = &TeamAPlayers->players[j];
                vector<Player>current_bowler;
                vector<Player>current_bowler2;
                vector<Player> bowlers;
                current_bowler.push_back(TeamBPlayers->players[k]);


                for (int l = 0; l < overs; l++) {

                    for (int m = 0; m < 6; m++)
                    {


                        cout << "Over Number : " << l + 1 << endl;
                        cout << "Ball Number : " << m + 1 << endl;
                        show_batsman_score_card(TeamAPlayers);
                        show_bowlers_score_card(current_bowler, k);
                        take_input_scores(TeamAPlayers, currentBatsman, oppositeBatsman, current_bowler
                            , k, i, variable_to_be_used_in_over_checker_only, totalScoreByTeamA, state, m);
                        //file handling FileHandling
                        FileHandling(l, m, totalScoreByTeamA);





                        Commentary(CMatchA[l][m]);

                    }
                }
                for (int i = 0; i < overs; i++)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        TrA += CMatchA[i][j];
                    }
                }
                for (int i = 0; i < 11; i++)
                {

                    TeamAPlayers->players[i].score.runs = 0;
                    TeamBPlayers->players[i].score.runs = 0;
                    TeamAPlayers->players[i].score.balls = 0;
                    TeamAPlayers->players[i].score.dot_balls = 0;
                    TeamAPlayers->players[i].score.fours = 0;
                    TeamAPlayers->players[i].score.sixes = 0;
                    TeamAPlayers->players[i].score.no_balls = 0;
                    TeamBPlayers->players[i].score.balls = 0;
                    TeamBPlayers->players[i].score.dot_balls = 0;
                    TeamBPlayers->players[i].score.fours = 0;
                    TeamBPlayers->players[i].score.sixes = 0;
                    TeamBPlayers->players[i].score.no_balls = 0;
                }
                cout << "The Score done By Team A are : " << totalScoreByTeamA << endl;
                cout << "The Score Required to Win : " << totalScoreByTeamA + 1 << endl;
                cout << "Team B Will Be Batting Now !" << endl;

                variable_to_be_used_in_over_checker_only = 0;
                i = 0;  j = 1; k = 0;
                currentBatsman = &TeamBPlayers->players[i];
                oppositeBatsman = &TeamBPlayers->players[j];



                current_bowler2.push_back(TeamAPlayers->players[k]);

                cout << "Wait team is changing \n";
                Sleep(8000);
                for (int l = 0; l < overs; l++) {

                    for (int m = 0; m < 6; m++)
                    {

                        cout << "Over Number : " << l + 1 << endl;
                        cout << "Ball Number : " << m + 1 << endl;
                        show_batsman_score_card(TeamBPlayers);
                        show_bowlers_score_card(current_bowler2, k);
                        take_input_scores(TeamBPlayers, currentBatsman, oppositeBatsman, current_bowler2
                            , k, i, variable_to_be_used_in_over_checker_only, totalScoreByTeamB, state, m);

                        //file handling FileHandling

                        FileHandling(l, m, totalScoreByTeamB);





                        Commentary(CMatchA[l][m]);



                    }
                }
                for (int i = 0; i < 11; i++)
                {

                    TeamAPlayers->players[i].score.runs = 0;
                    TeamBPlayers->players[i].score.runs = 0;
                    TeamAPlayers->players[i].score.balls = 0;
                    TeamAPlayers->players[i].score.dot_balls = 0;
                    TeamAPlayers->players[i].score.fours = 0;
                    TeamAPlayers->players[i].score.sixes = 0;
                    TeamAPlayers->players[i].score.no_balls = 0;
                    TeamBPlayers->players[i].score.balls = 0;
                    TeamBPlayers->players[i].score.dot_balls = 0;
                    TeamBPlayers->players[i].score.fours = 0;
                    TeamBPlayers->players[i].score.sixes = 0;
                    TeamBPlayers->players[i].score.no_balls = 0;
                }





                for (int i = 0; i < overs; i++)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        TrB += CMatchB[i][j];
                    }
                }
                cout << "Total Score Done By Team B : " << totalScoreByTeamB << endl;
                if (totalScoreByTeamA > totalScoreByTeamB)
                {
                    cout << "Team A Won The Match ! " << endl;
                }
                else if (totalScoreByTeamA == totalScoreByTeamB)
                {
                    cout << "A Common Draw !" << endl;
                }
                else
                {
                    cout << "Team B Won The Match ! " << endl;
                }
                cout << "DO you want to watch the replay\n";
                cout << "1:Yes\n2:No";
                cout << endl;
                int choice;
                do
                {
                    cin >> choice;
                } while (choice < 1 || choice >2);
                ifstream readFromFile("Runs.txt");
                int over = 0; int ball = 0; int run = 0; int h = 0;
                switch (choice)
                {
                case 1:
                    system("CLS");
                    cout << "Record for Team A\n\n";
                    cout << "\t\tOver\t\t\tBall\t\t\tRun"; cout << endl;

                    for (int l = 0; l < overs; l++)
                    {


                        cout << TeamAPlayers->players[h].name; h++;
                        cout << endl;


                        for (int m = 0; m < 6; m++)
                        {
                            cout << "\t\t";
                            cout << endl;
                            readFromFile >> over;
                            readFromFile >> ball;
                            readFromFile >> run;
                            cout << "\t\t\t" << over + 1 << "\t\t\t" << ball + 1 << "\t\t\t" << run << endl;
                            Sleep(2000);

                        }

                    }
                    system("ClS");
                    cout << "Record for Team B\n\n";
                    cout << "\t\t\t";
                    cout << "Over  Ball   Run"; cout << endl;
                    h = 0;
                    for (int l = 0; l < overs; l++)
                    {


                        cout << TeamBPlayers->players[h].name; h++;
                        cout << endl;
                        for (int m = 0; m < 6; m++)
                        {
                            cout << "\t\t";
                            cout << endl;
                            readFromFile >> over;
                            readFromFile >> ball;
                            readFromFile >> run;
                            cout << "\t\t\t" << over << "\t\t\t" << ball << "\t\t\t" << run << endl;
                            Sleep(2000);

                        }

                    }
                    readFromFile.close();
                    break;
                case 2:
                    return;
                }


            }

        }

    }

    void FileHandling(int over, int ball, int runs)
    {
        fstream myfile;
        myfile.open("Runs.txt", std::ios_base::app);

        myfile << over << "    ";
        myfile << ball << "    ";
        myfile << runs << "    ";
        myfile << endl;
        myfile.close();
    }

    void LoadFromFile()
    {
        int state;
        int runs;

        fstream myfile;
        myfile.open("Runs.txt", std::ios_base::app);
        myfile >> state;
        myfile >> runs;
        if (runs == -1)
        {
            myfile >> runs;
        }

    }

    void Commentary(int value)
    {
        if (value == 0)
        {
            cout << "No runs! Ball is dotted " << endl;
        }
        if (value == 1)
        {
            cout << "It was a Single Run! " << endl;
        }
        else if (value == 2)
        {
            cout << "It was a double Run! The Players Look Dedicated toward Win " << endl;
        }
        else if (value == 3)
        {
            cout << "It was 3 Runs! Great Running By Both Players!! " << endl;
        }
        else if (value == 4)
        {
            cout << "It was 4 runs! The ball went dribbling in between players! Fabulous! " << endl;
        }
        else if (value == 5)
        {
            cout << "It was 5 Runs! Nice Running on Pitch and Great shot! " << endl;
        }
        else if (value == 6)
        {
            cout << "It was Huge Sixer!!! 6 Runs for the team!!! The Ball Went out of the stadium!!" << endl;
        }
    }
    void interchange_batsmen(string*& current_player, string*& opposite_player)
    {

        string* temp;
        temp = current_player;
        current_player = opposite_player;
        opposite_player = temp;



    }

    void show_batsman_score_card(team* current_team)
    {
        system("CLS");
        cout << "\t\t\tTHE MATCH BEGINS\n";
        cout << "BATSMEN SCORE CARD\n";
        cout << "Batsman\t\tHow out\t\tBowler\t\tRuns\t\tBalls\t\tFours\t\tSixes\t\tDot Balls\t\tStrike Rate\n";
        for (int i = 0; i < 10; i++)
        {
            cout << current_team->players[i].name << "\t\t"

                << current_team->players[i].score.getHowOut() << "\t\t"

                << current_team->players[i].score.getRuns() << "\t\t"
                << current_team->players[i].score.getBalls() << "\t\t"
                << current_team->players[i].score.getFours() << "\t\t"
                << current_team->players[i].score.getSixes() << "\t\t"
                << current_team->players[i].score.getDotBalls() << "\t\t"
                << current_team->players[i].score.getStrikeRate() << "\t\t\n";
        }
    }
    void show_bowlers_score_card(vector <Player >& current_bowler, int& k)
    {
        cout << "\nBOWLERS SCORECARD \n";
        cout << "     Bowler\t\tBalls\t\tWickets\t\tRuns\t\tDot balls\n";
        for (int i = 0; i < current_bowler.size(); i++)
        {

            cout << current_bowler[i].name << "\t\t" <<
                current_bowler[i].score.getBalls() << "\t\t" <<
                current_bowler[i].score.getOvers() << "\t\t" <<
                current_bowler[i].score.getRuns() << "\t\t" <<
                current_bowler[i].score.getWickets() << "\t\t" <<


                current_bowler[i].score.getDotBalls() << "\t\t" <<
                endl;

        }
    }
    void interchange_batsmen(Player*& current_player, Player*& opposite_player)
    {

        Player* temp;
        temp = current_player;
        current_player = opposite_player;
        opposite_player = temp;



    }


    void over_checker(int j, vector<Player>& current_bowler, int& k, int& variable_to_be_used_in_over_checker_only,
        team*& T)
    {

        if (j == 5)
        {





            k++;
            if (k == 6)
                k = 0;

            cout << "Over Ended\n";
            current_bowler.push_back(T->players[k]);
        }
    }



    void take_input_scores(team* current_team,
        Player*& current_player, Player*& opposite_player,
        vector<Player>& current_bowler, int& k, int& i,
        int& variable_to_be_used_in_over_checker_only,
        int& totalScore, int& state, int j)
    {
        {

            int current_score;
            int state;
            cout << "Enter Score : ";
            do {
                cout << "Enter scores :\n";
                cout << "0) Dot Ball!" << endl;
                cout << "1) Single!" << endl;
                cout << "2) Double!" << endl;

                cout << "3) Triple " << endl;
                cout << "4) Four! " << endl;
                cout << "6) Chaka! " << endl;
                cout << "-1) Out " << endl;

                cin >> current_score;
                state = current_score;
            } while (state < (-1) || state>6);

            switch (current_score)
            {
            case 0:
                current_player->score.balls += 1;
                current_player->score.dot_balls += 1;
                current_bowler.back().score.balls += 1;
                current_bowler.back().score.dot_balls += 1;
                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);/*
                current_team->scores_of_one_team.setTotalScore(current_team->scores_of_one_team.getTotalScore() + 1);*/
                break;
            case 1:
                totalScore++;
                current_player->score.balls += 1;
                current_player->score.runs += 1;

                interchange_batsmen(current_player, opposite_player);
                current_bowler.back().score.balls += 1;
                current_bowler.back().score.runs += 1;


                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);
                break;
            case 2:
                totalScore += 2;

                current_player->score.balls += 1;
                current_player->score.runs += 2;
                current_bowler.back().score.balls += 1;

                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);
                break;
            case 3:

                totalScore += 3;
                current_player->score.balls += 1;
                current_player->score.runs += 3;
                interchange_batsmen(current_player, opposite_player);
                current_bowler.back().score.balls += 1;
                current_bowler.back().score.runs += 3;

                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);
                break;
            case 4:
                totalScore += 4;
                current_player->score.balls += 1;
                current_player->score.runs += 4;
                current_player->score.fours += 1;

                current_bowler.back().score.balls += 1;
                current_bowler.back().score.runs += 4;
                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);


                break;

            case 5:
                break;
            case 6:
                totalScore += 6;
                current_player->score.balls += 1;
                current_player->score.runs += 6;
                current_player->score.sixes += 1;

                current_bowler.back().score.balls += 1;
                current_bowler.back().score.runs += 6;
                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);
                break;
            case -1:
                current_player->score.balls += 1;
                current_player->score.bowler = current_bowler.back().name;
                current_bowler.back().score.balls += 1;
                current_bowler.back().score.wickets += 1;

                over_checker(j, current_bowler, k, variable_to_be_used_in_over_checker_only, current_team);
                current_player->score.how_out = "Bowled";
                i++;
                interchange_batsmen(current_player, opposite_player);

                opposite_player = &current_team->players[i];
                break;


            }

        }
    }


};

int main()
{
    CricketMatch a1;
    a1.gamestart();
    return 0;
}
