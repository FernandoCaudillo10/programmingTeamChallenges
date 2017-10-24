#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

string digAlphPair(string str){
        string created;

        for(auto c: str){
                if(!isdigit(c)){
                        break;
                }
                created += c;
        }
        created += str[created.size()];
        return created;
}
string decode(string str){
        string decoded;
        while(str != ""){
                string firstPair=digAlphPair(str);
                char alph = firstPair[firstPair.size()-1];
                string digit = firstPair.substr(0,firstPair.size()-1);
                if(!isdigit(firstPair[0])){
                        //cout << firstPair[0] << endl;
                        decoded += firstPair[0];
                }
                else{
                        //cout << alph << endl;
                        for(int i=0; i< stoi(digit); i++){
                                decoded += alph;
                        }
                }
                str.erase(str.begin(),str.begin()+firstPair.size());
        }
        //cout << decoded << endl;
        return decoded;
}

int main(){
        int tcases;
        string strL, strC;
        cin >> tcases;

        for(int t=0; t<tcases; t++){
                cin >> strL >> strC;
                string decoded=decode(strC);
        //      cout << strL << endl << decoded << endl;
                if(strL == decoded)
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }


        return 0;
}
