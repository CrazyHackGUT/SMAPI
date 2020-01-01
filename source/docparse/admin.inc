{
  "functions": [
    {
      "name": "OnRebuildAdminCache",
      "docStart": 13337,
      "docEnd": 13465,
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
      "docStart": 13525,
      "docEnd": 13752,
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
      "docStart": 13820,
      "docEnd": 14165,
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
      "docStart": 14250,
      "docEnd": 14595,
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
      "docStart": 14681,
      "docEnd": 14866,
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
      "docStart": 14942,
      "docEnd": 15137,
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
      "docStart": 15198,
      "docEnd": 15367,
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
      "docStart": 15426,
      "docEnd": 15718,
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
      "docStart": 15797,
      "docEnd": 16088,
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
      "docStart": 16153,
      "docEnd": 16419,
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
      "docStart": 16852,
      "docEnd": 16996,
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
      "docStart": 17066,
      "docEnd": 17219,
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
      "docStart": 17271,
      "docEnd": 17555,
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
      "docStart": 17622,
      "docEnd": 17906,
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
      "docStart": 18016,
      "docEnd": 18395,
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
      "docStart": 18506,
      "docEnd": 18712,
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
      "docStart": 18771,
      "docEnd": 19107,
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
      "docStart": 19162,
      "docEnd": 19534,
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
      "docStart": 19608,
      "docEnd": 20083,
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
      "docStart": 20170,
      "docEnd": 20393,
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
      "docStart": 20466,
      "docEnd": 20739,
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
      "docStart": 20835,
      "docEnd": 21073,
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
      "docStart": 21136,
      "docEnd": 21472,
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
      "docStart": 21533,
      "docEnd": 21727,
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
      "docStart": 21775,
      "docEnd": 22353,
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
      "docStart": 22439,
      "docEnd": 22594,
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
      "docStart": 22664,
      "docEnd": 23040,
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
      "docStart": 23122,
      "docEnd": 23377,
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
      "docStart": 23460,
      "docEnd": 23699,
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
      "docStart": 23741,
      "docEnd": 24063,
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
      "docStart": 24136,
      "docEnd": 24390,
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
      "docStart": 24459,
      "docEnd": 24699,
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
      "docStart": 24771,
      "docEnd": 25050,
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
      "docStart": 25125,
      "docEnd": 25354,
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
      "docStart": 25423,
      "docEnd": 25641,
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
      "docStart": 25698,
      "docEnd": 25916,
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
      "docStart": 25971,
      "docEnd": 26218,
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
      "docStart": 26287,
      "docEnd": 27200,
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
      "docStart": 27264,
      "docEnd": 27500,
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
      "docStart": 27556,
      "docEnd": 27736,
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
      "docStart": 27802,
      "docEnd": 27947,
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
      "docStart": 28002,
      "docEnd": 28183,
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
      "docStart": 28245,
      "docEnd": 28375,
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
      "docStart": 28426,
      "docEnd": 28576,
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
      "docStart": 28659,
      "docEnd": 28872,
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
          "docStart": 6900,
          "docEnd": 7221,
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
          "docStart": 7288,
          "docEnd": 7711,
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
          "docStart": 7796,
          "docEnd": 7959,
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
          "docStart": 8024,
          "docEnd": 8238,
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
          "docStart": 8326,
          "docEnd": 8504,
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
          "docStart": 8559,
          "docEnd": 8836,
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
          "docStart": 8889,
          "docEnd": 9413,
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
          "docStart": 9491,
          "docEnd": 9585,
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
          "docStart": 9647,
          "docEnd": 9965,
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
          "docStart": 10039,
          "docEnd": 10878,
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
          "docStart": 10930,
          "docEnd": 10986,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "ImmunityLevel",
          "docStart": 11047,
          "docEnd": 11085,
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
          "docStart": 11206,
          "docEnd": 11384,
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
          "docStart": 11435,
          "docEnd": 11610,
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
          "docStart": 11675,
          "docEnd": 11809,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "GetGroupImmunity",
          "docStart": 11846,
          "docEnd": 12084,
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
          "docStart": 12142,
          "docEnd": 12243,
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
          "docStart": 12302,
          "docEnd": 12641,
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
          "docStart": 12745,
          "docEnd": 12988,
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
          "docStart": 13091,
          "docEnd": 13129,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "ImmunityLevel",
          "docStart": 13200,
          "docEnd": 13238,
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
      "docStart": 1635,
      "docEnd": 1681,
      "entries": [
        {
          "name": "Admin_Reservation",
          "docStart": 1727,
          "docEnd": 1748
        },
        {
          "name": "Admin_Generic",
          "docStart": 1775,
          "docEnd": 1806
        },
        {
          "name": "Admin_Kick",
          "docStart": 1833,
          "docEnd": 1858
        },
        {
          "name": "Admin_Ban",
          "docStart": 1885,
          "docEnd": 1909
        },
        {
          "name": "Admin_Unban",
          "docStart": 1936,
          "docEnd": 1962
        },
        {
          "name": "Admin_Slay",
          "docStart": 1989,
          "docEnd": 2026
        },
        {
          "name": "Admin_Changemap",
          "docStart": 2053,
          "docEnd": 2075
        },
        {
          "name": "Admin_Convars",
          "docStart": 2102,
          "docEnd": 2130
        },
        {
          "name": "Admin_Config",
          "docStart": 2157,
          "docEnd": 2185
        },
        {
          "name": "Admin_Chat",
          "docStart": 2212,
          "docEnd": 2243
        },
        {
          "name": "Admin_Vote",
          "docStart": 2270,
          "docEnd": 2301
        },
        {
          "name": "Admin_Password",
          "docStart": 2328,
          "docEnd": 2357
        },
        {
          "name": "Admin_RCON",
          "docStart": 2384,
          "docEnd": 2400
        },
        {
          "name": "Admin_Cheats",
          "docStart": 2427,
          "docEnd": 2472
        },
        {
          "name": "Admin_Root",
          "docStart": 2499,
          "docEnd": 2528
        },
        {
          "name": "Admin_Custom1",
          "docStart": 2555,
          "docEnd": 2585
        },
        {
          "name": "Admin_Custom2",
          "docStart": 2612,
          "docEnd": 2643
        },
        {
          "name": "Admin_Custom3",
          "docStart": 2670,
          "docEnd": 2700
        },
        {
          "name": "Admin_Custom4",
          "docStart": 2727,
          "docEnd": 2758
        },
        {
          "name": "Admin_Custom5",
          "docStart": 2785,
          "docEnd": 2815
        },
        {
          "name": "Admin_Custom6",
          "docStart": 2842,
          "docEnd": 2872
        }
      ]
    },
    {
      "name": "OverrideType",
      "docStart": 5595,
      "docEnd": 5630,
      "entries": [
        {
          "name": "Override_Command",
          "docStart": 5679,
          "docEnd": 5694
        },
        {
          "name": "Override_CommandGroup",
          "docStart": 5721,
          "docEnd": 5742
        }
      ]
    },
    {
      "name": "OverrideRule",
      "docStart": 5750,
      "docEnd": 5785,
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
      "docStart": 5855,
      "docEnd": 5891,
      "entries": [
        {
          "name": "Immunity_Default",
          "docStart": 5940,
          "docEnd": 5959
        },
        {
          "name": "Immunity_Global",
          "docStart": 5986,
          "docEnd": 6005
        }
      ]
    },
    {
      "name": "GroupId",
      "docStart": 6013,
      "docEnd": 6107,
      "entries": [
        {
          "name": "INVALID_GROUP_ID",
          "docStart": 6151,
          "docEnd": 6188
        }
      ]
    },
    {
      "name": "AdminId",
      "docStart": 6196,
      "docEnd": 6290,
      "entries": [
        {
          "name": "INVALID_ADMIN_ID",
          "docStart": 6334,
          "docEnd": 6371
        }
      ]
    },
    {
      "name": "AdmAccessMode",
      "docStart": 6379,
      "docEnd": 6432,
      "entries": [
        {
          "name": "Access_Real",
          "docStart": 6478,
          "docEnd": 6516
        },
        {
          "name": "Access_Effective",
          "docStart": 6539,
          "docEnd": 6584
        }
      ]
    },
    {
      "name": "AdminCachePart",
      "docStart": 6592,
      "docEnd": 6642,
      "entries": [
        {
          "name": "AdminCache_Overrides",
          "docStart": 6701,
          "docEnd": 6725
        },
        {
          "name": "AdminCache_Groups",
          "docStart": 6760,
          "docEnd": 6817
        },
        {
          "name": "AdminCache_Admins",
          "docStart": 6852,
          "docEnd": 6870
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}