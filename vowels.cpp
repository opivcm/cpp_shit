#include<iostream>
#include<string.h>  

using namespace std;
int main()
{ 
    char s1[100];
    int i,l,vow=0,con=0;
    cin.clear();
    cout<<"Enter a valid string: "<<endl;
    cin.getline(s1,100);

    l = strlen(s1);
    for(i=0;i<l;i++)
    if(isalpha(s1[i]))
        switch(tolower(s1[i]))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
                vow++;
                break;
        default : con++;

    }
    cout<<"Number of vowels are :- "<<vow<<endl;
    cout<<"Number of consonents are :- "<<con<<'\n';

return 0;
}