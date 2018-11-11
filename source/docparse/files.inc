{
  "functions": [
    {
      "name": "BuildPath",
      "docStart": 9690,
      "docEnd": 10184,
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
      "docStart": 10283,
      "docEnd": 11003,
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
      "docStart": 11126,
      "docEnd": 11724,
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
      "docStart": 11830,
      "docEnd": 13634,
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
      "docStart": 13759,
      "docEnd": 14293,
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
      "docStart": 14415,
      "docEnd": 14654,
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
      "docStart": 14728,
      "docEnd": 15082,
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
      "docStart": 15159,
      "docEnd": 15837,
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
      "docStart": 15930,
      "docEnd": 16499,
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
      "docStart": 16584,
      "docEnd": 16852,
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
      "docStart": 16931,
      "docEnd": 17232,
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
      "docStart": 17307,
      "docEnd": 17644,
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
      "docStart": 17830,
      "docEnd": 18295,
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
      "docStart": 18445,
      "docEnd": 18642,
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
      "docStart": 18685,
      "docEnd": 18985,
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
      "docStart": 19050,
      "docEnd": 19222,
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
      "docStart": 19265,
      "docEnd": 19744,
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
      "docStart": 19852,
      "docEnd": 20387,
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
      "docStart": 20534,
      "docEnd": 21076,
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
      "docStart": 21183,
      "docEnd": 21665,
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
      "docStart": 21770,
      "docEnd": 22043,
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
      "docStart": 22084,
      "docEnd": 22304,
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
      "docStart": 22827,
      "docEnd": 23497,
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
      "docStart": 23634,
      "docEnd": 23816,
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
      "docStart": 23882,
      "docEnd": 24048,
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
      "docStart": 24116,
      "docEnd": 24388,
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
      "docStart": 24464,
      "docEnd": 24738,
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
      "docStart": 3086,
      "docEnd": 3213,
      "methods": [
        {
          "name": "GetNext",
          "docStart": 3256,
          "docEnd": 3721,
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
      "docStart": 3822,
      "docEnd": 4026,
      "methods": [
        {
          "name": "Close",
          "docStart": 4057,
          "docEnd": 4133,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "ReadLine",
          "docStart": 4188,
          "docEnd": 4415,
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
          "docStart": 4481,
          "docEnd": 4846,
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
          "docStart": 4915,
          "docEnd": 5672,
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
          "docStart": 5757,
          "docEnd": 6363,
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
          "docStart": 6440,
          "docEnd": 6664,
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
          "docStart": 6735,
          "docEnd": 7041,
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
          "docStart": 7108,
          "docEnd": 7334,
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
          "docStart": 7381,
          "docEnd": 7616,
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
          "docStart": 7664,
          "docEnd": 7882,
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
          "docStart": 7930,
          "docEnd": 8158,
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
          "docStart": 8207,
          "docEnd": 8383,
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
          "docStart": 8431,
          "docEnd": 8606,
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
          "docStart": 8653,
          "docEnd": 8831,
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
          "docStart": 8879,
          "docEnd": 9036,
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
          "docStart": 9084,
          "docEnd": 9218,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Seek",
          "docStart": 9257,
          "docEnd": 9509,
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
        }
      ],
      "properties": [
        {
          "name": "Position",
          "docStart": 9566,
          "docEnd": 9629,
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
      "docStart": 2303,
      "docEnd": 2333,
      "entries": [
        {
          "name": "FileType_Unknown",
          "docStart": 2376,
          "docEnd": 2415
        },
        {
          "name": "FileType_Directory",
          "docStart": 2442,
          "docEnd": 2467
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
          "docStart": 2597,
          "docEnd": 2637
        },
        {
          "name": "FileTime_Created",
          "docStart": 2663,
          "docEnd": 2700
        },
        {
          "name": "FileTime_LastChange",
          "docStart": 2728,
          "docEnd": 2751
        }
      ]
    },
    {
      "name": "PathType",
      "docStart": 2993,
      "docEnd": 3017,
      "entries": [
        {
          "name": "Path_SM",
          "docStart": 3048,
          "docEnd": 3077
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}