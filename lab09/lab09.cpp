#include<iostream>


using namespace std;

void ipod_menu()
{
    cout << "          Menu      " << endl;
    cout << "1: Enter a New Song" << endl;
    cout << "2: Delete an Existing Song" << endl;
    cout << "3: Display All Existing Songs" << endl;
    cout << "4: Edit a Song" << endl;
    cout << "5: Print out Favorites" << endl;
    cout << "6: Turn off your TsuPod" << endl;
}


struct song
{
    string songTitle;
    string Filename;
    string genre;
    int trackNum;
    bool favSong;
    bool NotfavSong;
};

song TsuPod[100];


int main()
{
    int choice;
    int track_num;
    int new_track;
    bool off = false;
    char answer;

    while(!off){
    ipod_menu();
    cin >> choice;


        switch (choice)
        {
        case 1:
        cout << "What track number?" << endl;
        cin >> track_num;
        cout << "Enter a New Song" << endl;
        cin >> TsuPod[track_num].songTitle;
        break;
        case 2:
        cout << "Delete an Existing Song" << endl;
        cout << "What track number?" << endl;
        cin >> track_num;
        cin >> TsuPod[track_num].songTitle == " ";
        break;
        case 3:
        cout << "Display All Existing Songs" << endl;
        break;
        case 4:
        cout << "Edit a Song" << endl;
        cout << "What is the current track number?" << endl;
        cin >> track_num;
        cout << "Do you want to add it to your favorites? Y or N?" << endl;
        cin >> answer;
        if (answer = 'y')
        {
            TsuPod[track_num].favSong;
        }
        else;
        {
            TsuPod[track_num].NotfavSong;
        }
        break;
        case 5:
        cout << "Print out Favorites" << endl;
        break;
        case 6:
        cout << "Turning off TsuPod" << endl;
        off = true;
        default:
        cout << "Not valid. Try again." << endl;
        }
       }





}
