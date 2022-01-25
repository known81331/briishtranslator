#include <iostream>
#include <string>
#include <array>

using std::string;
using std::array;

int main(){
    int max = 24;
    int key = 0;
    string bruv;
    std::cout<<"English <-> Bri'ish translator\n";
    std::getline(std::cin,bruv);
    string finding ="";
    string replacement="";
    array<string, 24> dictionary = {"shopping trolley", "delightful", "crisps","pe'all", "scrummy", "loo", "mate", "bri'ish", "quid","colour", "'ello", "bruv", "ba'ah","chewsday", "walkers", "oi", "tomahto", "crisps", "chips", "bo'ol", "'o", "wo'er", "innit", "biscuits"};
   
    array<string, 24> usadic = {"shopping cart", "delicious", "chips","people", "crispy", "toilet", "dude", "british", "coins", "color", "hello", "bro", "butter", "tuesday", "lay's", "hey", "tomato", "chips", "fries", "bottle", "of", "water","isn't it", "breads"};

    for(key; key<max; key++){
       finding = usadic[key];
       replacement = dictionary[key];
        while(bruv.find(finding) != string::npos){
            bruv.replace(bruv.find(finding), finding.length(), replacement);
        }
    }
    if(key==max)
        printf("\033[0;31m%s\n", bruv.c_str());
    //std::cout<<bruv<<std::endl;
    return 0;


}