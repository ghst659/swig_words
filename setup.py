#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


example_module = Extension('_words',
                           sources=['words_wrap.cxx', 'words.cc'],
                           )

setup (name = 'words',
       version = '0.1',
       author      = "TSC",
       description = """Simple swig example from docs""",
       ext_modules = [words],
       py_modules = ["words"],
       )
