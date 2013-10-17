//
//  Draw.c
//  DrawLibrary
//
//  Created by Apple on 10/17/13.
//  Copyright (c) 2013 Apple. All rights reserved.
//

#include <stdio.h>
#include <string.h>


void drawLine1()
{
    char line[200];
    strcpy(line,"");
    
    for (int i=0; i<4; i++) {
        strcat(line, "\t\t\t\t-\t\t");
    }
    printf("%s",line);
    printf("\n");
}

void drawLine2()
{
    char line[200];
    strcpy(line,"");
    
    for (int i=0; i<4; i++) {
        strcat(line, "\t\t\t-\t\t-\t");
    }
    printf("%s",line);
    printf("\n");
}
void drawLine3()
{
    char line[200];
    strcpy(line,"");
    
    for (int i=0; i<4; i++) {
        strcat(line, "\t\t-\t\t\t\t-");
    }
    printf("%s",line);
    printf("\n");
}
void drawLine4()
{
    char line[200];
    strcpy(line,"\t-");
    
    for (int i=0; i<4; i++) {
        strcat(line, "\t\t\t\t\t\t-");
    }
    printf("%s",line);
    printf("\n");
}





void drawZicZac()
{
    drawLine1();
    drawLine2();
    drawLine3();
    drawLine4();
    
}
void drawCar()
{
    char line[2000];
    strcpy(line,"              -------------------\n");
    strcat(line, "          -                       -\n");
    strcat(line, "        -                           -\n");
    strcat(line, " ------                    -          --------------\n");
    strcat(line, "|                         | |                       |\n");
    strcat(line, "|       - -                -             - -        |\n");
    strcat(line, "|     -     -                          -     -      |\n");
    strcat(line, " -----   -   -------------------------    -   ------\n");
    strcat(line, "      -     -                          -     -\n");
    strcat(line, "         -                               - -\n");
    printf("%s",line);
}
