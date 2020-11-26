//
//  main.c
//  Understanding_C_Pointers
//  Page 26 of Book
//
//  Created by Maciej on 11/25/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char *titles[] = {
        "C Language",
        "Algorithms",
        "Purple Team Hacking",
        "Green Eggs and Ham",
    };
    
    //Double pointer for array of different categories of books
    char **bestBooks[4];
    char **englishBooks[1];
    
    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[1];
    bestBooks[2] = &titles[2];
    bestBooks[3] = &titles[3];
    
    englishBooks[0] = &titles[2];
    
    //Size of pointer is 8, thus you will get 32 [8 bytes * 4 elements]
    printf("Size of titles is %lu\n",sizeof(bestBooks));
    
    //Using a for loop to print
    for(int i = 0; i < sizeof(bestBooks)/sizeof(long); i++){
        printf("Book %d is %s\n", i, *bestBooks[i]);
    }
    


    return 0;
}
