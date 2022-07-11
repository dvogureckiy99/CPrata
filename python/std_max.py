#!/usr/bin/python3
import subprocess

standards = ['98','03','11','14','17']
gpp_barf_pattern = "error: unrecognized command line option ‘-std=c++{0}’"
clangpp_barf_pattern = "error: invalid value 'c++{0}'"

def has_standard(compiler, std_year, barf_pattern):
    std_opt = '-std=c++' + std_year
    try:
        subprocess.run([compiler,std_opt,'-x','c++','-E','-'],\
            check=True,input=b'',stdout=subprocess.PIPE,stderr=subprocess.PIPE)
    except subprocess.CalledProcessError as e:
        barf = barf_pattern.format(std_year)
        strerr = e.stderr.decode('utf8','strict')
        if barf in strerr:
            return False
        raise
    return True

def get_std_max(compiler,standards,barf_pattern):
    max_std = standards[0] if len(standards) else ''
    for std_year in standards:
        if not has_standard(compiler,std_year,barf_pattern):
            break
        max_std = 'c++' + std_year
    return max_std
