#!/usr/bin/env python

import test

class MyClass(test.Base):

    """Docstring for MyClass. """

    def __init__(self, name):
        """TODO: to be defined1. """
        super(MyClass, self).__init__(name)

m = MyClass("hello world")
