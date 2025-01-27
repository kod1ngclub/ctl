import os;

# clear CLI
os.system('cls' if os.name == 'nt' else 'clear')

class Mod:
    file        = ""
    includable  = False

    def init(self, f):
        self.file = f

        print("Mod", f, "was added")
        return self

    def include(self, allowance):
        self.includable = allowance

        print("Mod", self.file, "set include-able")
        return self

print("==== Dep (base dependency)")
dep = [
    Mod().init("include/util/shared/bool.h").include(True),
    Mod().init("include/util/shared/str.h")
]

print()

print("==== Default (default modules)")
default = [
    Mod().init("include/default.h")
]

print()

print("==== Modules")
mod = [
    Mod().init("include/object/class.h"),
    Mod().init("include/object/interface.h"),
    Mod().init("include/object/record.h"),
    Mod().init("include/object/enumclass.h"),
    Mod().init("include/object/sealed.h"),

    Mod().init("include/util/nonable.h"),
    Mod().init("include/util/option.h"),
    Mod().init("include/util/tuple.h"),

    Mod().init("include/val/piv.h"),
]

ENDIF = "#endif"
def unguard(lines):
    ifndefless = lines[2:]
    endifless = [line for line in ifndefless if not line.startswith(ENDIF)]

    return endifless

INCLUDE = "#include"
def uninclude(lines):
    return [line for line in lines if not line.startswith(INCLUDE)]

succmods    = dep + default + mod
out         = ""

EMPTY       = ""
for mod in succmods:
    with open(mod.file, "r") as file:
        lines = file.readlines()

        lines = unguard(lines)
        if not mod.includable: lines = uninclude(lines)

        out += EMPTY.join(lines)

NEWLINE             = "\n"
FILEGUARD_IFNDEF    = "#ifndef KCTL" + NEWLINE
FILEGUARD_DEFINE    = "#define KCTL" + NEWLINE
FILEGUARD_ENDIF     = "#endif // KCTL" + NEWLINE

OUT_FILENAME = "ctl.h"
with open(OUT_FILENAME, "w") as file:
    file.write(FILEGUARD_IFNDEF)
    file.write(FILEGUARD_DEFINE)
    file.write(out)
    file.write(FILEGUARD_ENDIF)

print()

print("Write out to", OUT_FILENAME)
