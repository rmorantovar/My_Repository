//
//  try_inputs.cpp
//  
//
//  Created by Roberto Moran Tovar on 02.03.21.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <time.h>
#include <algorithm>

int main(int argc, char* argv[]){
    
    for(int o=0; o<argc ; o++){
        double s = strlen(argv[o]);
        std::cout << s << std::endl;
        for(int u=0; u<s ; u++){
            std::cout << argv[o][u] << "\t" ;
        }
        std::cout << std::endl;
    }
}
