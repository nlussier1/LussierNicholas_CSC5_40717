/* 
 * File:   main.cpp
 * Author: Nicholas Lussier *
 * Created on January 14, 2015, 11:35 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    bool cusp=false;
    int month,day;
    string sign;
    //Prompt for the input
    cout<<"Input the numerical/integer month you were born in"<<endl;
    cin>>month;
    cout<<"Input the integer day you were born on"<<endl;
    cin>>day;
    //Determine the sign
    if(month==1&&day<20)sign="Capricorn and your horoscope is:\n You're generally intuitive, Capricorn, but today you could be so sensitive\n to others that you pick up on just about everything.\n Stay away from hospitals or police stations if you can. You might \n absorb everyone's pain.\n It’s better to put this vibe to work spiritually or artistically.\n Seek friends and colleagues who work with you in these departments and\n you should have a wonderful day.\n";
    else if(month==1&&day>=20)sign="Aquarius and your horoscope is:\n Expect a busy day, Aquarius. You're likely to spend a lot of time in the car running errands and paying visits, perhaps related to projects\n A number of phone calls might have to be made to friends or members of a group with which you're affiliated\n This might involve sharing good news or exciting information that can lead to intriguing conversations\n The day could be stimulating as well as busy\n";
    else if(month==2&&day<=18)sign="Aquarius and your horoscope is:\n Expect a busy day, Aquarius. You're likely to spend a lot of time in the car running errands and paying visits, perhaps related to projects\n A number of phone calls might have to be made to friends or members of a group with which you're affiliated\n This might involve sharing good news or exciting information that can lead to intriguing conversations\n The day could be stimulating as well as busy\n";
    else if(month==2&&day>=19)sign="Pisces and your horoscope is:\n Today you might want to put one last burst of effort into a project, as this could make a big difference to your income and status\n It could put you before the public in some way. Your physical energy is high and mental abilities especially sharp\n Whatever you choose to work on will be accomplished quickly and skillfully\n Relations with others will be congenial and supportive\n";
    else if(month==3&&day<=20)sign="Pisces and your horoscope is:\n Today you might want to put one last burst of effort into a project, as this could make a big difference to your income and status\n It could put you before the public in some way. Your physical energy is high and mental abilities especially sharp\n Whatever you choose to work on will be accomplished quickly and skillfully\n Relations with others will be congenial and supportive\n";
    else if(month==3&&day>=21)sign="Aries and your horoscope is:\n So many ideas are flooding your mind today that you might have trouble sorting them out if you don't write them down\n They could involve travel, education, group activities, writing, and publishing\n You might want to discuss them with friends or members of a group to which you belong\n Your mind is in the clouds, so practical matters could seem tedious.\n";
    else if(month==4&&day<=19)sign="Aries and your horoscope is:\n So many ideas are flooding your mind today that you might have trouble sorting them out if you don't write them down\n They could involve travel, education, group activities, writing, and publishing\n You might want to discuss them with friends or members of a group to which you belong\n Your mind is in the clouds, so practical matters could seem tedious.\n";
    else if(month==4&&day>=20)sign="Taurus and your horoscope is:\n A copious amount of physical and mental energy could focus on psychic, metaphysical, or spiritual activities today\n You're feeling especially intuitive that you could almost read minds\n One possible channel for all this energy is service to others, perhaps counseling or maybe even healing of some kind\n You might also want to write down your ideas on whatever subject interests you most.\n";
    else if(month==5&&day<=20)sign="Taurus and your horoscope is:\n A copious amount of physical and mental energy could focus on psychic, metaphysical, or spiritual activities today\n You're feeling especially intuitive that you could almost read minds\n One possible channel for all this energy is service to others, perhaps counseling or maybe even healing of some kind\n You might also want to write down your ideas on whatever subject interests you most.\n";
    else if(month==5&&day>=21)sign="Gemini and your horoscope is:\n Social events and group activities are likely to take up most of your day/n You could come into contact with so many people you may not be able to keep track of them all/n Get contact information for all new acquaintances. You should experience a lot of intellectual stimulation/n Conversations take up most of your energy. This should be an enjoyable but tiring day/n";
    else if(month==6&&day<=21)sign="Gemini and your horoscope is:\n Social events and group activities are likely to take up most of your day/n You could come into contact with so many people you may not be able to keep track of them all/n Get contact information for all new acquaintances. You should experience a lot of intellectual stimulation/n Conversations take up most of your energy. This should be an enjoyable but tiring day/n";
    else if(month==6&&day>=22)sign="Cancer and your horoscope is:\n Today you might work on a lot of writing/n It might be your own or editing the work of others. You could find what you're doing exciting and stimulating/n Phone calls to interesting people could also take place. The only caution is don't tire yourself out/n You could be on such an intellectual high that mundane matters like meals slip your mind/n";
    else if(month==7&&day<=22)sign="Cancer and your horoscope is:\n Today you might work on a lot of writing/n It might be your own or editing the work of others. You could find what you're doing exciting and stimulating/n Phone calls to interesting people could also take place. The only caution is don't tire yourself out/n You could be on such an intellectual high that mundane matters like meals slip your mind/n";
    else if(month==7&&day>=23)sign="Leo and your horoscope is:\n If you've been thinking of taking a long trip by air, Leo, this is the day to start planning it - or even leave, if you can work it in\n Your excitement and anticipation are high, and your sense of adventure is at a peak\n You won't complete the day without doing something unusual or exciting, such as going to a concert, play, or sporting event\n You will remember it for a long time.\n";
    else if(month==8&&day<=22)sign="Leo and your horoscope is:\n If you've been thinking of taking a long trip by air, Leo, this is the day to start planning it - or even leave, if you can work it in\n Your excitement and anticipation are high, and your sense of adventure is at a peak\n You won't complete the day without doing something unusual or exciting, such as going to a concert, play, or sporting event\n You will remember it for a long time.\n";
    else if(month==8&&day>=23)sign="Virgo and your horoscope is:\n Paperwork regarding money might need attention today, Virgo, as you could be planning to entertain visitors\n These are apt to be exciting people bringing good news and interesting information\n You might also expect a delivery of some new books or equipment, and this should contribute to the excitement\n The doors to adventure are going to open up in some way. Use this to your advantage\n";
    else if(month==9&&day<=22)sign="Virgo and your horoscope is:\n Paperwork regarding money might need attention today, Virgo, as you could be planning to entertain visitors\n These are apt to be exciting people bringing good news and interesting information\n You might also expect a delivery of some new books or equipment, and this should contribute to the excitement\n The doors to adventure are going to open up in some way. Use this to your advantage\n";
    else if(month==9&&day>=23)sign="Libra and your horoscope is:\n You might spend hours on the phone today, Libra, possibly discussing opportunities to perform services for others\n Your mental and physical energy should be high. You will want to use as many tools as you can to get whatever information you need, including books and the Internet\n You're going to want to get out and walk or work out, as you will need to work off excess energy\n";
    else if(month==10&&day<=22)sign="Libra and your horoscope is You might spend hours on the phone today, Libra, possibly discussing opportunities to perform services for others\n Your mental and physical energy should be high. You will want to use as many tools as you can to get whatever information you need, including books and the Internet\n You're going to want to get out and walk or work out, as you will need to work off excess energy\n";
    else if(month==10&&day>=23)sign="Scorpio and your horoscope is:\n New, exciting opportunities to earn more money might come your way today, Scorpio perhaps through new fields\n Colleagues could bring information. Your sense of adventure is high, so risks might seem more attractive than usual\n Don't get carried away. Don't forget to explore every possibility in detail before committing to anything\n Nothing is certain, even on days like today\n";
    else if(month==11&&day<=21)sign="Scorpio and your horoscope is:\n New, exciting opportunities to earn more money might come your way today, Scorpio perhaps through new fields\n Colleagues could bring information. Your sense of adventure is high, so risks might seem more attractive than usual\n Don't get carried away. Don't forget to explore every possibility in detail before committing to anything\n Nothing is certain, even on days like today\n";
    else if(month==11&&day>=22)sign="Sagittarius and your horoscope is:\n Friendships or love relationships formed today are rooted as much in intellectual compatibility as emotional attraction\n Stimulating conversations could take place with old and new friends alike. Creative projects go well\n If you've been looking for some information, you should find it today.\n This should be a very busy, exciting day on a number of different levels\n";
    else if(month==12&&day<=21)sign="Sagittarius and your horoscope is:\n Friendships or love relationships formed today are rooted as much in intellectual compatibility as emotional attraction\n Stimulating conversations could take place with old and new friends alike. Creative projects go well\n If you've been looking for some information, you should find it today.\n This should be a very busy, exciting day on a number of different levels\n";
    else if(month==12&&day>=22)sign="Capricorn and your horoscope is:\n You're generally intuitive, Capricorn, but today you could be so sensitive to others that you pick up on just about everything.\n Stay away from hospitals or police stations if you can. You might absorb everyone's pain.\n It’s better to put this vibe to work spiritually or artistically.\n Seek friends and colleagues who work with you in these departments and you should have a wonderful day.\n";
    //Output the sign and the cusp
    if(month==1&&day>17&&day<22)cusp=true;
    if(month==2&&day>16&&day<21)cusp=true;
    if(month==3&&day>18&&day<23)cusp=true;
    if(month==4&&day>17&&day<22)cusp=true;
    if(month==5&&day>18&&day<23)cusp=true;
    if(month==6&&day>19&&day<24)cusp=true;
    if(month==7&&day>20&&day<25)cusp=true;
    if(month==8&&day>20&&day<25)cusp=true;
    if(month==9&&day>20&&day<25)cusp=true;
    if(month==10&&day>20&&day<25)cusp=true;
    if(month==11&&day>19&&day<24)cusp=true;
    if(month==12&&day>19&&day<24)cusp=true;
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    return 0;
}