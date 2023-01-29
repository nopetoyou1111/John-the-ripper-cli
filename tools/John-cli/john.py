import colorama 
from colorama import *
import os
colorama.init(autoreset=True)
os.system('clear')
print(Fore.RED+"MMMMMMMMMMMMMMMMMNd::coxOXWMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMM0'      .;o0WMMMMMMMMMM\nMMMMMMMMMMMMMMMMWx.        .dWMMMMMMMMMM\nMMMMMMMMMMMMMMWKk:...     .oNMMMMMMMMMMM\nMMMMMMMMMMMMMMXl. ..',::,.lXMMMMMMMMMMMM\nMMMMMMMMMMMMMMWd.     .,lcckKXWMMMMMMMMM\nMMMMMMMMMMMMMNKc         ;l,.':OWMMMMMMM\nMMMMMWWWWWWMWx'.         ;0o   ,0MMMMMMM\nMMMMNdlxooKMMd.          .dKl. .oKWMMMMM\nMMMMWkoOodNN0c          .lXWk.   'OWMMMM\nMMMMM0dOo:c,..,.         ,d0Kc    ,0MMMM\nMMMMM0dOl..',,c;,'.,c,''   .:l.    :XMMM\nMMMMM0dOd:'.;:c,,:'ck;':.           oNMM\nMMMMM0dOl;c;',:'...';.',.           .kWM\nMMWKOddk:;kl..;d:.  .';,''.          ;KM\nMMNxclxkolkc  .ox;...',,,,.... .. ...,kW\nMMMMWWWM0oko.'::':,,dc';:cc.;l:,,';l,,xW\nMMMMMMMM0okdcoko':;,dc'',:c.':c;..;:.:XM\nMMMMMMMM0okdkKxxkc.,oc,c:;c,o0OkkxxkkKMM\nMMMMMMMNo:dccKNOxdc;,,;xOkkOXMMMMMMMMMMM\nMMMMMMMNxloodKMWKxdoodONMMMMMMMMMMMMMMMM")
print(Fore.GREEN+"John is ready to go (:")
print(Fore.CYAN+"Github : https://github.com/nopetoyou1111/HACKit\n")
while True:
    command = input(Fore.RED+"John-the-ripper"+Fore.GREEN+"[~]:")
    if "john" in command:
        os.system(command)             
    elif command == "clear":
        os.system("clear")
    else:
        print(Fore.CYAN+"john --help")
        print(Fore.CYAN+"John-docs : https://www.openwall.com/john/doc/")
