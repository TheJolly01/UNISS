#!/bin/bash
X=3
Y=4
empty_string="vxzvzxv"
if [ $X -lt $Y ]	#is $X less than $Y?
then
	echo "X=${X}, which is smaller than Y=${Y}"
fi
if [ -n "$empty_string" ]; then
	echo "empty string is non_empty"
fi
if [ -e "${HOME}/.fvmrc" ]; then # test if ~/.fvmrc exists
	echo "you have a .fvmrc file"
else
	echo "you have no .fvmrc file"
fi
