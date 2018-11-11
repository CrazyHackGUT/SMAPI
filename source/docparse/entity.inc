{
  "functions": [
    {
      "name": "GetMaxEntities",
      "docStart": 3550,
      "docEnd": 3814,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetEntityCount",
      "docStart": 3848,
      "docEnd": 4132,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "IsValidEntity",
      "docStart": 4166,
      "docEnd": 4390,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "IsValidEdict",
      "docStart": 4434,
      "docEnd": 4584,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        }
      ]
    },
    {
      "name": "IsEntNetworkable",
      "docStart": 4626,
      "docEnd": 4819,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "CreateEdict",
      "docStart": 4866,
      "docEnd": 4987,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "RemoveEdict",
      "docStart": 5018,
      "docEnd": 5141,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        }
      ]
    },
    {
      "name": "RemoveEntity",
      "docStart": 5182,
      "docEnd": 5304,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "GetEdictFlags",
      "docStart": 5347,
      "docEnd": 5538,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        }
      ]
    },
    {
      "name": "SetEdictFlags",
      "docStart": 5580,
      "docEnd": 5773,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetEdictClassname",
      "docStart": 5827,
      "docEnd": 6084,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        },
        {
          "type": "char[]",
          "name": "clsname",
          "decl": "char[] clsname"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetEntityNetClass",
      "docStart": 6162,
      "docEnd": 6571,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        },
        {
          "type": "char[]",
          "name": "clsname",
          "decl": "char[] clsname"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "ChangeEdictState",
      "docStart": 7686,
      "docEnd": 8098,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "edict",
          "decl": "int edict"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        }
      ]
    },
    {
      "name": "GetEntData",
      "docStart": 8160,
      "docEnd": 8523,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "SetEntData",
      "docStart": 8587,
      "docEnd": 8998,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntDataFloat",
      "docStart": 9098,
      "docEnd": 9386,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        }
      ]
    },
    {
      "name": "SetEntDataFloat",
      "docStart": 9445,
      "docEnd": 9780,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntDataEnt",
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        }
      ]
    },
    {
      "name": "SetEntDataEnt",
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "int",
          "name": "other",
          "decl": "int other"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntDataEnt2",
      "docStart": 11262,
      "docEnd": 11847,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        }
      ]
    },
    {
      "name": "SetEntDataEnt2",
      "docStart": 11903,
      "docEnd": 12471,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "int",
          "name": "other",
          "decl": "int other"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntDataVector",
      "docStart": 12563,
      "docEnd": 12966,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "SetEntDataVector",
      "docStart": 13039,
      "docEnd": 13490,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntDataString",
      "docStart": 13593,
      "docEnd": 13978,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "SetEntDataString",
      "docStart": 14063,
      "docEnd": 14495,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "FindSendPropOffs",
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cls",
          "decl": "const char[] cls"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "FindSendPropInfo",
      "docStart": 15405,
      "docEnd": 16174,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cls",
          "decl": "const char[] cls"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "PropFieldType&",
          "name": "type",
          "decl": "PropFieldType& type"
        },
        {
          "type": "int&",
          "name": "num_bits",
          "decl": "int& num_bits"
        },
        {
          "type": "int&",
          "name": "local_offset",
          "decl": "int& local_offset"
        }
      ]
    },
    {
      "name": "FindDataMapOffs",
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "PropFieldType&",
          "name": "type",
          "decl": "PropFieldType& type"
        },
        {
          "type": "int&",
          "name": "num_bits",
          "decl": "int& num_bits"
        }
      ]
    },
    {
      "name": "FindDataMapInfo",
      "docStart": 17090,
      "docEnd": 17684,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "PropFieldType&",
          "name": "type",
          "decl": "PropFieldType& type"
        },
        {
          "type": "int&",
          "name": "num_bits",
          "decl": "int& num_bits"
        },
        {
          "type": "int&",
          "name": "local_offset",
          "decl": "int& local_offset"
        }
      ]
    },
    {
      "name": "GetEntSendPropOffs",
      "docStart": 17869,
      "docEnd": 18211,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "ent",
          "decl": "int ent"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "bool",
          "name": "actual",
          "decl": "bool actual"
        }
      ]
    },
    {
      "name": "HasEntProp",
      "docStart": 18534,
      "docEnd": 18793,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "GetEntProp",
      "docStart": 19143,
      "docEnd": 19830,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "SetEntProp",
      "docStart": 19931,
      "docEnd": 20606,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GetEntPropFloat",
      "docStart": 20719,
      "docEnd": 21225,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "SetEntPropFloat",
      "docStart": 21321,
      "docEnd": 21802,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GetEntPropEnt",
      "docStart": 21910,
      "docEnd": 22507,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "SetEntPropEnt",
      "docStart": 22599,
      "docEnd": 23104,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "other",
          "decl": "int other"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GetEntPropVector",
      "docStart": 23208,
      "docEnd": 23778,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "SetEntPropVector",
      "docStart": 23888,
      "docEnd": 24434,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GetEntPropString",
      "docStart": 24550,
      "docEnd": 25028,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "SetEntPropString",
      "docStart": 25150,
      "docEnd": 25557,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GetEntPropArraySize",
      "docStart": 25673,
      "docEnd": 25996,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "PropType",
          "name": "type",
          "decl": "PropType type"
        },
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "GetEntDataArray",
      "docStart": 26079,
      "docEnd": 26436,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "int[]",
          "name": "array",
          "decl": "int[] array"
        },
        {
          "type": "int",
          "name": "arraySize",
          "decl": "int arraySize"
        },
        {
          "type": "int",
          "name": "dataSize",
          "decl": "int dataSize"
        }
      ]
    },
    {
      "name": "SetEntDataArray",
      "docStart": 26641,
      "docEnd": 27083,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "offset",
          "decl": "int offset"
        },
        {
          "type": "const int[]",
          "name": "array",
          "decl": "const int[] array"
        },
        {
          "type": "int",
          "name": "arraySize",
          "decl": "int arraySize"
        },
        {
          "type": "int",
          "name": "dataSize",
          "decl": "int dataSize"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GetEntityAddress",
      "docStart": 27338,
      "docEnd": 27493,
      "kind": "native",
      "returnType": "Address",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "GetEntityClassname",
      "docStart": 27543,
      "docEnd": 27902,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "char[]",
          "name": "clsname",
          "decl": "char[] clsname"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "PropType",
      "docStart": 1637,
      "docEnd": 1678,
      "entries": [
        {
          "name": "Prop_Send",
          "docStart": 1714,
          "docEnd": 1749
        },
        {
          "name": "Prop_Data",
          "docStart": 1767,
          "docEnd": 1818
        }
      ]
    },
    {
      "name": "PropFieldType",
      "entries": [
        {
          "name": "PropField_Unsupported",
          "docStart": 2711,
          "docEnd": 2743
        },
        {
          "name": "PropField_Integer",
          "docStart": 2767,
          "docEnd": 2809
        },
        {
          "name": "PropField_Float",
          "docStart": 2831,
          "docEnd": 2873
        },
        {
          "name": "PropField_Entity",
          "docStart": 2896,
          "docEnd": 2954
        },
        {
          "name": "PropField_Vector",
          "docStart": 2977,
          "docEnd": 3019
        },
        {
          "name": "PropField_String",
          "docStart": 3042,
          "docEnd": 3084
        },
        {
          "name": "PropField_String_T"
        },
        {
          "name": "PropField_Variant",
          "docStart": 3109,
          "docEnd": 3352
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}