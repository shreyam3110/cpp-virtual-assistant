#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//function to wish user wrt time
int h = 0;
int m = 0;
int s = 0;
void timer(){
    system("cls");
    cout <<" TIMER";
    cout<< setfill(' ') << setw(15);
    cout << "| " << setfill('0') << setw(2) << h << " Hours | ";
    cout << setfill('0') << setw(2) << m << " Minutes | ";
    cout << setfill('0') << setw(2) << s << " Seconds |" << endl;
}
void systemCallTimer(){
    while(true)
    {
        timer();
        sleep(1);
        s++;
        if (s == 60) {
            m++;
            if (m == 60) {
                h++;
                m = 0;
            }
            s = 0;
        }
    }
}
void wish(){
    //current date and time based on your system
    time_t now = time(0);
    tm *time = localtime(&now);
    if(time-> tm_hour < 12){
        cout<<"Good Morning Friend"<<endl;
        string phrase = "Good Morning Friend";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time-> tm_hour > 12 && time-> tm_hour < 4){
        cout<<"Good Afternoon Friend"<<endl;
        string phrase = "Good Afternoon Friend";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time-> tm_hour > 16 && time-> tm_hour < 24){
        cout<<"Good Evening Friend"<<endl;
        string phrase = "Good Evening Friend";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

}

void dateandtime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The current date and time is:"<<endl
        <<dt<<endl;
    string phrase = "The current date and time is today is ";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
}

int main(){
    system("clr");

    cout<<"\t\t\t*********************************************W E L C O M E**************************************************"<<endl;
    cout<<"\t\t\t*****************************************I'm a Virtual Assistant********************************************"<<endl;
    cout<<"\t\t\t********************************************My name is MIN:)************************************************"<<endl;
    cout<<"\t\t\t******************************************I'm here to help you**********************************************"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; //to take command from user

    do{
        cout<<"**********************"<<endl;
        cout<<"| Enter the access code |"<<endl;
        cout<<"**********************"<<endl<<endl;
        string phrase = "Enter the access code";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo={0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "kitty123")==0){
            cout<<"<\n******************************************************************************************************>\n\n";

            wish();

            do{
                cout<<"<\n******************************************************************************************************>\n\n";
                cout<<endl<<"How can i help you my friend........."<<endl<<endl;
                string phrase = "How can i help you my friend";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query---->";
                gets(ch);
                cout<<endl;
                cout<<"----->";   
                if(strcmp(ch, "hi")==0 || strcmp(ch, "hey")==0 || strcmp(ch, "hello")==0 ){
                    cout<<"hello my friend...."<<endl;
                    string phrase = "hello my friend";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "bye")==0 || strcmp(ch, "bye minmin")==0 || strcmp(ch, "exit")==0 ){
                    cout<<"Goodbye my friend, have a nice day"<<endl;
                    string phrase = "Goodbye my friend, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if(strcmp(ch, "who are you")==0 || strcmp(ch, "tell me about yourself")==0 || strcmp(ch, "introduce yourself")==0 ){
                    cout<<"I'm a Virtual Assistance created by my friend shreya !!!"<<endl;
                    string phrase = "I'm a Virtual Assistant created by my friend shreya";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you")==0 || strcmp(ch, "how's you")==0 || strcmp(ch, "are you okay")==0 ){
                    cout<<"I'm fine as wine hahaha what about you my friend"<<endl;
                    string phrase = "I'm fine as wine hahaha what about you my friend";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "date and time")==0 || strcmp(ch, "time")==0){
                    //make function for date and time
                    dateandtime();
                }

                else if(strcmp(ch, "timer")==0 || strcmp(ch, "stopwatch")==0){
                    //make function for timer
                    systemCallTimer();
                }
                else if(strcmp(ch, "open google")==0){
                    cout<<"Opening google......";
                    string phrase = "Opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open notepad")==0){
                    cout<<"Opening notepad......";
                    string phrase = "Opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open youtube")==0){
                    cout<<"Opening youtube......";
                    string phrase = "Opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram")==0){
                    cout<<"Opening instagram......";
                    string phrase = "Opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                else if(strcmp(ch, "open spotify on chrome")==0){
                    cout<<"Opening instagram......";
                    string phrase = "Opening spotify on chrome";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://open.spotify.com");
                }

                else if(strcmp(ch, "what's today")==0){
                    cout<<"today is your birthday......."<<endl<<"happy birthday my best friend"<<endl;
                    string phrase = "today is your birthday happy birthday my best friend";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "wish me in another way")==0){
                    cout<<"Hope your birthday loops run smoothly and that you do not break out of the for loop too soon";
                    string phrase = "Hope your birthday loops run smoothly and that you do not break out of the for loop too soon";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else{
                    cout<<"sorry i didn't understand your query can you please try again..."<<endl;
                    string phrase = "sorry i didn't understand your query can you please try again...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            }while(1);
        }
        else{
            cout<<"Incorrect Password please try again....."<<endl;
            string phrase = "Incorrect Password please try again ";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    }while(1);
    return 0;
}