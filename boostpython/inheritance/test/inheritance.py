#!/usr/bin/env python

import test

b = test.Base()
d = test.Derived()

test.fb(b)
test.fb(d)

# not possible, fd is only for Derived objects
# test.fd(b)
test.fd(d)

x = test.factory()
test.fb(x)
