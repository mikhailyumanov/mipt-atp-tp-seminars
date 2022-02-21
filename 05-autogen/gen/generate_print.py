#!/usr/bin/python

import sys
import json

data_path = sys.argv[1]
header_path = sys.argv[2]
src_path = sys.argv[3]


#################################################
### Get data

with open(data_path) as f:
    data = json.load(f)


#################################################
### Generate .hpp

header_template = """#pragma once

#include <string>

"""

for i in data:
    header_template += f"""void print_{i}(std::string s);

"""

with open(header_path, 'w') as f:
    f.write(header_template)


#################################################
### Generate .cpp

source_template = """#include <iostream>

"""

for i in data:
    source_template += """void print_%s(std::string s) {
  std::cout << "%s" << s << std::endl;
}

""" % (i, data[i])

with open(src_path, 'w') as f:
    f.write(source_template)
