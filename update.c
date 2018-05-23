#include <stdlib.h>
#include <stdio.h>
int main () {
            // printing the options available for updating
	printf("\n1.Update the system\n2.Remove unused packages\n3.Remove old kernel\n4.Do everything of that\n5.Cancel\n\nPlease choose an option: ");
	
	int decision;
	while (!scanf("%d", &decision)){                       // getting the options are given by the users
		printf("Please choose an Option by typing in the specific number: ");      
		clearerr(stdin);
		while(getc(stdin) != '\n');
	}
 // selecting the number are given by the user
	if (decision == 1)
		decision = system("sudo dnf -y upgrade --refresh");
	else if (decision == 2)
		decision = system("sudo dnf -y autoremove");
	else if (decision == 3)
		decision = system("sudo dnf -y install yum-utils && sudo package-cleanup -y --oldkernels --count=1");
	else if (decision == 4)
		decision = system("sudo dnf -y upgrade --refresh && sudo dnf -y autoremove && sudo dnf -y install yum-utils && sudo package-cleanup -y --oldkernels --count=1");
	else if (decision == 5)
		return 0;

	return 0;

}
