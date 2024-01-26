/*
                    TeV
                Text Viewer 

    Simple cat clone - Written in C++ for 
    POSIX Compatible Operating Systems.

    Built to be pretty lightweight and 
    designed for basic features.

    Current Date: 01/13/2024 @ 09:58 UTC-5
*/

    #include <iostream>
    #include <fstream>
    #include <string>
    #include <stdio.h>
//  ----    break   ----
    using namespace std;

    int main(int argc, char** argv){
        
        // File open test?
        if (argc > 1){
            std::cout << argv[1] << std::endl;
        }
        /*
            A good chunk of this was rewritten by my partner.
            Thanks for saving my ass when I kept messing up lol.
        */
        printf("tev - enter file name\n?");     /*  Have -some- form of interaction here.   */
        FILE * file;
        string filename;
        std::cin >> filename;
        file = fopen(filename.c_str(), "r");
        if (file != NULL){
            //cout << "reading";
            //string file_output;     /*      Text File Output    */
            char outbuff[256];
            do{
                fgets(outbuff, 256, file);
                cout << outbuff;
            }
            while(! feof(file));
            
        fclose(file);
    /*
        Coming Soon!

        - HEX View Capability

    */
        }
    }