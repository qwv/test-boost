#!/usr/bin/env python

from test import Example

#e = Example() # won't work, constructore not available from python
f = Example.factory()
s = Example.singleton()

print ("f =",f)
print ("s =",s)
