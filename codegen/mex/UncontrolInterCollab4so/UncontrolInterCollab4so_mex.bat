@echo off
call setEnv.bat
"C:\ProgramFiles\MATLAB\R2022b\toolbox\shared\coder\ninja\win64\ninja.exe" -t compdb cc cxx cudac > compile_commands.json
"C:\ProgramFiles\MATLAB\R2022b\toolbox\shared\coder\ninja\win64\ninja.exe" -v %*
