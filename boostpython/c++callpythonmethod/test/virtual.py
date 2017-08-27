#!/usr/bin/env python

from test import Base

class PythonBase(Base):
    def callback(self, param):
        print param + " call python method" 

t = Base()
print t.text()

p = PythonBase()
p.call_python_method()
