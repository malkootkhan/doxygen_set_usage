# Doxygen for docs generation    
## Install Doxygen:    

### On Linux:    
`sudo apt install doxygen`   
### On macOS (using Homebrew):      
`brew install doxygen`  

> Run the following command in your project directory to create a configuration file:   

`doxygen -g`   
This generates a Doxyfile with default settings. You will now need to edit it to fit your needs.   

--- 

### Configure the Doxyfile for C and C++:   

#### Open the Doxyfile and edit the following key configurations:   

- [x] Important Doxyfile Configuration Options   
- Project Settings:   
```
PROJECT_NAME = "Your Project Name"   
PROJECT_NUMBER = "1.0"
```   
**Explanation:** PROJECT_NAME is your project’s name, and PROJECT_NUMBER is the version.   

- Input and Output Directories:   
```
INPUT = .   # The directory with your source code (C, C++)   
OUTPUT_DIRECTORY = docs  # Directory where the generated documentation will go   
```  
**Explanation:** INPUT is the directory containing your C and C++ files. OUTPUT_DIRECTORY specifies where the generated docs will be saved.
- Supported File Types:
```
FILE_PATTERNS = *.c *.cpp *.h *.hpp
```
Explanation: This ensures that both C (*.c, *.h) and C++ (*.cpp, *.hpp) files are included in the documentation generation.
- Extract All Comments:
```
EXTRACT_ALL = YES
```  
Explanation: Doxygen will extract and document everything, even without specific Doxygen tags like @param.
- Optimize for C:
```
OPTIMIZE_OUTPUT_FOR_C = YES
```  
Explanation: This optimizes the documentation for both C and C++ code.
- Function Documentation:
```
EXTRACT_PRIVATE = YES   # Extract private functions (in C++) 
EXTRACT_STATIC = YES    # Include static functions (C/C++)
```  
Explanation: Use these to include private and static functions in the documentation.
- HTML Output:
```
GENERATE_HTML = YES
HTML_OUTPUT = html
```
Explanation: This enables HTML documentation output and specifies the folder where the HTML files will be stored.
Example Source Code (C and C++)
Here’s a small example showing both C and C++ functions with appropriate Doxygen comments.
--- 
# How to Generate Documentation
After configuring the Doxyfile and ensuring your comments are correctly formatted, run:
```
doxygen Doxyfile
```
Open the index.html in the docs/html folder to view the documentation in a web browser.

Brief Explanation of Key Doxygen Tags:
@file: Describes the file.
@brief: A short description of the function/class/struct.
@param: Describes function parameters.
@return: Describes the return value.
@class: Used to document C++ classes.
@struct: Used to document C structures.
## Conclusion:
This setup allows you to generate documentation for both C and C++ code, with minimal configuration. Ensure that your source files are properly documented using Doxygen comment styles (/** ... */), and adjust the Doxyfile as necessary for your project's specific needs.
