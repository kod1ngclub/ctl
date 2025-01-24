class Mod:
    file        = ""
    includable  = False

    def init(self, f):
        self.file = f
        return self

    def include(self, allowance):
        self.includable = allowance
        return self

dep = [
    Mod().init("include/util/shared/bool.h").include(True),
    Mod().init("include/util/shared/str.h")
]

default = [
    Mod().init("include/default.h")
]

mod = [
    Mod().init("include/object/class.h"),
    Mod().init("include/object/interface.h"),
    Mod().init("include/object/record.h"),
    Mod().init("include/object/enum.h"),
    Mod().init("include/object/sealed.h"),

    Mod().init("include/util/nonable.h"),
    Mod().init("include/util/option.h"),
    Mod().init("include/util/tuple.h"),

    Mod().init("include/val/piv.h"),
]

ENDIF = "#endif"
def unguard(lines: list[str]):
    ifndefless = lines[2:]
    endifless = [line for line in ifndefless if not line.startswith(ENDIF)]

    return endifless

INCLUDE = "#include"
def uninclude(lines: list[str]):
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

print(out)
