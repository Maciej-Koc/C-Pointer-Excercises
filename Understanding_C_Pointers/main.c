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
    
    char **bestBooks[3];
    
    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[1];
    bestBooks[2] = &titles[2];
    bestBooks[3] = &titles[3];
    
    printf("Best Book 0 is %s.\n",*bestBooks[0]);
    printf("Best Book 1 is %s.\n",*bestBooks[1]);
    printf("Best Book 2 is %s.\n",*bestBooks[2]);
    printf("Best Book 3 is %s.\n",*bestBooks[3]);

    return 0;
}
