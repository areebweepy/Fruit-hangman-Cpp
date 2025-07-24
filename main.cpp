#include <iostream>
#include <cstring>
#include <conio.h> 
#include <string> 
#include <stdlib.h> 
#include <ctime>
#include <windows.h>
using namespace std;

#define WRONGTRIES 6
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void slide_animation(string a){
    int i,k;
    for(k=0;k<70;k++){
        for(i=0;i<k;i++){
            cout<<" ";

        }
        cout<<a;
        Sleep(50);
        system("cls");
    }
    cout<<"                                ";
}

void text_animation(string a){
    int i; 
    for(i = 0;a[i]!='\0';i++){
        Sleep(150);
        cout<<a[i];
    }
}



void DrawMan(int tries){
    SetConsoleTextAttribute(h,8);
	cout<<"\n\n";
	cout<<"\n  -----";
	cout<<"\n  |   |"; 
	cout<<"\n  |"; 
    if(tries>=1){ 
    SetConsoleTextAttribute(h,4);
    cout<<"   O    ";
    }
    SetConsoleTextAttribute(h,8);
	cout<<"\n  |"; 
    if(tries>=2){
    SetConsoleTextAttribute(h,4);
    cout<<"  /";
    }
    if(tries>=3){
    SetConsoleTextAttribute(h,4);
    cout<<"|";
    }
    if(tries>=4){
    SetConsoleTextAttribute(h,4);
    cout<<"\\";
    }
    SetConsoleTextAttribute(h,8);
    cout<<"\n  |";
    if(tries>=5){ 
    SetConsoleTextAttribute(h,4);
    cout<<"  /";
    }
    if(tries>=6){ 
    SetConsoleTextAttribute(h,4);
    cout<<" \\";
    }
    SetConsoleTextAttribute(h,8);
	cout<<"\n  |"; 
	cout<<"\n _|_\n\n";
}

int main(){
    A:
	srand (time(NULL));
	string wordList[5] = {"apple","peach","banana","strawberry","mango"};
	string word = {};
	string guessed = {};
	
	word = wordList[rand()%5];
	
	int wordLength = word.length();
	string dispWord (wordLength, '_');
	
	int found = 0;
	char guess = ' ';
	int tries = 0; //No of wrong tries
	int flagFound = 0; 

	while(tries<=6){
		system("cls");
        SetConsoleTextAttribute(h,11);
		cout<<"Guess Fruit Name: "<<endl<<endl;
		SetConsoleTextAttribute(h,15);
		for(int i=0; i<wordLength; i++)
			cout<<" "<<dispWord[i]<<" "; 
		cout<<"\n\n\n";
		 SetConsoleTextAttribute(h,14); 		
		cout<<"Wrong Attempts: "<<tries<<" / "<<WRONGTRIES<<endl;
		cout<<"Guessed Letters: "<<guessed<<endl; 
		
		DrawMan(tries);
		
		if( found == wordLength ){
            system("cls");
            SetConsoleTextAttribute(h,10);
			cout<<endl;
   
            slide_animation("|    You Win    |");
            text_animation("|        You Win      |");
            cout<<"\n\n                                ";
            text_animation("|  Congratulation :)  |");
			break;
		}
		
		if( tries == 6){ 
        break; 
        }
        SetConsoleTextAttribute(h,2);
		cout<<"Pick a Letter: ";
		guess = getche();
		
		guessed = guessed + " " + guess;
		
		
		flagFound = 0;
		for(int i=0; i<wordLength; i++){
			if( word[i]==guess && dispWord[i]=='_' ){
				dispWord[i] = guess;
				found++;
				flagFound = 1; 
			}
		}
		 
		if( flagFound!=1 )
			tries++;
	}
	if( found != wordLength ){
        system("cls");
        SetConsoleTextAttribute(h,12);
		cout<<endl;

            slide_animation("|   You Lose   |");


            text_animation("|          You Lose          |");
            cout<<"\n\n                                ";
            text_animation("|  Better Luck Next Time :(  |");

	}
	cin.ignore();
	cin.get();

    system("cls");
    char choice = ' ';
    SetConsoleTextAttribute(h,13);
    cout<<"Play Again ? "<<endl;
    cout<<"Y for Yes and N for No: ";
    cin>>choice;
    if(choice == 'Y' || choice == 'y'){
        goto A;
    }
    else{
      SetConsoleTextAttribute(h,7);
      return 0;
    }
	
}
