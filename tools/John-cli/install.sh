RED='\033[0;31m'
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
install
