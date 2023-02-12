#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <fstream>

using namespace std;

void gotoxy(int x, int y);
void load1();
void wait1();
void welcome();
void choose();
void userhead();
void astructure1();
int downlink();
void down();
string downlink_for_name;

int def=28;

class addmovies
{
public:
    string mname[100];
    string des[100];
    string rate[100];
    string hname[100];
    string hdes[100];
    string hrate[100];
    string sname[100];
    string sdes[100];
    string srate[100];
    string dname[100];
    string dd[100];
    string drate[100];
};
addmovies am1;

class guestuser
{
public:
    string uname,gmail;
    int nic;
};

guestuser u1;

class mns: public addmovies
{
public:

    int pc,ex;
    void nw()
    {
        int roy,x=1;
        system("cls");
        system("color 0f");
        gotoxy(10,05);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        gotoxy(35,06);
        cout<<"New Arrival";
        gotoxy(10,07);
        cout<<"----------------------------------------------------------------------------------"<<endl;

        cout<<"\n\n\t\t\t<<Since August 14.>>\n\n";


        am1.mname[0]="The North Water (SEASON 1-updated)";
        am1.des[0]="\n\t-First episode date: July 15, 2021\n\t-Based on: The North Water by Ian McGuire\n\t-Genre: Drama, Mystery";
        am1.rate[0]="7.8/10 IMDb";
        am1.mname[1]="Soldiers or zombies (SEASON 1-updated)";
        am1.des[1]="\n\t-First episode date: August 6, 2021\n\t-Created by: Nicolas Entel; Miguel Tejada Flores\n\t-Original language: Spanish";
        am1.rate[1]="5.3/10 IMDb";
        am1.mname[2]="Snake Eyes: G.I. Joe Originals (2021)";
        am1.des[2]="\n\t-Initial release: July 22, 2021 (Czechia)\n\t-Director: Robert Schwentke\n\t-Box office: $37 million";
        am1.rate[2]="5.4/10 IMDb";
        am1.mname[3]="Nine Perfect Strangers (S1 E3 - updated)";
        am1.des[3]="\n\t-First episode date: August 18, 2021\n\t-Adapted from: Nine Perfect Strangers\n\t-Directed by: Jonathan Levine";
        am1.rate[3]="7.5/10 IMDb";
        am1.mname[4]="Marvel WhatIf (S1 E3 - updated)";
        am1.des[4]="\n\t-First episode date: August 11, 2021\n\t-Animator: Stephan Franck\n\t-Related shows: Marvel Cinematic Universe television series\n\t-Genre: Action-adventure; Anthology; Science fiction; Superhero";
        am1.rate[4]="8.5/10 IMDb";
        am1.mname[5]="Stargirl (S2E2 - updated)";
        am1.des[5]="\n\t-First episode date: May 18, 2020\n\t-Created by: Geoff Johns\n\t-Genre: Superhero; Drama\n\t-Also known as: Stargirl: Summer School (season 2)";
        am1.rate[5]="7.3/10 IMDb";
        am1.mname[6]="FBOY island (SEASON 1-updated)";
        am1.des[6]="\n\t-First episode date: July 29, 2021\n\t-Program creator: Elan Gale\n\t-Network: HBO Max\n\t-Language: English";
        am1.rate[6]="4.1/10 IMDb";
        am1.mname[7]="Marvels Inhumans (SEASON 1-updated";
        am1.des[7]="\n\t-Related shows: Marvel Cinematic Universe television series\n\t-Producer: Jean Higgins\n\t-Created by: Scott Buck\n\t-Genre: Action; Adventure; Science fiction Superhero Drama\n\t-Based on: Inhumans; by: Stan Lee; Jack Kirby";
        am1.rate[7]="5/10 IMDb";
        am1.mname[8]="The End *NEW (SEASON 1-updated)";
        am1.des[8]="\n\t-Original release: February 10, 2020 –; present\n\t-Created by: Samantha Strauss\n\t-Directed by: Jessica M. Thompson; Jonathan Brough\n\t-Genre: Drama";
        am1.rate[8]="7.3/10 IMDb";
        am1.mname[9]="Britania (SEASON 3-updated)";
        am1.des[9]="\n\t-No. of series: 3\n\t-Composer: Neil Davidge\n\t-Original languages: English; Welsh\n\t-Genre: Historical fiction; Drama; Adventure; Mysticism";
        am1.rate[9]="6.8/10 IMDb";
        am1.mname[10]="Clickbait (SEASON 1-updated)";
        am1.des[10]="\n\t-First episode date: August 25, 2021\n\t-No. of episodes: 8\n\t-Genre: Drama; Thriller";
        am1.rate[10]="7.4/10 IMDb";
        am1.mname[11]="Chapelwaite (S1E3 - updated)";
        am1.des[11]="\n\t-First episode date: August 22, 2021\n\t-Adapted from: Jerusalem’s Lot\n\t-Written by: Jason Filardi; Peter Filardi";
        am1.rate[11]="7.5/10 IMDb";
        am1.mname[12]="Riverdale (S5E13-updated)";
        am1.des[12]="\n\t-Producer: J. B. Moranville\n\t-Genre: Teen drama; Mystery\n\t-Adapted from: Archie\n\t-Original release: January 26, 2017 –; present";
        am1.rate[12]="6.8/10 IMDb";
        am1.mname[13]="Icarly (SEASON 1-updated)";
        am1.des[13]="\n\t-First episode date: September 8, 2007\n\t-Final episode date: November 23, 2012\n\t-Created by: Dan Schneider";
        am1.rate[13]="6.7/10 IMDb";
        am1.mname[14]="Vacation Friends (2021)";
        am1.des[14]="\n\t-Initial release: August 27, 2021\n\t-Director: Clay Tarver";
        am1.rate[14]="6.3/10 IMDb";
        am1.mname[15]="SEE (S2E1 - updated)";
        am1.des[15]="\n\t-First episode date: November 1, 2019\n\t-Production locations: British Columbia, Canada\n\t-Created by: Steven Knight\n\t-Genre: Action-adventure; Drama; Science fiction\n\t-Composer: Bear McCreary";
        am1.rate[15]="7.6/10 IMDb";
        am1.mname[16]="Mythic Quest (SEASON 2-updated)";
        am1.des[16]="\n\t-Created by: Charlie Day; Megan Ganz; Rob McElhenney\n\t-Composer: Takeshi Furukawa\n\t-Genre: Comedy";
        am1.rate[16]="7.7/10 IMDb";
        am1.mname[17]="I Know This Much Is True[MINI SERIES] (SEASON 1-updated)";
        am1.des[17]="\n\t-Written by: Derek Cianfrance; Anya Epstein\n\t-Based on: I Know This Much Is True; by Wally Lamb\n\t-Producer: Jeffrey T. Bernstein\n\t-Original languages: English; Sicilian";
        am1.rate[17]="8.2/10 IMDb";
        am1.mname[18]="The Killing (SEASON 3-updated)";
        am1.des[18]="\n\t-Based on: Forbrydelsen; by Søren Sveistrup\n\t-Composer: Frans Bak\n\t-Original release: April 3, 2011 –; August 1, 2014\n\t-Genres: Serial, Mystery, Thriller, Crime film, Drama";
        am1.rate[18]="8.2/10 IMDb";
        am1.mname[19]="The Chair (SEASON 1-updated)";
        am1.rate[19]="7.3/10 IMDb";
        am1.mname[20]="The protege (2021)";
        am1.des[20]="\n\t-Initial release: August 19, 2021 (Israel)\n\t-Director: Martin Campbell\n\t-Box office: $5.9 million";
        am1.rate[20]="6.2/10 IMDb";
        am1.mname[21]="Mr Cornman (S1E5 - updated)";
        am1.des[21]="\n\t-First episode date: August 6, 2021\n\t-Genre: Comedy-drama";
        am1.rate[21]="6.2/10 IMDb";
        am1.mname[22]="Heels (S1E3 - updated)";
        am1.des[22]="\n\t-First episode date: August 15, 2021\n\t-Created by: Michael Waldron; \n\t-Genre: Drama";
        am1.rate[22]="8/10 IMDb";
        am1.mname[23]="Truth be told (SEASON 1-updated)";
        am1.des[23]="\n\t-Based on: Are You Sleeping; by Kathleen Barber\n\t-Original release: December 6, 2019 –; present\n\t-Genre: Legal drama; Crime drama";
        am1.rate[23]="7.1/10 IMDb";
        am1.mname[24]="Mortal Kombat (2021 - Action/Fantasy)";
        am1.des[24]="\n\t-Initial release: April 8, 2021 (Thailand)\n\t-Box office: $83.6 million\n\t-Story by: Oren Uziel; Greg Russo\n\t-Adapted from: Mortal Kombat";
        am1.rate[24]="6.1/10 IMDb";
        am1.mname[25]="The Tomorrow War (2021 - Action/Sci-fi)";
        am1.des[25]="\n\t-Initial release: July 2, 2021\n\t-Budget: $200 million";
        am1.rate[25]="6.6/10 IMDb";
        am1.mname[26]="Black Widow  (2021 - Action/Adventure)";
        am1.des[26]="\n\t-Initial release: July 2021 (Singapore)\n\t-Box office: $371.1 million\n\t-Story by: Jac Schaeffer; Ned Benson";
        am1.rate[26]="6.8/10 IMDb";
        am1.mname[27]="F9 (2021 - Action/Adventure)";
        am1.des[27]="\n\t-Initial release: April 1, 2021 (Italy)\n\t-Box office: $704.2 million\n\t-Story by: Justin Lin; Alfredo Botello; Daniel Casey";
        am1.rate[27]="5.2/10 IMDb";

        for(int i=0;i<def;i++)
        {
            cout<<x++<<". "<<am1.mname[i]<<endl;
        }

        cout<<"\n\nExit (0)"<<endl;
        ex=getch();
        if (ex==48)
        {
            choose();
        }

        cout<<"\n\n\tSo Tell Me What Is Your DESIRE : ";
        cin>>roy;
        system("cls");

        roy--;
        cout<<"--"<<am1.mname[roy]<<"--"<<endl;
        downlink_for_name=am1.mname[roy];
        cout<<am1.des[roy]<<endl;
        cout<<am1.rate[roy]<<endl;
        cout<<"\n\n\n\n(98.)DOWNLOAD"<<endl;
        cout<<"\n\n\n\n(99.)EXIT\n\n\t>>>";
        cin>>pc;
        if (pc==98)
        {
            down();
        }
        else if (pc==99)
        {
            choose();
            wait1();
        }
        else
        {
            system("cls");
            nw();
        }


    }
    void mh()
    {
        int har,c=1;
        system("cls");
        system("color 0f");
        gotoxy(10,05);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        gotoxy(35,06);
        cout<<"MOVIE HUB";
        gotoxy(10,07);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        am1.hname[0]="The Girl in the Spider's Web";
        am1.hdes[0]="\n\t-Initial release: October 18, 2018 (Czechia)\n\t-Director: Fede Álvarez\n\t-Adapted from: The Girl in the Spider's Web\n\t-Box office: $35.2 million";
        am1.hrate[0]="6.1/10 IMDb";
        am1.hname[1]="Who Am I (2014)";
        am1.hdes[1]="\n\t-Initial release: September 25, 2014 (Germany)\n\t-Hacking";
        am1.hrate[1]="7.5/10 IMDb";
        am1.hname[2]="Workit (2020)";
        am1.hdes[2]="\n\t-Initial release: August 7, 2020\n\t-Director: Laura Terruso\n\t-Featured song: Let Me Move You";
        am1.hrate[2]="6.1/10 IMDb";
        am1.hname[3]="Assassin's Creed (2016)";
        am1.hdes[3]="\n\t-Initial release: December 13, 2016 (New York)\n\t-Sequel: Assassin's Creed 2\n\t-Adapted from: Assassin's Creed\n\t-Box office: $240.7 million";
        am1.hrate[3]="5.7/10 IMDb";
        am1.hname[4]="King Arthur: Legend of the Sword";
        am1.hdes[4]="\n\t-Initial release: 2017 (Belarus)\n\t-Story by: David Dobkin; Joby Harold\n\t-Cinematography: John Mathieson\n\t-Box office: $148.7 million";
        am1.hrate[4]="6.7/10 IMDb";
        am1.hname[5]="Max Steel(2016 - Sci-fi/Action)";
        am1.hdes[5]="\n\t-Initial release: October 19, 2016 (Philippines)\n\t-Based on: Max Steel; by Mattel\n\t-Box office: $6.3 million";
        am1.hrate[5]="4.6/10 IMDb";
        am1.hname[6]="Prince of Persia: The Sands of Time ";
        am1.hdes[6]="\n\t-Initial release: May 9, 2010 (Germany)\n\t-Story by: Jordan Mechner\n\t-Adapted from: Prince of Persia, Prince of Persia: The Sands of Time\n\t-Box office: $336.4 million";
        am1.hrate[6]="6.6/10 IMDb";
        am1.hname[7]="Power Rangers (2017 - Action/Sci-fi)";
        am1.hdes[7]="\n\t-Initial release: March 22, 2017 (Indonesia)\n\t-Adapted from: Power Rangers\n\t-Box office: $142.3 million";
        am1.hrate[7]="5.9/10 IMDb";
        am1.hname[8]="Dragonball: Evolution (2009 - Action/Fantasy)";
        am1.hdes[8]="\n\t-Initial release: April 10, 2009 (USA)\n\t-Adapted from: Dragon Ball\n\t-Box office: $58.2 million";
        am1.hrate[8]="2.5/10 IMDb";
        am1.hname[9]="Fantastic Beasts Film Series";
        am1.hdes[9]="\n\t-1.Fantastic Beasts and Where To Find Them(2016)\n\t-2.Fantastic Beasts and Crimes of Grindelwald(2018)";
        am1.hrate[9]="7.3/10 IMDb";
        am1.hname[10]="A-X-L (2018 - Sci-fi/Action)";
        am1.hdes[10]="\n\t-Initial release: August 16, 2018 (Russia)\n\t-Based on: Miles; by Oliver Daly\n\t-Box office: $8.5 million";
        am1.hrate[10]="5.3/10 IMDb";
        am1.hname[11]="After (2019 - Romance/Drama)";
        am1.hdes[11]="\n\t-Initial release: April 8, 2019 (Los Angeles)\n\t-Sequel: After We Collided\n\t-Adapted from: After";
        am1.hrate[11]="5.3/10 IMDb";
        am1.hname[12]="Aquaman (2018 - Action/Adventure)";
        am1.hdes[12]="\n\t-Initial release: December 7, 2018 (China)\n\t-Based on: Characters from DC\n\t-Box office: $1.148 billion";
        am1.hrate[12]="6.9/10 IMDb";
        am1.hname[13]="Chhichhore (2019 - Drama/Comedy)";
        am1.hdes[13]="\n\t-Initial release: September 6, 2019 (Indonesia)\n\t-Box office: ₹2,150,000,000 (US$30 million)\n\t-Sushant Singh Rajput";
        am1.hrate[13]="8.3/10 IMDb";
        am1.hname[14]="Frozen 2 (2019 - Family/Musical)";
        am1.hdes[14]="\n\t-Initial release: November 7, 2019 (Los Angeles)\n\t-Box office: $1.450 billion";
        am1.hrate[14]="6.8/10 IMDb";
        am1.hname[15]="Gemini Man (2019 - Action/Sci-fi)";
        am1.hdes[15]="\n\t-Initial release: October 3, 2019 (Germany)\n\t-Budget: $138 million";
        am1.hrate[15]="5.7/10 IMDb";
        am1.hname[16]="Mechanic: Resurrection (2016 - Action/Thriller)";
        am1.hdes[16]="\n\t-Initial release: 2016 (Belgium)\n\t-Box office: $125.7 million";
        am1.hrate[16]="5.7/10 IMDb";
        am1.hname[17]="Now You See Me 2 (2016 - Crime/Adventure)";
        am1.hdes[17]="\n\t-Initial release: June 2, 2016 (Australia)\n\t-Story by: Ed Solomon; Peter Chiarelli\n\t-Box office: $334.9 million";
        am1.hrate[17]="6.5/10 IMDb";
        am1.hname[18]="Kingsman";
        am1.hdes[18]="\n\t-1.Kingsman: The Secret Service (2014 - Action/Comedy)\n\t-2.Kingsman: The Golden Circle - 2017";
        am1.hrate[18]="1)7.7/10 IMDb\n6.7/10 IMDb";

        for(int j=0;j<17;j++)
        {
            cout<<c++<<". "<<am1.hname[j]<<endl;
        }

        cout<<"\n\nExit (0)"<<endl;
        ex=getch();
        if (ex==48)
        {
            choose();
        }

        cout<<"\n\n\tSo Tell Me What Is Your DESIRE : ";
        cin>>har;
        system("cls");

        har--;
        cout<<"--"<<am1.hname[har]<<"--"<<endl;
        downlink_for_name=am1.hname[har];
        cout<<am1.hdes[har]<<endl;
        cout<<am1.hrate[har]<<endl;
        cout<<"\n\n\n\n(98.)DOWNLOAD"<<endl;
        cout<<"\n\n\n\n(99.)EXIT\n\n\t>>>";
        cin>>pc;
        if (pc==98)
        {
            down();
        }
        else if (pc==99)
        {
            choose();
            wait1();
        }
        else
        {
            system("cls");
            mh();
        }

    }
    void ts()
    {
        int cha,a=1;
        system("cls");
        system("color 0f");
        gotoxy(10,05);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        gotoxy(35,06);
        cout<<"TV Series";
        gotoxy(10,07);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        am1.sname[0]="Arrow (2012 - Sci-fi)";
        am1.sdes[0]="\n\t-Genre: Superhero; Drama; Action; Crime; Mystery\n\t-Based on: Characters; by DC Comics\n\t-Spin-offs: The Flash, Supergirl, DC's Legends of Tomorrow, Batwoman, Vixen, Freedom Fighters: The Ray";
        am1.srate[0]="7.5/10 IMDb";
        am1.sname[1]="The Flash (2014 - Sci-fi - 7 seasons)";
        am1.sdes[1]="\n\t-First episode date: October 7, 2014\n\t-Related shows: Arrowverse\n\t-Genre: Superhero; Drama; Action";
        am1.srate[1]="7.6/10 IMDb";
        am1.sname[2]="The Flash (2014 - Sci-fi - 7 seasons)";
        am1.sdes[2]="\n\t-First episode date: October 7, 2014\n\t-Related shows: Arrowverse\n\t-Genre: Superhero; Drama; Action";
        am1.srate[2]="7.6/10 IMDb";
        am1.sname[3]="Merlin (2008 - Drama - 5 seasons)";
        am1.sdes[3]="\n\t-First episode date: September 20, 2008\n\t-Related shows: Merlin: Secrets and Magic";
        am1.srate[3]="7.9/10 IMDb";
        am1.sname[4]="Loki (2021 - Action fiction - 1 season)";
        am1.sdes[4]="\n\t-First episode date: June 9, 2021\n\t-Related shows: Marvel Cinematic Universe television series\n\t-Genre: Action-adventure; Crime thriller; Fantasy; Procedural drama; Science fiction; Superhero";
        am1.srate[4]="8.4/10 IMDb";
        am1.sname[5]="Shadow and Bone (2021 - Drama - 1 season)";
        am1.sdes[5]="\n\t-First episode date: April 23, 2021\n\t-Genre: Fantasy; Drama; Mystery\n\t-Adapted from: Shadow and Bone, Six of Crows";
        am1.srate[5]="7.7/10 IMDb";
        am1.sname[6]="Ben 10 (2005 - Adventure - 4 seasons)";
        am1.sdes[6]="\n\t-First episode date: December 27, 2005\n\t-Created by: Man of Action\n\t-Genre: Action; Adventure; Science fantasy; Superhero;";
        am1.srate[6]="7.3/10 IMDb";
        am1.sname[7]="Fringe (2008 - Sci-fi - 5 seasons)";
        am1.sdes[7]="\n\t-Original release: September 9, 2008 –; January 18, 2013\n\t-Genre: Science fiction; Supernatural drama;";
        am1.srate[7]="8.4/10 IMDb";
        am1.sname[8]="Iron Fist (2017 - Action fiction - 2 seasons)";
        am1.sdes[8]="\n\t-First episode date: March 17, 2017\n\t-Related shows: Marvel Cinematic Universe television series\n\t-Followed by: Marvel's The Defenders\n\t-Genre: Action; Drama; Martial arts; Superhero";
        am1.srate[8]="6.5/10 IMDb";
        am1.sname[9]="Alice in Borderland (2020 - Thriller - 1 season)";
        am1.sdes[9]="\n\t-Original release: December 10, 2020 –; present\n\t-Adapted from: Alice in Borderland\n\t-Original language: Japanese";
        am1.srate[9]="7.7/10 IMDb";

        for(int k=0;k<8;k++)
        {
            cout<<a++<<". "<<am1.sname[k]<<endl;
        }

        cout<<"\n\nExit (0)"<<endl;
        ex=getch();
        if (ex==48)
        {
            choose();
        }

        cout<<"\n\n\tSo Tell Me What Is Your DESIRE : ";
        cin>>cha;
        system("cls");

        cha--;
        cout<<"--"<<am1.sname[cha]<<"--"<<endl;
        downlink_for_name=am1.sname[cha];
        cout<<am1.sdes[cha]<<endl;
        cout<<am1.srate[cha]<<endl;
        cout<<"\n\n\n\n(98.)DOWNLOAD"<<endl;
        cout<<"\n\n\n\n(99.)EXIT\n\n\t>>>";
        cin>>pc;
        if (pc==98)
        {
            down();
        }
        else if (pc==99)
        {
            choose();
            wait1();
        }
        else
        {
            system("cls");
            ts();
        }
    }
    void kd()
    {
        int kalh,v=1;
        system("cls");
        system("color 0f");
        gotoxy(10,05);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        gotoxy(35,06);
        cout<<"K-DRAMA";
        gotoxy(10,07);
        cout<<"----------------------------------------------------------------------------------"<<endl;
        am1.dname[0]="The K2 (2016 - Drama - 1 season)";
        am1.dd[0]="\n\t-Original release: September 23 –; November 12, 2016";
        am1.drate[0]="7.8/10 IMDb";
        am1.dname[1]="Put Your Head on My Shoulder (2019 - 1 season)";
        am1.dd[1]="\n\t-No. of episodes: 24 + 1 special episode (14 mins)\n\t-No. of seasons: 1\n\t-Original language: MandarinGenre: Romantic comedy; Coming-of-age\n\t-Based on: Put Your Head on My Shoulder; by Zhao Qianqian";
        am1.drate[1]="8/10 IMDb";
        am1.dname[2]="The Holy Pearl (2011 - Action - 1 season";
        am1.dd[2]="\n\t-No. of episodes: 36\n\t-Original release: 2011 –; ended";
        am1.drate[2]="7.9/10 IMDb";
        am1.dname[3]="Legend of the Blue Sea (2016 - Romance - 1 season)";
        am1.dd[3]="\n\t-Original language: Korean";
        am1.drate[3]="8.1/10 IMDb";
        am1.dname[4]="City Hunter (2011 - Romance - 1 season)";
        am1.dd[4]="\n\t-Final episode date: July 28, 2011\n\t-Number of episodes: 20";
        am1.drate[4]="8.1/10 IMDb";
        am1.dname[5]="Dong Yi (2010 - Drama - 1 season)";
        am1.dd[5]="\n\t-HIstorical epic that follows a young man to King.\n\t-Final episode date: October 12, 2010";
        am1.drate[5]="8.1/10 IMDb";

        for(int l=0;l<6;l++)
        {
            cout<<v++<<". "<<am1.dname[l]<<endl;
        }

        cout<<"\n\nExit (0)"<<endl;
        ex=getch();
        if (ex==48)
        {
            choose();
        }
        cout<<"\n\n\tSo Tell Me What Is Your DESIRE : ";
        cin>>kalh;
        system("cls");

        kalh--;
        cout<<"--"<<am1.dname[kalh]<<"--"<<endl;
        downlink_for_name=am1.dname[kalh];
        cout<<am1.dd[kalh]<<endl;
        cout<<am1.drate[kalh]<<endl;
        cout<<"\n\n\n\n(98.)DOWNLOAD"<<endl;
        cout<<"\n\n\n\n(99.)EXIT\n\n\t>>>";
        cin>>pc;
        if (pc==98)
        {
            down();
        }
        else if (pc==99)
        {
            choose();
            wait1();
        }
        else
        {
            system("cls");
            kd();
        }
    }
};
mns m1;

void user()
{
    gotoxy(30,15);
    cout<<"<--Login succuesful...-->"<<endl;
    gotoxy(30,17);
    cout<<"PRESS ANY KEY TO CONTINUE...";
    getch();
    load1();
    system("cls");
    choose();
}

void choose()
{
    int gan=0;
    system("cls");
    userhead();
    gotoxy(00,10);
    cout<<"1.New arrival"<<endl;
    cout<<"2.Movie hub"<<endl;
    cout<<"3.TV series"<<endl;
    cout<<"4.K-Drama"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"\n\n\n\t'So tell me what is your desire :)'  >>> ";
    cin>>gan; //Difficult to find. OGGY is the man. :). And also CHUKZI helped. :)
    if (gan==1)
    {
        wait1();
        m1.nw();
    }
    else if (gan==2)
    {
        wait1();
        m1.mh();
    }
    else if (gan==3)
    {
        wait1();
        m1.ts();
    }
    else if (gan==4)
    {
        wait1();
        m1.kd();
    }
    else if (gan==5)
    {
        getch();
        cout<<"Thank you for using.";
        load1();
    }
    else
    {
        cout<<"Wrong input";
    }
}

void admin()
{
    string pw="1111";
    string br="";
    char pwd;
    system("color 07");
    gotoxy(10,10);
    cout<<"---ADMIN---\n\n"<<endl;
    cout<<"User name: admin";
    cout<<"\nPassword:";
    cj:
        pwd=getch();
        cout<<"*";
    if (pwd!= 13)
    {
        br=br+pwd;
        goto cj;
    }
    if (br==pw)
    {
        load1();
        cout<<"Access Granted.";
        astructure1();
    }
    else
    {
        load1();
        cout<<"Access denied.";
        admin();
    }

}
void astructure1()
{
    int ro;
    system("cls");
    userhead();
    gotoxy(10,05);
    cout<<"-----------------------------------------------------------"<<endl;
    gotoxy(32,06),
    cout<<"Admin login";
    gotoxy(10,07);
    cout<<"-----------------------------------------------------------"<<endl;
    gotoxy(00,10);
    cout<<"1.Add movie"<<endl;
    cout<<"2.Movie Store\n\n\t>>> ";
    cin>>ro;
    if (ro==1)
    {
        cout<<"Warning! <You can update new movies to NEW ARRIVAL only.>";
        cout<<"\n\n\t\t-Enter movie name :";
        cin>>am1.mname[def];
        cout<<"\n\n\t\t-Movie description :";
        cin>>am1.des[def];
        cout<<"\n\n\t\t-IMDb Rate :";
        cin>>am1.rate[def];
        def++;
        cout<<"Movie upload successful..";
        load1();
        astructure1();
    }
    else if (ro==2)
    {
        system("cls");
        choose();
    }
}

void welcome()
{
   int choose,ch;
   char a=219;

    system("color 72");
    gotoxy(36,14);
    printf("LUCIFER is loading...");
    gotoxy(33,15);
    for(int r=1;r<=20;r++)
    {
     for(int q=0;q<=100000000;q++);
     {
         cout<<a;
     }
    }
    system("cls");
    system("color 07");
    gotoxy(11,20);
    cout<<"Tell me what is your name: ";
    cin>>u1.uname;
    system("cls");
    system("color 02");
   gotoxy(10,05);
   cout<<"--------------------------------------------------------------------------------------------"<<endl;
   gotoxy(40,06);
   cout<<"Lucifer - Film & TV series Bot";
   userhead();
   gotoxy(10,07);
   cout<<"--------------------------------------------------------------------------------------------"<<endl;
   gotoxy(10,11);
   cout<<"\t\t<<Welcome to -LUCIFER -Film & TV series bot.>> \n\t\t\t<<So choose your most deepest desires as you wish.>>"<<endl;
   cout<<"\nChoose your account type:\n \t1.Admin\n \t2.Guest\n\n\t\t>>> ";
   cin>>choose;
   if (choose==1)
   {
       wait1();
       system("cls");
       admin();
   }
   else if (choose==2)
   {
       wait1();
       system("cls");
       gotoxy(00,05);
       user();
   }
   else
   {
       wait1();
       cout<<"Wrong input.";
       system("cls");
       welcome();
   }
}

void userhead()
{

    gotoxy(75,01);
    cout<<"--"<<u1.uname<<"--";
}

int main()
{
    welcome();
    return 0;
}

void gotoxy(int x, int y)
{

 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void load1()
{
    char a=219;
    gotoxy(36,22);
    printf("loading...");
    gotoxy(30,23);
    for(int r=1;r<=20;r++)
    {
     for(int q=0;q<=100000000;q++);
     {
         cout<<a;
     }
    }
    system("cls");
}

int downlink()
{
    ofstream downmov; //downlink_for_name;
    downmov.open ("download link.txt");
    downmov << "MOVIE NAME : "<<downlink_for_name;
    downmov << "\nDownload Link :- https://alexlanka.com";
    downmov.close();
    return 0;
}

void down()
{
    char q=219;
    system("cls");
   system("color 07");
   gotoxy(30,10);
   cout<<"Your download link will be genarate in less than one minute.. ";
   getch();
   downlink();
   gotoxy(20,50);
   cout<<"Downloading..\t";
   for (int u; u<=60; u++)
   {
       Sleep(40);
       cout<<q;
   }
   choose();
}

void wait1()
{
   char w=219;
   system("color 07");
   gotoxy(20,50);
   cout<<"Please Wait\t";
   for (int z; z<=60; z++)
   {
       Sleep(60);
       cout<<w;
   }
}
