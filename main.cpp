#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings()
{
    //current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12)
    {
        cout<< "Good Morning Akhila"<<endl;
        string phrase = "Good Morning Akhila.. I hope you are doing well...";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout<< "Good Afternoon Akhila "<<endl;
        string phrase = "Good Afternoon Akhila";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24)
    {
        cout<< "Good Evening Akhila"<<endl;
        string phrase = "Good Evening Akhila";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout << "\t<############################ BRO DO WHATEVER I TYPE ##############################"<< endl << endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout << "******************************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFIRM YOU ARE MISS AKHILA  |" << endl;
        cout << "******************************************************" << endl << endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MISS AKHILA";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password == "akhila")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"How can I help you Akhila....??"<<endl<<endl;

                string phrase = "How can I help you Akhila ?";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command == "hello" || command == "hi" || command == "Hello" || command == "Hi" || command == "HI" || command == "HELLO")
                {
                    cout<<"Hello Akhila..... I hope you are doing well..."<<endl;
                    string phrase = "Hello Akhila.. I hope you are doing well...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command == "what is the time?" || command == "What is the time?" || command == "what is the time")
                {
                    datetime();

                }


                else if(command == "who are you" || command == "who is speaking")
                {
                    cout<<"I'm a personal assistant created by Miss Akhila !!!"<<endl;
                    string phrase = "I'm a personal assistant of Miss Akhila !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command == "open notepad")
                {
                    cout<<"opening notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command =="open my leetcode profile")
                {
                    cout<<"opening your leetcode profile"<<endl;
                    string phrase = "opening Akhila's leetcode profile";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://leetcode.com/_akhila_100_/");
                }

                else if(command =="open my linkedin profile")
                {
                    cout<<"opening your linkedIN profile"<<endl;
                    string phrase = "opening Akhila's linkedIn profile";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.linkedin.com/in/akhila-a-r-038a73253/");
                }


                else if(command == "open MS Word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command == "open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command == "play music")
                {
                    cout<<"playing music now"<<endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                }

                else if(command == "open google")
                {
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command =="open youtube")
                {
                    cout<<"openining YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command == "close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","my photo.jpg",NULL, NULL, SW_NORMAL);
                }


                else if(command=="open oops book")
                {
                    cout<<"opening oops book"<<endl;
                    string phrase = "opening oops book";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\rajiv\\Documents\\6th sem\\oops c++ balaguruswamy.pdf",NULL, NULL, SW_NORMAL);
                }

                else if(command=="open video")
                {
                    cout<<"opening video"<<endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\rajiv\\Documents\\Zoom\\edit distance.mp4",NULL, NULL, SW_NORMAL);
                }

                else if(command == "bye" || command == "exit")
                {
                    cout<<"Good Bye Akhila, catch you soon!"<<endl;
                    string phrase = "Good Bye Akhila, catch you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command.. please try again !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "\033[1;31mIncorrect Password!\033[0m\n";
                    cout << "**********************" << endl << endl;
                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);

    return 0;
}
