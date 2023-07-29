#include <stdio.h>
int main()
{
int rockwell_hardness,carbon_content ,tensil_strength;
scanf ("%d %d %d",&rockwell_hardness,&carbon_content,&tensil_strength);
if (rockwell_hardness>50 && carbon_content>0.7 && tensil_strength>5600)
{
	printf("%s","grade 10");
}
else if (rockwell_hardness>50 && carbon_content>0.7)
{
	printf("%s","grade 9");
}
else if (carbon_content>0.7 && tensil_strength>5600)
{
	printf("%s","grade 8");
}
else if (rockwell_hardness>50 && tensil_strength>5600)
{
	printf("%s","grade 7");
}
else 
{
	printf("%s","grade 0");
}
return 0;
}
 
                                                                                                                                                                                                                                                                                                                                                                                                                                                      
