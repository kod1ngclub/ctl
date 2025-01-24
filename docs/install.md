# Kod1ng C99 Template Library - install

You can install kctl in your project with following two ways

## Manually copying

- Copy entire files and add them to your project
- Maybe you can write makefile like this

```makefile
KCTL	= lib/kctl/object/class.h	\
		lib/kctl/object/interface.h	\
		lib/kctl/object/record.h	\
		lib/kctl/object/...			\
		...							\

some.o: some.c some.h $(KCTL)
	clang -c some.c        -o some.o
```

## Using amalgam

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
# this makes amalgam file (kctl.h)
```
