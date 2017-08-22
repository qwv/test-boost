#!/usr/bin/env python

import test
c1 = test.Ctor("Bonjour")
print (c1.greet())

c2 = test.Ctor(3.141592654, 1.0)
print (c2.greet())
