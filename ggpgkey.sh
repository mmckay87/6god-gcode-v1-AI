#!/bin/sh

MASTERKEY='TOBE?DEFINED';
gpg --gen-key -t rsa -b 4096 -p $MASTERKEY
#Enter password if we can not append a password to the script
$IDRSUBD/{adminkeys}/{_operatorkeys_}/{greasyuserkeys}