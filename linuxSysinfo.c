/* ... Project no.2 ... */

/* ... C langauge ... */

/*
 *
 * Author: Helal Majeed
 * Github: HelalMajeed
 * Linkdin: Helal Majeed
 *
 */



#include <stdio.h>

#include <sys/sysinfo.h>

#include <stdlib.h>

#include <sys/utsname.h>

int commandChoice;

void intro(void);

void outro(void);

void listCommands(void);

void commitChoice(void);

void process(void);

void processInformation(void);

void hiddenFiles(void);

void subDirectories(void);

void fileInformation(void);

void freeSpace(void);

void currentPath(void);

void showHistory(void);

void changePassword(void);

void machineHardwareName(void);

void cpuInformation(void);

void hardwareComponents(void);

void hardwareInformation(void);

void pciInformation(void);

void scsiInformation(void);

void mountedFileSystem(void);

void cpuDetails(void);

void memoryDetails(void);

void biosDetails(void);

void systemInformation(void);

int main() {

    intro();
    
    listCommands();

    commitChoice();

    outro();

    return EXIT_SUCCESS;

}

void intro(void) {

     printf("\t@   \t\n\t @  \t\n\t  @  \t\n\t   @\t\n     @WELCOME TO \t\n\t   @\t\n\t  @  \t\n\t @   \t\n\t@    \t");
     printf("\t\n\t @  \t\n\t  @  \t\n\t   @\t\n     @SYSTEM INFO\t\n\t   @\t\n\t  @  \t\n\t @   \t\n\t@    \t\n");

}


void outro(void) {

    printf("\t@   \t\n\t @  \t\n\t  @  \t\n\t   @\t\n     @BYE BYE  \t\n\t   @\t\n\t  @  \t\n\t @   \t\n\t@    \t");
    printf("\t\n\t @  \t\n\t  @  \t\n\t   @\t\n     @SYSTEM INFO\t\n\t   @\t\n\t  @  \t\n\t @   \t\n\t@    \t\n");

}

void listCommands(void) {

    printf("\n");
    printf("1-To show current path\n");
    printf("2-To show hidden files\n");
    printf("3-To show files with subdirectories\n");
    printf("4-To show files informations\n");
    printf("5-To show mounted file system\n");
    printf("6-To show process details\n");
    printf("7-To show process information\n");
    printf("8-To list CPU information\n");
    printf("9-To show CPU infornations in more details\n");
    printf("10-To show hardware machine name\n");
    printf("11-To show hardware components\n");
    printf("12-To show hardware information\n");
    printf("13-To show free space\n");
    printf("14-To show RAM information in more details\n");
    printf("15-To show BIOS information\n");
    printf("16-To list PCI information\n");
    printf("17-To list SCSI information\n");
    printf("18-To change your password\n");
    printf("19-To show your command line history\n");
    printf("20-To show all system information\n");
    
}

void commitChoice(void) {

    scanf("%d", &commandChoice);

    switch (commandChoice) {

        case 1:
            currentPath();
            break;
        case 2:
            hiddenFiles();
            break;
        case 3:
            subDirectories();
            break;
        case 4:
            fileInformation();
            break;
        case 5:
            mountedFileSystem();
            break;
        case 6:
            process();
            break;
        case 7:
            processInformation();
            break;
        case 8:
            cpuInformation();
            break;
        case 9:
            cpuDetails();
            break;
        case 10:
            machineHardwareName();
            break;
        case 11:
            hardwareComponents();
            break;
        case 12:
            hardwareInformation();
            break;
        case 13:
            freeSpace();
            break;
        case 14:
            memoryDetails();
            break;
        case 15:
            biosDetails();
            break;
        case 16:
            pciInformation();
            break;
        case 17:
            scsiInformation();
            break;
        case 18:
            changePassword();
            break;
        case 19:
            showHistory();
            break;
        case 20:
            systemInformation();
            break;
        default :
            puts("Please choose from the list");
            break;
    }
}

void process(void) {
    long buf = system("ps");
}

void processInformation(void) {
    long buf = system("cat /proc/1/status");
}

void hiddenFiles(void) {
    long buf = system("ls -la");
}

void subDirectories(void) {
    long buf = system("ls -R");
}

void fileInformation(void) {
    long buf = system("ls -al");
}

void freeSpace(void) {
    long buf = system("free -h");
}

void currentPath(void) {
    long buf = system("pwd");
}

void showHistory(void) {
    long buf = system("history");
}

void changePassword(void) {
    long buf = system("passwd");
}

void machineHardwareName(void) {
    long buf = system("uname -a");
}

void cpuInformation(void) {
    long buf = system("lscpu");
}

void hardwareComponents(void) {
    long buf = system("lshw");
}

void hardwareInformation(void) {
    long buf = system("hwinfo");
}

void pciInformation(void) {
    long buf = system("lspci");
}

void scsiInformation(void) {
    long buf = system("lscsi");
}

void mountedFileSystem(void) {
    long buf = system("mount | column -t");
}

void cpuDetails(void) {
    long buf = system("sudo dmidecode -t processor");
}

void memoryDetails(void) {
    long buf = system("sudo dmidecode -t memory");
}

void biosDetails(void) {
    long buf = system("sudo dmidecode -t bios");
}

void systemInformation(void) {
    long buf = system("inxi -Fx");
}
