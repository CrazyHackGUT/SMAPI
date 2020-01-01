{
  "functions": [
    {
      "name": "GetFunctionByName",
      "docStart": 9096,
      "docEnd": 9482,
      "kind": "native",
      "returnType": "function",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "CreateGlobalForward",
      "docStart": 9556,
      "docEnd": 10177,
      "kind": "native",
      "returnType": "GlobalForward",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "ExecType",
          "name": "type",
          "decl": "ExecType type"
        },
        {
          "type": "ParamType...",
          "name": "...",
          "decl": "ParamType... ..."
        }
      ]
    },
    {
      "name": "CreateForward",
      "docStart": 10273,
      "docEnd": 10729,
      "kind": "native",
      "returnType": "PrivateForward",
      "arguments": [
        {
          "type": "ExecType",
          "name": "type",
          "decl": "ExecType type"
        },
        {
          "type": "ParamType...",
          "name": "...",
          "decl": "ParamType... ..."
        }
      ]
    },
    {
      "name": "GetForwardFunctionCount",
      "docStart": 10801,
      "docEnd": 11072,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "fwd",
          "decl": "Handle fwd"
        }
      ]
    },
    {
      "name": "AddToForward",
      "docStart": 11125,
      "docEnd": 11684,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "fwd",
          "decl": "Handle fwd"
        },
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        },
        {
          "type": "function",
          "name": "func",
          "decl": "function func"
        }
      ]
    },
    {
      "name": "RemoveFromForward",
      "docStart": 11757,
      "docEnd": 12397,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "fwd",
          "decl": "Handle fwd"
        },
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        },
        {
          "type": "function",
          "name": "func",
          "decl": "function func"
        }
      ]
    },
    {
      "name": "RemoveAllFromForward",
      "docStart": 12475,
      "docEnd": 13020,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "fwd",
          "decl": "Handle fwd"
        },
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        }
      ]
    },
    {
      "name": "Call_StartForward",
      "docStart": 13085,
      "docEnd": 13376,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "fwd",
          "decl": "Handle fwd"
        }
      ]
    },
    {
      "name": "Call_StartFunction",
      "docStart": 13424,
      "docEnd": 13840,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        },
        {
          "type": "function",
          "name": "func",
          "decl": "function func"
        }
      ]
    },
    {
      "name": "Call_PushCell",
      "docStart": 13907,
      "docEnd": 14130,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "Call_PushCellRef",
      "docStart": 14173,
      "docEnd": 14413,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "any&",
          "name": "value",
          "decl": "any& value"
        }
      ]
    },
    {
      "name": "Call_PushFloat",
      "docStart": 14460,
      "docEnd": 14694,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "Call_PushFloatRef",
      "docStart": 14740,
      "docEnd": 14991,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float&",
          "name": "value",
          "decl": "float& value"
        }
      ]
    },
    {
      "name": "Call_PushArray",
      "docStart": 15041,
      "docEnd": 15389,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const any[]",
          "name": "value",
          "decl": "const any[] value"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "Call_PushArrayEx",
      "docStart": 15451,
      "docEnd": 15864,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "any[]",
          "name": "value",
          "decl": "any[] value"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "int",
          "name": "cpflags",
          "decl": "int cpflags"
        }
      ]
    },
    {
      "name": "Call_PushNullVector",
      "docStart": 15935,
      "docEnd": 16144,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "Call_PushString",
      "docStart": 16184,
      "docEnd": 16495,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "Call_PushStringEx",
      "docStart": 16549,
      "docEnd": 17175,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "char[]",
          "name": "value",
          "decl": "char[] value"
        },
        {
          "type": "int",
          "name": "length",
          "decl": "int length"
        },
        {
          "type": "int",
          "name": "szflags",
          "decl": "int szflags"
        },
        {
          "type": "int",
          "name": "cpflags",
          "decl": "int cpflags"
        }
      ]
    },
    {
      "name": "Call_PushNullString",
      "docStart": 17263,
      "docEnd": 17472,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "Call_Finish",
      "docStart": 17512,
      "docEnd": 17863,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "any&",
          "name": "result",
          "decl": "any& result"
        }
      ]
    },
    {
      "name": "Call_Cancel",
      "docStart": 17907,
      "docEnd": 18101,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "CreateNative",
      "docStart": 18858,
      "docEnd": 19220,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "NativeCall",
          "name": "func",
          "decl": "NativeCall func"
        }
      ]
    },
    {
      "name": "ThrowNativeError",
      "docStart": 19287,
      "docEnd": 19516,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "error",
          "decl": "int error"
        },
        {
          "type": "const char[]",
          "name": "fmt",
          "decl": "const char[] fmt"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "GetNativeStringLength",
      "docStart": 19588,
      "docEnd": 20105,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "int&",
          "name": "length",
          "decl": "int& length"
        }
      ]
    },
    {
      "name": "GetNativeString",
      "docStart": 20168,
      "docEnd": 20698,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
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
        },
        {
          "type": "int&",
          "name": "bytes",
          "decl": "int& bytes"
        }
      ]
    },
    {
      "name": "SetNativeString",
      "docStart": 20786,
      "docEnd": 21409,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "bool",
          "name": "utf8",
          "decl": "bool utf8"
        },
        {
          "type": "int&",
          "name": "bytes",
          "decl": "int& bytes"
        }
      ]
    },
    {
      "name": "GetNativeCell",
      "docStart": 21519,
      "docEnd": 21782,
      "kind": "native",
      "returnType": "any",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        }
      ]
    },
    {
      "name": "GetNativeFunction",
      "docStart": 21824,
      "docEnd": 22124,
      "kind": "native",
      "returnType": "function",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        }
      ]
    },
    {
      "name": "GetNativeCellRef",
      "docStart": 22175,
      "docEnd": 22452,
      "kind": "native",
      "returnType": "any",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        }
      ]
    },
    {
      "name": "SetNativeCellRef",
      "docStart": 22497,
      "docEnd": 22794,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "GetNativeArray",
      "docStart": 22851,
      "docEnd": 23259,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "any[]",
          "name": "local",
          "decl": "any[] local"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "SetNativeArray",
      "docStart": 23325,
      "docEnd": 23750,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "const any[]",
          "name": "local",
          "decl": "const any[] local"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "IsNativeParamNullVector",
      "docStart": 23822,
      "docEnd": 24011,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        }
      ]
    },
    {
      "name": "IsNativeParamNullString",
      "docStart": 24064,
      "docEnd": 24253,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        }
      ]
    },
    {
      "name": "FormatNativeString",
      "docStart": 24306,
      "docEnd": 25143,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "out_param",
          "decl": "int out_param"
        },
        {
          "type": "int",
          "name": "fmt_param",
          "decl": "int fmt_param"
        },
        {
          "type": "int",
          "name": "vararg_param",
          "decl": "int vararg_param"
        },
        {
          "type": "int",
          "name": "out_len",
          "decl": "int out_len"
        },
        {
          "type": "int&",
          "name": "written",
          "decl": "int& written"
        },
        {
          "type": "char[]",
          "name": "out_string",
          "decl": "char[] out_string"
        },
        {
          "type": "const char[]",
          "name": "fmt_string",
          "decl": "const char[] fmt_string"
        }
      ]
    },
    {
      "name": "RequestFrame",
      "docStart": 25561,
      "docEnd": 25755,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "RequestFrameCallback",
          "name": "Function",
          "decl": "RequestFrameCallback Function"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "GlobalForward",
      "methods": [
        {
          "name": "GlobalForward",
          "docStart": 5871,
          "docEnd": 6513,
          "returnType": "GlobalForward",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "ExecType",
              "name": "type",
              "decl": "ExecType type"
            },
            {
              "type": "ParamType...",
              "name": "...",
              "decl": "ParamType... ..."
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "FunctionCount",
          "docStart": 6598,
          "docEnd": 6676,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "PrivateForward",
      "methods": [
        {
          "name": "PrivateForward",
          "docStart": 6788,
          "docEnd": 7243,
          "returnType": "PrivateForward",
          "arguments": [
            {
              "type": "ExecType",
              "name": "type",
              "decl": "ExecType type"
            },
            {
              "type": "ParamType...",
              "name": "...",
              "decl": "ParamType... ..."
            }
          ]
        },
        {
          "name": "AddFunction",
          "docStart": 7310,
          "docEnd": 7815,
          "returnType": "bool",
          "arguments": [
            {
              "type": "Handle",
              "name": "plugin",
              "decl": "Handle plugin"
            },
            {
              "type": "function",
              "name": "func",
              "decl": "function func"
            }
          ]
        },
        {
          "name": "RemoveFunction",
          "docStart": 7884,
          "docEnd": 8471,
          "returnType": "bool",
          "arguments": [
            {
              "type": "Handle",
              "name": "plugin",
              "decl": "Handle plugin"
            },
            {
              "type": "function",
              "name": "func",
              "decl": "function func"
            }
          ]
        },
        {
          "name": "RemoveAllFunctions",
          "docStart": 8543,
          "docEnd": 9033,
          "returnType": "int",
          "arguments": [
            {
              "type": "Handle",
              "name": "plugin",
              "decl": "Handle plugin"
            }
          ]
        }
      ],
      "properties": []
    }
  ],
  "enums": [
    {
      "name": "ParamType",
      "docStart": 1709,
      "docEnd": 1793,
      "entries": [
        {
          "name": "Param_Any",
          "docStart": 1867,
          "docEnd": 1902
        },
        {
          "name": "Param_Cell",
          "docStart": 1957,
          "docEnd": 1995
        },
        {
          "name": "Param_Float",
          "docStart": 2050,
          "docEnd": 2083
        },
        {
          "name": "Param_String",
          "docStart": 2138,
          "docEnd": 2172
        },
        {
          "name": "Param_Array",
          "docStart": 2227,
          "docEnd": 2260
        },
        {
          "name": "Param_VarArgs",
          "docStart": 2315,
          "docEnd": 2400
        },
        {
          "name": "Param_CellByRef",
          "docStart": 2455,
          "docEnd": 2501
        },
        {
          "name": "Param_FloatByRef",
          "docStart": 2556,
          "docEnd": 2603
        }
      ]
    },
    {
      "name": "ExecType",
      "docStart": 2611,
      "docEnd": 2680,
      "entries": [
        {
          "name": "ET_Ignore",
          "docStart": 2721,
          "docEnd": 2763
        },
        {
          "name": "ET_Single",
          "docStart": 2786,
          "docEnd": 2838
        },
        {
          "name": "ET_Event",
          "docStart": 2861,
          "docEnd": 2961
        },
        {
          "name": "ET_Hook",
          "docStart": 2984,
          "docEnd": 3079
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "NativeCall",
      "types": [
        {
          "type": "function int(Handle plugin, int numParams)",
          "docStart": 18157,
          "docEnd": 18453
        },
        {
          "type": "function any(Handle plugin, int numParams)",
          "docStart": 18505,
          "docEnd": 18804
        }
      ]
    },
    {
      "name": "RequestFrameCallback",
      "docStart": 25360,
      "docEnd": 25474,
      "types": [
        {
          "type": "function void()"
        },
        {
          "type": "function void(any data)"
        }
      ]
    }
  ],
  "typedefs": []
}