Space for testing using boost::python to wrap C++ (as a simpler test case than going directly to katydid).

# Notes:

- There are [useful docs](https://wiki.python.org/moin/boost.python) for writing the wrapper code blocks and defining the module.  
- As far as I can tell, the module has to be done in a single file, we may be able to put some scripts into cmake to generate that file from a template but this is a higher order concern.  
- Currently classes and functions are able to be wrapped, but I ran into issues with methods which return pointers, not sure what to do with this just yet.  
