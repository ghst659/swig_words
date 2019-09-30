#!/usr/bin/env python3
import words
buf = words.new_string_ptr()
words.string_ptr_assign(buf, 'single_word')
print(words.string_ptr_value(buf))
px = words.Prefixer('prologue ')
print(px.preview(words.string_ptr_value(buf)))
px.modify_word(buf)
print(words.string_ptr_value(buf))
things = words.StringVector(5)
for i in range(0,5):
    things[i] = str(i)
px.modify_words(things)
for x in things:
    print(x)

mut = words.MutableString()
mut.assign('mutable')
print(mut.value())
px.modify_word(mut)
print(mut.value())
