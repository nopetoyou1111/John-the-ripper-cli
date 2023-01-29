GRY='\033[1;30m'
RED='\033[0;31m'
BLU='\033[0;34m'
GRN='\033[0;32m'
PUL='\033[0;35m'
RST='\033[0m'

checkroot() {
    SAVE_LD_PRELOAD="$LD_PRELOAD"
    unset LD_PRELOAD
    if [ "$(id -u)" -ne 0 ]; then
        printf "${RED}Nope , you are not the root user\n${RST}"
        exit 1
    fi
    LD_PRELOAD="$SAVE_LD_PRELOAD"
}
checkroot

install(){
    sudo apt-get install john
    
}
run(){
    make tools/John-cli/john
    sudo ./tools/John-cli/john
}
install
# run
