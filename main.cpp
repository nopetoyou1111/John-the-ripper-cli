#include <iostream>
#include <stdlib.h>
#include <string>
int main() {
    std::string ans;
    std::string yn;
    system("chmod 777 scripts/install.sh");
    system("sudo ./scripts/install.sh");
    system("clear");
    std::cout << "\033[0;32mMMMMMMMMMMMMMMMMMNd::coxOXWMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMM0'      .;o0WMMMMMMMMMM\nMMMMMMMMMMMMMMMMWx.        .dWMMMMMMMMMM\nMMMMMMMMMMMMMMWKk:...     .oNMMMMMMMMMMM\nMMMMMMMMMMMMMMXl. ..',::,.lXMMMMMMMMMMMM\nMMMMMMMMMMMMMMWd.     .,lcckKXWMMMMMMMMM\nMMMMMMMMMMMMMNKc         ;l,.':OWMMMMMMM\nMMMMMWWWWWWMWx'.         ;0o   ,0MMMMMMM\nMMMMNdlxooKMMd.          .dKl. .oKWMMMMM\nMMMMWkoOodNN0c          .lXWk.   'OWMMMM\nMMMMM0dOo:c,..,.         ,d0Kc    ,0MMMM\nMMMMM0dOl..',,c;,'.,c,''   .:l.    :XMMM\nMMMMM0dOd:'.;:c,,:'ck;':.           oNMM\nMMMMM0dOl;c;',:'...';.',.           .kWM\nMMWKOddk:;kl..;d:.  .';,''.          ;KM\nMMNxclxkolkc  .ox;...',,,,.... .. ...,kW\nMMMMWWWM0oko.'::':,,dc';:cc.;l:,,';l,,xW\nMMMMMMMM0okdcoko':;,dc'',:c.':c;..;:.:XM\nMMMMMMMM0okdkKxxkc.,oc,c:;c,o0OkkxxkkKMM\nMMMMMMMNo:dccKNOxdc;,,;xOkkOXMMMMMMMMMMM\nMMMMMMMNxloodKMWKxdoodONMMMMMMMMMMMMMMMM";
    std::cout <<  "\033[0;32m Hello from Hack it (:\n";
    std::cout <<  " \033[1;31mGithub : https://github.com/nopetoyou1111/HACKit\n";
    // std::cin >> ans;
    do {
    std::cout << "\033[0;35m HACKit\033[0;32m[~]:";
    std::cin >> ans;
    if(ans == "John" || ans == "john"){
        system("clear");
        std::cout << "\033[0;33m Do you want to run John?Y/n\n";
        std::cout << "\033[0;35m HACKit\033[0;32m[~]:";
        std::cin >> yn;
        if(yn == "y" || yn == "Y"  || yn == "yes"  || yn == "Yes"  || yn == "YES"  || yn == "ys"  || yn == "yse"){
            std::cout << "\033[0;31m [*]Running john...\n";
            // std::cout << "\033[0;36\n";
            system("chmod 777 tools/John-cli/install.sh");
            system("sudo bash tools/John-cli/install.sh");
            system("sudo python3 ./tools/John-cli/john.py");
            return 0;


        }
        else if(yn == "n" || yn == "N"  || yn == "No"  || yn == "no"  || yn == "NO"  || yn == "Nope"  || yn == "NOPE" || yn == "nope"){
            system("[!]NEVER GONNA SAY GOODBYE (:");
            return 0;
        }
    }


}while (true);
return 0;

}
