# ctl - install

You can install ctl in your project with following two ways

## 📌 Manually copying

- Copy entire files and add them to your project
- Maybe you can write makefile like this

```makefile
CTL		= lib/ctl/object/class.h	\
		lib/ctl/object/interface.h	\
		lib/ctl/object/record.h	\
		lib/ctl/object/...			\
		...							\

some.o: some.c some.h $(CTL)
	clang -c some.c        -o some.o
```

## 📌 Using amalgam

If your disk volume is enough, you can use amalgam version.
Amalgam refers to a distribution technique where multiple header and source
files are combined into a single file.
This approach simplifies library-installing process, making them easier
to distribute and integrate.

- Providing all code in a single file for easier integration into projects.
- Reducing setup effort when using external libraries.
- Improving code readability and simplifying project maintenance.

You can make amalgam file with following commands

```bash
python3 make.py
# this makes amalgam file (ctl.h)
```
