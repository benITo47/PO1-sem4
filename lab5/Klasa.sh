#!/bin/bash

echo "Enter class name"
read name

# Convert name to uppercase
uppercase_name=$(echo "$name" | tr '[:lower:]' '[:upper:]')

# Creating .cpp file 
cd src
touch "${name}.cpp"
echo "#include \"${name}.h\"
" >> "${name}.cpp"

# Creating .h file
cd ../include
touch "${name}.h"

echo "#ifndef ${uppercase_name}_H
#define ${uppercase_name}_H

class ${name} 
{
    public:

    private:
};

#endif" >> "${name}.h"
