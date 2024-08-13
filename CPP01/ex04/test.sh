#!/bin/bash

cmd='./Replace'

PURPLE='\033[0;35m'
BLUE='\033[0;34m'
GREEN='\033[0;32m'
RED='\033[0;31m'
RESET='\033[0m' 

cat /etc/os-release > test.cpp104

echo -e "\n${PURPLE}Erreur sur le nombre d'arguments: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 Argv2 Argv3 Argv4${RESET}"
echo -e "Output: $(${cmd} test.cpp104 Argv2 Argv3 Argv4)"
grep "xxx" test.cpp104.replace
if [ $? -eq 2 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

echo -e "${PURPLE}Erreur: le fichier n'existe pas: ${RESET}"
echo -e "${BLUE}${cmd} RandomName Argv2 Argv3${RESET}"
echo -e "Output: $(${cmd} RandomName Argv2 Argv3)"
grep "xxx" RandomName.replace
if [ $? -eq 2 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi
echo -e "${PURPLE}Pas d'occurrence trouvée: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 xxx zzz${RESET}"
echo -e "Output: $(${cmd} test.cpp104 xxx zzz)"
grep "xxx" test.cpp104.replace
if [ $? -eq 1 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

echo -e "${PURPLE}Remplacement d'un seul caractère: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 N Z${RESET}"
echo -e "Output: $(${cmd} test.cpp104 N Z)"
grep "N" test.cpp104.replace
if [ $? -eq 1 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

echo -e "${PURPLE}Remplacement d'une chaine de caractères: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 NAME COUCOU${RESET}"
echo -e "Output: $(${cmd} test.cpp104 NAME COUCOU)"
grep "NAME" test.cpp104.replace
if [ $? -eq 1 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

echo -e "${PURPLE}Remplacement d'une chaine de caracteres plusieurs fois: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 URL BLURP${RESET}"
echo -e "Output: $(${cmd} test.cpp104 URL BLURP)"
grep "URL" test.cpp104.replace
if [ $? -eq 1 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

echo -e "${PURPLE}Remplacement d'une chaine de caracteres par des espaces: ${RESET}"
echo -e "${BLUE}${cmd} test.cpp104 URL \"     \"${RESET}"
echo -e "Output: $(${cmd} test.cpp104 URL "      ")"
grep "URL" test.cpp104.replace
if [ $? -eq 1 ]; then
	echo -e "${GREEN}OK${RESET}\n"
else
	echo -e "${RED}KO${RESET}\n"
fi

rm -rf test.cpp104
rm -rf test.cpp104.replace