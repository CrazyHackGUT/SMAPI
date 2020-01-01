{
  "functions": [
    {
      "name": "BuildPath",
      "docStart": 9994,
      "docEnd": 10528,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "PathType",
          "name": "type",
          "decl": "PathType type"
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
      "name": "OpenDirectory",
      "docStart": 10627,
      "docEnd": 11364,
      "kind": "native",
      "returnType": "DirectoryListing",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "ReadDirEntry",
      "docStart": 11487,
      "docEnd": 12128,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "dir",
          "decl": "Handle dir"
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
          "type": "FileType&",
          "name": "type",
          "decl": "FileType& type"
        }
      ]
    },
    {
      "name": "OpenFile",
      "docStart": 12234,
      "docEnd": 14094,
      "kind": "native",
      "returnType": "File",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        },
        {
          "type": "const char[]",
          "name": "mode",
          "decl": "const char[] mode"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "DeleteFile",
      "docStart": 14219,
      "docEnd": 14786,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "ReadFileLine",
      "docStart": 14908,
      "docEnd": 15172,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
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
      "name": "ReadFile",
      "docStart": 15246,
      "docEnd": 15647,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "int[]",
          "name": "items",
          "decl": "int[] items"
        },
        {
          "type": "int",
          "name": "num_items",
          "decl": "int num_items"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "ReadFileString",
      "docStart": 15724,
      "docEnd": 16518,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "max_size",
          "decl": "int max_size"
        },
        {
          "type": "int",
          "name": "read_count",
          "decl": "int read_count"
        }
      ]
    },
    {
      "name": "WriteFile",
      "docStart": 16611,
      "docEnd": 17283,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "const int[]",
          "name": "items",
          "decl": "const int[] items"
        },
        {
          "type": "int",
          "name": "num_items",
          "decl": "int num_items"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "WriteFileString",
      "docStart": 17368,
      "docEnd": 17677,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "bool",
          "name": "term",
          "decl": "bool term"
        }
      ]
    },
    {
      "name": "WriteFileLine",
      "docStart": 17756,
      "docEnd": 18099,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "ReadFileCell",
      "docStart": 18174,
      "docEnd": 18568,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "int&",
          "name": "data",
          "decl": "int& data"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "WriteFileCell",
      "docStart": 18760,
      "docEnd": 19327,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "int",
          "name": "data",
          "decl": "int data"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "IsEndOfFile",
      "docStart": 19475,
      "docEnd": 19700,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "file",
          "decl": "Handle file"
        }
      ]
    },
    {
      "name": "FileSeek",
      "docStart": 19743,
      "docEnd": 20081,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "file",
          "decl": "Handle file"
        },
        {
          "type": "int",
          "name": "position",
          "decl": "int position"
        },
        {
          "type": "int",
          "name": "where",
          "decl": "int where"
        }
      ]
    },
    {
      "name": "FilePosition",
      "docStart": 20146,
      "docEnd": 20346,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "file",
          "decl": "Handle file"
        }
      ]
    },
    {
      "name": "FileExists",
      "docStart": 20389,
      "docEnd": 20933,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "RenameFile",
      "docStart": 21041,
      "docEnd": 21596,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "newpath",
          "decl": "const char[] newpath"
        },
        {
          "type": "const char[]",
          "name": "oldpath",
          "decl": "const char[] oldpath"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "DirExists",
      "docStart": 21743,
      "docEnd": 22302,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "FileSize",
      "docStart": 22409,
      "docEnd": 22956,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "FlushFile",
      "docStart": 23061,
      "docEnd": 23351,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "file",
          "decl": "Handle file"
        }
      ]
    },
    {
      "name": "RemoveDir",
      "docStart": 23392,
      "docEnd": 23629,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        }
      ]
    },
    {
      "name": "CreateDirectory",
      "docStart": 24212,
      "docEnd": 24922,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "int",
          "name": "mode",
          "decl": "int mode"
        },
        {
          "type": "bool",
          "name": "use_valve_fs",
          "decl": "bool use_valve_fs"
        },
        {
          "type": "const char[]",
          "name": "valve_path_id",
          "decl": "const char[] valve_path_id"
        }
      ]
    },
    {
      "name": "SetFilePermissions",
      "docStart": 25059,
      "docEnd": 25265,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "path",
          "decl": "const char[] path"
        },
        {
          "type": "int",
          "name": "mode",
          "decl": "int mode"
        }
      ]
    },
    {
      "name": "GetFileTime",
      "docStart": 25331,
      "docEnd": 25520,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        },
        {
          "type": "FileTimeMode",
          "name": "tmode",
          "decl": "FileTimeMode tmode"
        }
      ]
    },
    {
      "name": "LogToOpenFile",
      "docStart": 25588,
      "docEnd": 25890,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "const char[]",
          "name": "message",
          "decl": "const char[] message"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "LogToOpenFileEx",
      "docStart": 25966,
      "docEnd": 26270,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "const char[]",
          "name": "message",
          "decl": "const char[] message"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "DirectoryListing",
      "docStart": 3138,
      "docEnd": 3265,
      "methods": [
        {
          "name": "GetNext",
          "docStart": 3308,
          "docEnd": 3771,
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
            },
            {
              "type": "FileType&",
              "name": "type",
              "decl": "FileType& type"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "File",
      "docStart": 3872,
      "docEnd": 4076,
      "methods": [
        {
          "name": "Close",
          "docStart": 4107,
          "docEnd": 4183,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "ReadLine",
          "docStart": 4238,
          "docEnd": 4460,
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
          "name": "Read",
          "docStart": 4526,
          "docEnd": 4888,
          "returnType": "int",
          "arguments": [
            {
              "type": "int[]",
              "name": "items",
              "decl": "int[] items"
            },
            {
              "type": "int",
              "name": "num_items",
              "decl": "int num_items"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "ReadString",
          "docStart": 4957,
          "docEnd": 5708,
          "returnType": "int",
          "arguments": [
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "max_size",
              "decl": "int max_size"
            },
            {
              "type": "int",
              "name": "read_count",
              "decl": "int read_count"
            }
          ]
        },
        {
          "name": "Write",
          "docStart": 5793,
          "docEnd": 6394,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const int[]",
              "name": "items",
              "decl": "const int[] items"
            },
            {
              "type": "int",
              "name": "num_items",
              "decl": "int num_items"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "WriteString",
          "docStart": 6471,
          "docEnd": 6694,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "buffer",
              "decl": "const char[] buffer"
            },
            {
              "type": "bool",
              "name": "term",
              "decl": "bool term"
            }
          ]
        },
        {
          "name": "WriteLine",
          "docStart": 6765,
          "docEnd": 7070,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "format",
              "decl": "const char[] format"
            },
            {
              "type": "any...",
              "name": "...",
              "decl": "any... ..."
            }
          ]
        },
        {
          "name": "ReadInt8",
          "docStart": 7137,
          "docEnd": 7363,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "data",
              "decl": "int& data"
            }
          ]
        },
        {
          "name": "ReadUint8",
          "docStart": 7410,
          "docEnd": 7645,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "data",
              "decl": "int& data"
            }
          ]
        },
        {
          "name": "ReadInt16",
          "docStart": 7693,
          "docEnd": 7911,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "data",
              "decl": "int& data"
            }
          ]
        },
        {
          "name": "ReadUint16",
          "docStart": 7959,
          "docEnd": 8187,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "data",
              "decl": "int& data"
            }
          ]
        },
        {
          "name": "ReadInt32",
          "docStart": 8236,
          "docEnd": 8412,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "data",
              "decl": "int& data"
            }
          ]
        },
        {
          "name": "WriteInt8",
          "docStart": 8460,
          "docEnd": 8635,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "data",
              "decl": "int data"
            }
          ]
        },
        {
          "name": "WriteInt16",
          "docStart": 8682,
          "docEnd": 8860,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "data",
              "decl": "int data"
            }
          ]
        },
        {
          "name": "WriteInt32",
          "docStart": 8908,
          "docEnd": 9065,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "data",
              "decl": "int data"
            }
          ]
        },
        {
          "name": "EndOfFile",
          "docStart": 9113,
          "docEnd": 9246,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Seek",
          "docStart": 9285,
          "docEnd": 9537,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "position",
              "decl": "int position"
            },
            {
              "type": "int",
              "name": "where",
              "decl": "int where"
            }
          ]
        },
        {
          "name": "Flush",
          "docStart": 9594,
          "docEnd": 9834,
          "returnType": "bool",
          "arguments": []
        }
      ],
      "properties": [
        {
          "name": "Position",
          "docStart": 9870,
          "docEnd": 9933,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "FileType",
      "docStart": 2297,
      "docEnd": 2327,
      "entries": [
        {
          "name": "FileType_Unknown",
          "docStart": 2372,
          "docEnd": 2411
        },
        {
          "name": "FileType_Directory",
          "docStart": 2438,
          "docEnd": 2463
        },
        {
          "name": "FileType_File",
          "docStart": 2490,
          "docEnd": 2510
        }
      ]
    },
    {
      "name": "FileTimeMode",
      "docStart": 2518,
      "docEnd": 2547,
      "entries": [
        {
          "name": "FileTime_LastAccess",
          "docStart": 2600,
          "docEnd": 2640
        },
        {
          "name": "FileTime_Created",
          "docStart": 2671,
          "docEnd": 2708
        },
        {
          "name": "FileTime_LastChange",
          "docStart": 2739,
          "docEnd": 2762
        }
      ]
    },
    {
      "name": "PathType",
      "docStart": 3028,
      "docEnd": 3052,
      "entries": [
        {
          "name": "Path_SM",
          "docStart": 3101,
          "docEnd": 3130
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}