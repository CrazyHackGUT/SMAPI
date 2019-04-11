{
  "functions": [
    {
      "name": "GetFunctionByName",
      "docStart": 5386,
      "docEnd": 5727,
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
      "docStart": 5801,
      "docEnd": 6385,
      "kind": "native",
      "returnType": "Handle",
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
      "docStart": 6474,
      "docEnd": 6899,
      "kind": "native",
      "returnType": "Handle",
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
      "docStart": 6963,
      "docEnd": 7208,
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
      "docStart": 7261,
      "docEnd": 7768,
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
      "docStart": 7841,
      "docEnd": 8429,
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
      "docStart": 8507,
      "docEnd": 9006,
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
      "docStart": 9071,
      "docEnd": 9345,
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
      "docStart": 9393,
      "docEnd": 9773,
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
      "docStart": 9840,
      "docEnd": 10048,
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
      "docStart": 10091,
      "docEnd": 10316,
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
      "docStart": 10363,
      "docEnd": 10582,
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
      "docStart": 10628,
      "docEnd": 10864,
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
      "docStart": 10914,
      "docEnd": 11241,
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
      "docStart": 11303,
      "docEnd": 11676,
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
      "docStart": 11747,
      "docEnd": 11946,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "Call_PushString",
      "docStart": 11986,
      "docEnd": 12282,
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
      "docStart": 12336,
      "docEnd": 12891,
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
      "docStart": 12979,
      "docEnd": 13178,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "Call_Finish",
      "docStart": 13218,
      "docEnd": 13547,
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
      "docStart": 13591,
      "docEnd": 13777,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "CreateNative",
      "docStart": 14503,
      "docEnd": 14839,
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
      "docStart": 14906,
      "docEnd": 15116,
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
      "docStart": 15188,
      "docEnd": 15669,
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
      "docStart": 15732,
      "docEnd": 16222,
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
      "docStart": 16310,
      "docEnd": 16872,
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
      "docStart": 16982,
      "docEnd": 17221,
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
      "docStart": 17263,
      "docEnd": 17563,
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
      "docStart": 17614,
      "docEnd": 17867,
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
      "docStart": 17912,
      "docEnd": 18189,
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
      "docStart": 18246,
      "docEnd": 18619,
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
      "docStart": 18685,
      "docEnd": 19076,
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
      "docStart": 19148,
      "docEnd": 19324,
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
      "docStart": 19377,
      "docEnd": 19553,
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
      "docStart": 19606,
      "docEnd": 20413,
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
      "docStart": 20802,
      "docEnd": 20984,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "function void(any data)",
          "name": "Function",
          "decl": "function void(any data) Function"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "ParamType",
      "docStart": 1710,
      "docEnd": 1794,
      "entries": [
        {
          "name": "Param_Any",
          "docStart": 1839,
          "docEnd": 1874
        },
        {
          "name": "Param_Cell",
          "docStart": 1905,
          "docEnd": 1943
        },
        {
          "name": "Param_Float",
          "docStart": 1975,
          "docEnd": 2008
        },
        {
          "name": "Param_String",
          "docStart": 2054,
          "docEnd": 2088
        },
        {
          "name": "Param_Array",
          "docStart": 2134,
          "docEnd": 2167
        },
        {
          "name": "Param_VarArgs",
          "docStart": 2200,
          "docEnd": 2285
        },
        {
          "name": "Param_CellByRef",
          "docStart": 2334,
          "docEnd": 2380
        },
        {
          "name": "Param_FloatByRef",
          "docStart": 2429,
          "docEnd": 2476
        }
      ]
    },
    {
      "name": "ExecType",
      "docStart": 2484,
      "docEnd": 2553,
      "entries": [
        {
          "name": "ET_Ignore",
          "docStart": 2589,
          "docEnd": 2631
        },
        {
          "name": "ET_Single",
          "docStart": 2649,
          "docEnd": 2701
        },
        {
          "name": "ET_Event",
          "docStart": 2718,
          "docEnd": 2818
        },
        {
          "name": "ET_Hook",
          "docStart": 2835,
          "docEnd": 2930
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
          "docStart": 13833,
          "docEnd": 14115
        },
        {
          "type": "function any(Handle plugin, int numParams)",
          "docStart": 14167,
          "docEnd": 14449
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "RequestFrameCallback",
      "docStart": 20633,
      "docEnd": 20740,
      "type": "function void(any data)"
    }
  ]
}