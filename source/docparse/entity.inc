{
  "functions": [
    {
      "name": "GetMaxEntities",
      "docStart": 3855,
      "docEnd": 4129,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetEntityCount",
      "docStart": 4163,
      "docEnd": 4457,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "IsValidEntity",
      "docStart": 4491,
      "docEnd": 4731,
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
      "docStart": 4775,
      "docEnd": 4941,
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
      "docStart": 4983,
      "docEnd": 5192,
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
      "docStart": 5239,
      "docEnd": 5370,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "RemoveEdict",
      "docStart": 5401,
      "docEnd": 5541,
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
      "docStart": 5582,
      "docEnd": 5721,
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
      "docStart": 5764,
      "docEnd": 5982,
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
      "docStart": 6024,
      "docEnd": 6240,
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
      "docStart": 6294,
      "docEnd": 6575,
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
      "docStart": 6653,
      "docEnd": 7097,
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
      "docStart": 8212,
      "docEnd": 8663,
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
      "docStart": 8725,
      "docEnd": 9128,
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
      "docStart": 9192,
      "docEnd": 9641,
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
      "docStart": 9741,
      "docEnd": 10062,
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
      "docStart": 10121,
      "docEnd": 10487,
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
      "docStart": 12143,
      "docEnd": 12777,
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
      "docStart": 12833,
      "docEnd": 13432,
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
      "docStart": 13524,
      "docEnd": 13964,
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
      "docStart": 14037,
      "docEnd": 14527,
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
      "docStart": 14630,
      "docEnd": 15061,
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
      "docStart": 15146,
      "docEnd": 15626,
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
      "docStart": 16671,
      "docEnd": 17572,
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
      "docStart": 18663,
      "docEnd": 19340,
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
      "docStart": 19525,
      "docEnd": 19930,
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
      "docStart": 20243,
      "docEnd": 20543,
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
      "docStart": 20899,
      "docEnd": 21671,
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
      "docStart": 21772,
      "docEnd": 22528,
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
      "docStart": 22641,
      "docEnd": 23193,
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
      "docStart": 23289,
      "docEnd": 23812,
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
      "docStart": 23920,
      "docEnd": 24595,
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
      "docStart": 24687,
      "docEnd": 25234,
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
      "docStart": 25338,
      "docEnd": 25968,
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
      "docStart": 26078,
      "docEnd": 26684,
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
      "docStart": 26800,
      "docEnd": 27336,
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
      "docStart": 27458,
      "docEnd": 27917,
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
      "docStart": 28033,
      "docEnd": 28397,
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
      "docStart": 28480,
      "docEnd": 28873,
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
      "docStart": 29090,
      "docEnd": 29570,
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
      "docStart": 29829,
      "docEnd": 30011,
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
      "docStart": 30061,
      "docEnd": 30443,
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
          "docStart": 1715,
          "docEnd": 1750
        },
        {
          "name": "Prop_Data",
          "docStart": 1769,
          "docEnd": 1820
        }
      ]
    },
    {
      "name": "PropFieldType",
      "entries": [
        {
          "name": "PropField_Unsupported",
          "docStart": 2874,
          "docEnd": 2906
        },
        {
          "name": "PropField_Integer",
          "docStart": 2937,
          "docEnd": 2979
        },
        {
          "name": "PropField_Float",
          "docStart": 3010,
          "docEnd": 3052
        },
        {
          "name": "PropField_Entity",
          "docStart": 3083,
          "docEnd": 3141
        },
        {
          "name": "PropField_Vector",
          "docStart": 3172,
          "docEnd": 3214
        },
        {
          "name": "PropField_String",
          "docStart": 3245,
          "docEnd": 3287
        },
        {
          "name": "PropField_String_T"
        },
        {
          "name": "PropField_Variant",
          "docStart": 3318,
          "docEnd": 3623
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}