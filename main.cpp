#include <iostream> // for input and output in c++
#include <conio.h> //for console input and output, it manages input/output on a console based app
#include <string> // to declare string type variable
#include <cstdlib> // for the random word generation
#include <ctime> // for calculating the total amount of time user uses

using namespace std;

int main ()
{
    cout<< "**********GROUP 18 TYPING TUTOR PROJECT **********"<<endl;
    cout<< "**********thank you for playing typing tutor **********"<<endl;

  string word[101]; // array used to store several words

  word[1]="adeleke";
  word[2]="competition";
  word[3]="decide";
  word[4]="aggressive";
  word[5]="flippant";
  word[6]="imported";
  word[7]="obsolete";
  word[8]="finger";
  word[9]="hateful";
  word[10]="evanescent";
  word[11]="colorful";
  word[12]="deserve";
  word[13]="cautious";
  word[14]="monkey";
  word[15]="efficacious";
  word[16]="volleyball";
  word[17]="identify";
  word[18]="birthday";
  word[19]="look";
  word[20]="exotic";
  word[21]="roomy";
  word[22]="steel";
  word[23]="amusing";
  word[24]="adventurous";
  word[25]="black";
  word[26]="gruesome";
  word[27]="elated";
  word[28]="premium";
  word[29]="closed";
  word[30]="screeching";
  word[31]="welcome";
  word[32]="license";
  word[33]="fluffy";
  word[34]="debonair";
  word[35]="debonair";
  word[36]="blow";
  word[37]="encouraging";
  word[38]="jumbled";
  word[39]="sneaky";
  word[40]="automatic";
  word[41]="behavior";
  word[42]="waiting";
  word[43]="ceaseless";
  word[44]="delicate";
  word[45]="want";
  word[46]="soothe";
  word[47]="curious";
  word[48]="innocent";
  word[49]="glove";
  word[50]="notebook";
  word[51]="straw";
  word[52]="handsome";
  word[53]="previous";
  word[54]="serious";
  word[55]="scene";
  word[56]="memory";
  word[57]="afraid";
  word[58]="astonishing";
  word[59]="befitting";
  word[60]="protect";
  word[61]="sloppy";
  word[62]="seemly";
  word[63]="abashed";
  word[64]="lopsided";
  word[65]="vegetable";
  word[66]="young";
  word[67]="canvas";
  word[68]="picture";
  word[69]="machine";
  word[70]="cruel";
  word[71]="tumble";
  word[72]="wait";
  word[73]="effect";
  word[74]="rifle";
  word[75]="harmony";
  word[76]="good";
  word[77]="careless";
  word[78]="coat";
  word[79]="daffy";
  word[80]="agree";
  word[81]="disagreeable";
  word[82]="defective";
  word[83]="squash";
  word[84]="door";
  word[85]="useless";
  word[86]="instruct";
  word[87]="payment";
  word[88]="charming";
  word[89]="expensive";
  word[90]="smooth";
  word[91]="succeed";
  word[92]="hobbies";
  word[93]="awake";
  word[94]="unbecoming";
  word[95]="mine";
  word[96]="mushy";
  word[97]="prepare";
  word[98]="fragile";
  word[99]="recondite";
  word[100]="keen";


  int limit_error; //variable declaration for the limit
  string again;
do
{

    do
    {




    string user;
    int score=0; //initial score
    clock_t t; // for the timing
    string again; // string

    int no_of_words; // a variable that is used to store the amount of words user would like to try


    cout<<"How many words would you like to try?"<<endl;
    cin>>no_of_words; // requires the user to enter number of words to try

    if(no_of_words<=50) // a conditional statement that requires the user to pick at most 50 words per trial
    {
       cout<<"Rewrite the displayed words (Press enter to start)"<<endl;
       getch();
       t = clock();
       for (int i=1;i<=no_of_words; i++)
       {
          srand (time(NULL));
          int N= (rand()%100)+1; //picks a word at random
          cout<<word[N]<<"  "<< endl; // displays the random word for the user to see
          cin>>user; //requires the user to input the random word

          if(word[N]==user) //  if word is spelt correctly
          {
              score= score+1; // there is an increment in the score
          }
       }
       t = clock() -t; // subtract the initial time on the clock from the final time

       cout<<"Your score is: "<<score<<"/"<<no_of_words<<endl; // displays the number of correct word by the total number of words displayed
       float Time=(float)t/CLOCKS_PER_SEC;
       cout<<"Total time taken = "<<Time<<"seconds"<<endl; // displays the time taken
       limit_error=0;
    }

    else
    {
       cout<<"Really sorry! But the word limit is 50"<<endl; // total word per trial is 50 words
       limit_error=1;
    }
     getch(); // also used to get user input (y/n)
    }while(limit_error!=0);

    cout<<"Would you like to play again?"<<endl;
    cout<<"yes - y"<<endl;
    cout<<"no - n"<<endl;
    cin>>again;
    if(again=="y") //if user inputs y a new window is created and game continues
    {
       system("CLS");
    }

}while(again=="y");

cout<<"Press any key to close window";





getch();



}
