#!/usr/bin/python3
def append_write(filename="", search_string=""  new_string=""):
    """ function that appends a string returns the number of characters """

    with open(filename, "a", encoding='utf-8') as f:
        return f.write(new_string)
