//laba6.c

#include "alphord.h"

int main() {
	
	char str[400] = { "home, scar,  moron, deserve, grateful, fruition, rake, notorious, bore, dungeon, chronic, freak, "
					  "detention, indecency, crave, clammy, scandalous, ose, wasp, awkward, adequate, anthem,  shot,  hse, couple, phone." };
	char str1[400];

	puts("The intial string:\n");
	puts(str); puts("");
	alph_ord(str);
	
	puts("\nRight order of words if to believe the site https://www.theithelper.ru/onlajn-sortirovka:\n"
		"adequate,anthem,awkward,bore,chronic,clammy,couple,crave,deserve,detention,dungeon,freak,"
		"fruition,grateful,home,hse,indecency,moron,notorious,ose,phone,rake,scandalous,scar,shot,wasp");
	
	puts("\nNow input your string:\n");
	gets(str1); puts("");
	alph_ord(str1);
	
 	return 0;
}
