#include <stdio.h>
#include <string.h>
int main(){
	char story[][28]={"The Legend of Sleepy Hollow", "The Dead", "The Yellow Wallpaper",
					"The Most Dangerous Game", "The Turn of the Screw", "The Killers"};
	char *p ;
	char (*ptr)[28];
	int i=0;
	p=story +1;			//P, "The Dead" i gösteriyor.		
	printf("%s\n",p);
	
	p=p+4; 
	printf("%s\n",p);	//P, Dead kýsmýný gösterecek.
	for(i=0;story[2][i]!=NULL;i++)	printf("%c ",story[2][i]); 
	//T h e Y e l l o w W a l p a p e r þeklinde basýlacak çünkü stringi dizinin 2.elemanýna atadýk ve harf harf bastýrdýk.
	ptr = story;		//Ptr,story dizisinin ilk elemanýný gösterir.
	ptr +=3;			//Ptr,story dizisinin 4.elemanýný gösterir.
	printf("\n%s\n",ptr);	//The Most Dangerous Game gösterilecek.
	p=ptr+2;				//p, dizinin 6.elemanýný gösterecek.
	p=p+4;printf("%c\n",*(p));	//The Killers içinde 4.karakteri gösterecek.
	for(i=0;i<strlen(p);++p) printf("%c_",*p); //K harfindeydi yani p uzunluðu 7 ye kadar gidecek
											//K_i_l_l_e_r_s_ basacak.
	return 0;									
}

