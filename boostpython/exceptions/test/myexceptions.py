#!/usr/bin/env python

from test import someFunction

try:
    someFunction()
except UserWarning as ex:
    print ("Exception %s caught: \"%s\""%(type(ex),ex))
