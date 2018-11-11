{
  "functions": [
    {
      "name": "OnRebuildAdminCache",
      "docStart": 12712,
      "docEnd": 12833,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "AdminCachePart",
          "name": "part",
          "decl": "AdminCachePart part"
        }
      ]
    },
    {
      "name": "DumpAdminCache",
      "docStart": 12893,
      "docEnd": 13108,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AdminCachePart",
          "name": "part",
          "decl": "AdminCachePart part"
        },
        {
          "type": "bool",
          "name": "rebuild",
          "decl": "bool rebuild"
        }
      ]
    },
    {
      "name": "AddCommandOverride",
      "docStart": 13176,
      "docEnd": 13500,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "OverrideType",
          "name": "type",
          "decl": "OverrideType type"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetCommandOverride",
      "docStart": 13585,
      "docEnd": 13899,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "OverrideType",
          "name": "type",
          "decl": "OverrideType type"
        },
        {
          "type": "int&",
          "name": "flags",
          "decl": "int& flags"
        }
      ]
    },
    {
      "name": "UnsetCommandOverride",
      "docStart": 13985,
      "docEnd": 14155,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "OverrideType",
          "name": "type",
          "decl": "OverrideType type"
        }
      ]
    },
    {
      "name": "CreateAdmGroup",
      "docStart": 14231,
      "docEnd": 14413,
      "kind": "native",
      "returnType": "GroupId",
      "arguments": [
        {
          "type": "const char[]",
          "name": "group_name",
          "decl": "const char[] group_name"
        }
      ]
    },
    {
      "name": "FindAdmGroup",
      "docStart": 14474,
      "docEnd": 14630,
      "kind": "native",
      "returnType": "GroupId",
      "arguments": [
        {
          "type": "const char[]",
          "name": "group_name",
          "decl": "const char[] group_name"
        }
      ]
    },
    {
      "name": "SetAdmGroupAddFlag",
      "docStart": 14689,
      "docEnd": 14960,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        },
        {
          "type": "bool",
          "name": "enabled",
          "decl": "bool enabled"
        }
      ]
    },
    {
      "name": "GetAdmGroupAddFlag",
      "docStart": 15039,
      "docEnd": 15304,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        }
      ]
    },
    {
      "name": "GetAdmGroupAddFlags",
      "docStart": 15369,
      "docEnd": 15616,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        }
      ]
    },
    {
      "name": "SetAdmGroupImmunity",
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "ImmunityType",
          "name": "type",
          "decl": "ImmunityType type"
        },
        {
          "type": "bool",
          "name": "enabled",
          "decl": "bool enabled"
        }
      ]
    },
    {
      "name": "GetAdmGroupImmunity",
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "ImmunityType",
          "name": "type",
          "decl": "ImmunityType type"
        }
      ]
    },
    {
      "name": "SetAdmGroupImmuneFrom",
      "docStart": 16035,
      "docEnd": 16166,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "GroupId",
          "name": "other_id",
          "decl": "GroupId other_id"
        }
      ]
    },
    {
      "name": "GetAdmGroupImmuneCount",
      "docStart": 16236,
      "docEnd": 16370,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        }
      ]
    },
    {
      "name": "GetAdmGroupImmuneFrom",
      "docStart": 16422,
      "docEnd": 16681,
      "kind": "native",
      "returnType": "GroupId",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "int",
          "name": "number",
          "decl": "int number"
        }
      ]
    },
    {
      "name": "AddAdmGroupCmdOverride",
      "docStart": 16749,
      "docEnd": 17003,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "OverrideType",
          "name": "type",
          "decl": "OverrideType type"
        },
        {
          "type": "OverrideRule",
          "name": "rule",
          "decl": "OverrideRule rule"
        }
      ]
    },
    {
      "name": "GetAdmGroupCmdOverride",
      "docStart": 17113,
      "docEnd": 17452,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "GroupId",
          "name": "id",
          "decl": "GroupId id"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "OverrideType",
          "name": "type",
          "decl": "OverrideType type"
        },
        {
          "type": "OverrideRule&",
          "name": "rule",
          "decl": "OverrideRule& rule"
        }
      ]
    },
    {
      "name": "RegisterAuthIdentType",
      "docStart": 17563,
      "docEnd": 17762,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "CreateAdmin",
      "docStart": 17821,
      "docEnd": 18015,
      "kind": "native",
      "returnType": "AdminId",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "GetAdminUsername",
      "docStart": 18070,
      "docEnd": 18413,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "BindAdminIdentity",
      "docStart": 18487,
      "docEnd": 18914,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "const char[]",
          "name": "auth",
          "decl": "const char[] auth"
        },
        {
          "type": "const char[]",
          "name": "ident",
          "decl": "const char[] ident"
        }
      ]
    },
    {
      "name": "SetAdminFlag",
      "docStart": 19001,
      "docEnd": 19203,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        },
        {
          "type": "bool",
          "name": "enabled",
          "decl": "bool enabled"
        }
      ]
    },
    {
      "name": "GetAdminFlag",
      "docStart": 19276,
      "docEnd": 19516,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        },
        {
          "type": "AdmAccessMode",
          "name": "mode",
          "decl": "AdmAccessMode mode"
        }
      ]
    },
    {
      "name": "GetAdminFlags",
      "docStart": 19612,
      "docEnd": 19824,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "AdmAccessMode",
          "name": "mode",
          "decl": "AdmAccessMode mode"
        }
      ]
    },
    {
      "name": "AdminInheritGroup",
      "docStart": 19887,
      "docEnd": 20197,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "GroupId",
          "name": "gid",
          "decl": "GroupId gid"
        }
      ]
    },
    {
      "name": "GetAdminGroupCount",
      "docStart": 20258,
      "docEnd": 20434,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        }
      ]
    },
    {
      "name": "GetAdminGroup",
      "docStart": 20482,
      "docEnd": 20983,
      "kind": "native",
      "returnType": "GroupId",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SetAdminPassword",
      "docStart": 21069,
      "docEnd": 21211,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "const char[]",
          "name": "password",
          "decl": "const char[] password"
        }
      ]
    },
    {
      "name": "GetAdminPassword",
      "docStart": 21281,
      "docEnd": 21614,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "FindAdminByIdentity",
      "docStart": 21696,
      "docEnd": 21930,
      "kind": "native",
      "returnType": "AdminId",
      "arguments": [
        {
          "type": "const char[]",
          "name": "auth",
          "decl": "const char[] auth"
        },
        {
          "type": "const char[]",
          "name": "identity",
          "decl": "const char[] identity"
        }
      ]
    },
    {
      "name": "RemoveAdmin",
      "docStart": 22013,
      "docEnd": 22233,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        }
      ]
    },
    {
      "name": "FlagBitsToBitArray",
      "docStart": 22275,
      "docEnd": 22569,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "bits",
          "decl": "int bits"
        },
        {
          "type": "bool[]",
          "name": "array",
          "decl": "bool[] array"
        },
        {
          "type": "int",
          "name": "maxSize",
          "decl": "int maxSize"
        }
      ]
    },
    {
      "name": "FlagBitArrayToBits",
      "docStart": 22642,
      "docEnd": 22875,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const bool[]",
          "name": "array",
          "decl": "const bool[] array"
        },
        {
          "type": "int",
          "name": "maxSize",
          "decl": "int maxSize"
        }
      ]
    },
    {
      "name": "FlagArrayToBits",
      "docStart": 22944,
      "docEnd": 23164,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const AdminFlag[]",
          "name": "array",
          "decl": "const AdminFlag[] array"
        },
        {
          "type": "int",
          "name": "numFlags",
          "decl": "int numFlags"
        }
      ]
    },
    {
      "name": "FlagBitsToArray",
      "docStart": 23236,
      "docEnd": 23487,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "bits",
          "decl": "int bits"
        },
        {
          "type": "AdminFlag[]",
          "name": "array",
          "decl": "AdminFlag[] array"
        },
        {
          "type": "int",
          "name": "maxSize",
          "decl": "int maxSize"
        }
      ]
    },
    {
      "name": "FindFlagByName",
      "docStart": 23562,
      "docEnd": 23767,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "AdminFlag&",
          "name": "flag",
          "decl": "AdminFlag& flag"
        }
      ]
    },
    {
      "name": "FindFlagByChar",
      "docStart": 23836,
      "docEnd": 24028,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "c",
          "decl": "int c"
        },
        {
          "type": "AdminFlag&",
          "name": "flag",
          "decl": "AdminFlag& flag"
        }
      ]
    },
    {
      "name": "FindFlagChar",
      "docStart": 24085,
      "docEnd": 24324,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        },
        {
          "type": "int&",
          "name": "c",
          "decl": "int& c"
        }
      ]
    },
    {
      "name": "ReadFlagString",
      "docStart": 24379,
      "docEnd": 24606,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "flags",
          "decl": "const char[] flags"
        },
        {
          "type": "int&",
          "name": "numchars",
          "decl": "int& numchars"
        }
      ]
    },
    {
      "name": "CanAdminTarget",
      "docStart": 24675,
      "docEnd": 25567,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "AdminId",
          "name": "admin",
          "decl": "AdminId admin"
        },
        {
          "type": "AdminId",
          "name": "target",
          "decl": "AdminId target"
        }
      ]
    },
    {
      "name": "CreateAuthMethod",
      "docStart": 25631,
      "docEnd": 25851,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "method",
          "decl": "const char[] method"
        }
      ]
    },
    {
      "name": "SetAdmGroupImmunityLevel",
      "docStart": 25907,
      "docEnd": 26063,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "GroupId",
          "name": "gid",
          "decl": "GroupId gid"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        }
      ]
    },
    {
      "name": "GetAdmGroupImmunityLevel",
      "docStart": 26129,
      "docEnd": 26256,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "GroupId",
          "name": "gid",
          "decl": "GroupId gid"
        }
      ]
    },
    {
      "name": "SetAdminImmunityLevel",
      "docStart": 26311,
      "docEnd": 26467,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        }
      ]
    },
    {
      "name": "GetAdminImmunityLevel",
      "docStart": 26529,
      "docEnd": 26640,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        }
      ]
    },
    {
      "name": "FlagToBit",
      "docStart": 26691,
      "docEnd": 26825,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "AdminFlag",
          "name": "flag",
          "decl": "AdminFlag flag"
        }
      ]
    },
    {
      "name": "BitToFlag",
      "docStart": 26908,
      "docEnd": 27096,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "bit",
          "decl": "int bit"
        },
        {
          "type": "AdminFlag&",
          "name": "flag",
          "decl": "AdminFlag& flag"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "AdminId",
      "methods": [
        {
          "name": "GetUsername",
          "docStart": 6388,
          "docEnd": 6709,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "name",
              "decl": "char[] name"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "BindIdentity",
          "docStart": 6776,
          "docEnd": 7199,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "authMethod",
              "decl": "const char[] authMethod"
            },
            {
              "type": "const char[]",
              "name": "ident",
              "decl": "const char[] ident"
            }
          ]
        },
        {
          "name": "SetFlag",
          "docStart": 7284,
          "docEnd": 7447,
          "returnType": "void",
          "arguments": [
            {
              "type": "AdminFlag",
              "name": "flag",
              "decl": "AdminFlag flag"
            },
            {
              "type": "bool",
              "name": "enabled",
              "decl": "bool enabled"
            }
          ]
        },
        {
          "name": "HasFlag",
          "docStart": 7512,
          "docEnd": 7726,
          "returnType": "bool",
          "arguments": [
            {
              "type": "AdminFlag",
              "name": "flag",
              "decl": "AdminFlag flag"
            },
            {
              "type": "AdmAccessMode",
              "name": "mode",
              "decl": "AdmAccessMode mode"
            }
          ]
        },
        {
          "name": "GetFlags",
          "docStart": 7814,
          "docEnd": 7992,
          "returnType": "int",
          "arguments": [
            {
              "type": "AdmAccessMode",
              "name": "mode",
              "decl": "AdmAccessMode mode"
            }
          ]
        },
        {
          "name": "InheritGroup",
          "docStart": 8047,
          "docEnd": 8324,
          "returnType": "bool",
          "arguments": [
            {
              "type": "GroupId",
              "name": "gid",
              "decl": "GroupId gid"
            }
          ]
        },
        {
          "name": "GetGroup",
          "docStart": 8377,
          "docEnd": 8901,
          "returnType": "GroupId",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "char[]",
              "name": "name",
              "decl": "char[] name"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "SetPassword",
          "docStart": 8979,
          "docEnd": 9073,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "password",
              "decl": "const char[] password"
            }
          ]
        },
        {
          "name": "GetPassword",
          "docStart": 9135,
          "docEnd": 9453,
          "returnType": "bool",
          "arguments": [
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "CanTarget",
          "docStart": 9527,
          "docEnd": 10366,
          "returnType": "bool",
          "arguments": [
            {
              "type": "AdminId",
              "name": "other",
              "decl": "AdminId other"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "GroupCount",
          "docStart": 10418,
          "docEnd": 10474,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "ImmunityLevel",
          "docStart": 10535,
          "docEnd": 10573,
          "type": "int",
          "getter": true,
          "setter": true
        }
      ]
    },
    {
      "name": "GroupId",
      "methods": [
        {
          "name": "HasFlag",
          "docStart": 10694,
          "docEnd": 10855,
          "returnType": "bool",
          "arguments": [
            {
              "type": "AdminFlag",
              "name": "flag",
              "decl": "AdminFlag flag"
            }
          ]
        },
        {
          "name": "SetFlag",
          "docStart": 10906,
          "docEnd": 11069,
          "returnType": "void",
          "arguments": [
            {
              "type": "AdminFlag",
              "name": "flag",
              "decl": "AdminFlag flag"
            },
            {
              "type": "bool",
              "name": "enabled",
              "decl": "bool enabled"
            }
          ]
        },
        {
          "name": "GetFlags",
          "docStart": 11134,
          "docEnd": 11258,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "GetGroupImmunity",
          "docStart": 11295,
          "docEnd": 11517,
          "returnType": "GroupId",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "AddGroupImmunity",
          "docStart": 11575,
          "docEnd": 11670,
          "returnType": "void",
          "arguments": [
            {
              "type": "GroupId",
              "name": "other",
              "decl": "GroupId other"
            }
          ]
        },
        {
          "name": "GetCommandOverride",
          "docStart": 11729,
          "docEnd": 12037,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "OverrideType",
              "name": "type",
              "decl": "OverrideType type"
            },
            {
              "type": "OverrideRule&",
              "name": "rule",
              "decl": "OverrideRule& rule"
            }
          ]
        },
        {
          "name": "AddCommandOverride",
          "docStart": 12141,
          "docEnd": 12363,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "OverrideType",
              "name": "type",
              "decl": "OverrideType type"
            },
            {
              "type": "OverrideRule",
              "name": "rule",
              "decl": "OverrideRule rule"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "GroupImmunitiesCount",
          "docStart": 12466,
          "docEnd": 12504,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "ImmunityLevel",
          "docStart": 12575,
          "docEnd": 12613,
          "type": "int",
          "getter": true,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "AdminFlag",
      "docStart": 1637,
      "docEnd": 1683,
      "entries": [
        {
          "name": "Admin_Reservation",
          "docStart": 1728,
          "docEnd": 1749
        },
        {
          "name": "Admin_Generic",
          "docStart": 1769,
          "docEnd": 1800
        },
        {
          "name": "Admin_Kick",
          "docStart": 1818,
          "docEnd": 1843
        },
        {
          "name": "Admin_Ban",
          "docStart": 1860,
          "docEnd": 1884
        },
        {
          "name": "Admin_Unban",
          "docStart": 1902,
          "docEnd": 1928
        },
        {
          "name": "Admin_Slay",
          "docStart": 1946,
          "docEnd": 1983
        },
        {
          "name": "Admin_Changemap",
          "docStart": 2004,
          "docEnd": 2026
        },
        {
          "name": "Admin_Convars",
          "docStart": 2046,
          "docEnd": 2074
        },
        {
          "name": "Admin_Config",
          "docStart": 2093,
          "docEnd": 2121
        },
        {
          "name": "Admin_Chat",
          "docStart": 2139,
          "docEnd": 2170
        },
        {
          "name": "Admin_Vote",
          "docStart": 2188,
          "docEnd": 2219
        },
        {
          "name": "Admin_Password",
          "docStart": 2240,
          "docEnd": 2269
        },
        {
          "name": "Admin_RCON",
          "docStart": 2287,
          "docEnd": 2303
        },
        {
          "name": "Admin_Cheats",
          "docStart": 2322,
          "docEnd": 2367
        },
        {
          "name": "Admin_Root",
          "docStart": 2385,
          "docEnd": 2414
        },
        {
          "name": "Admin_Custom1",
          "docStart": 2434,
          "docEnd": 2464
        },
        {
          "name": "Admin_Custom2",
          "docStart": 2484,
          "docEnd": 2515
        },
        {
          "name": "Admin_Custom3",
          "docStart": 2535,
          "docEnd": 2565
        },
        {
          "name": "Admin_Custom4",
          "docStart": 2585,
          "docEnd": 2616
        },
        {
          "name": "Admin_Custom5",
          "docStart": 2636,
          "docEnd": 2666
        },
        {
          "name": "Admin_Custom6",
          "docStart": 2686,
          "docEnd": 2728
        }
      ]
    },
    {
      "name": "OverrideType",
      "docStart": 5120,
      "docEnd": 5155,
      "entries": [
        {
          "name": "Override_Command",
          "docStart": 5202,
          "docEnd": 5217
        },
        {
          "name": "Override_CommandGroup",
          "docStart": 5243,
          "docEnd": 5264
        }
      ]
    },
    {
      "name": "OverrideRule",
      "docStart": 5272,
      "docEnd": 5307,
      "entries": [
        {
          "name": "Command_Deny"
        },
        {
          "name": "Command_Allow"
        }
      ]
    },
    {
      "name": "ImmunityType",
      "docStart": 5378,
      "docEnd": 5414,
      "entries": [
        {
          "name": "Immunity_Default",
          "docStart": 5461,
          "docEnd": 5480
        },
        {
          "name": "Immunity_Global",
          "docStart": 5501,
          "docEnd": 5520
        }
      ]
    },
    {
      "name": "GroupId",
      "docStart": 5528,
      "docEnd": 5623,
      "entries": [
        {
          "name": "INVALID_GROUP_ID",
          "docStart": 5666,
          "docEnd": 5703
        }
      ]
    },
    {
      "name": "AdminId",
      "docStart": 5711,
      "docEnd": 5806,
      "entries": [
        {
          "name": "INVALID_ADMIN_ID",
          "docStart": 5849,
          "docEnd": 5886
        }
      ]
    },
    {
      "name": "AdmAccessMode",
      "docStart": 5894,
      "docEnd": 5947,
      "entries": [
        {
          "name": "Access_Real",
          "docStart": 5987,
          "docEnd": 6025
        },
        {
          "name": "Access_Effective",
          "docStart": 6046,
          "docEnd": 6091
        }
      ]
    },
    {
      "name": "AdminCachePart",
      "docStart": 6099,
      "docEnd": 6149,
      "entries": [
        {
          "name": "AdminCache_Overrides",
          "docStart": 6203,
          "docEnd": 6227
        },
        {
          "name": "AdminCache_Groups",
          "docStart": 6255,
          "docEnd": 6312
        },
        {
          "name": "AdminCache_Admins",
          "docStart": 6340,
          "docEnd": 6358
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}