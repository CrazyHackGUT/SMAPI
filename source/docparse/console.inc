{
  "functions": [
    {
      "name": "ServerCommand",
      "docStart": 6436,
      "docEnd": 6616,
      "kind": "native",
      "returnType": "void",
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
      "name": "ServerCommandEx",
      "docStart": 6678,
      "docEnd": 7241,
      "kind": "native",
      "returnType": "void",
      "arguments": [
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
      "name": "InsertServerCommand",
      "docStart": 7332,
      "docEnd": 7512,
      "kind": "native",
      "returnType": "void",
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
      "name": "ServerExecute",
      "docStart": 7580,
      "docEnd": 7675,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "ClientCommand",
      "docStart": 7709,
      "docEnd": 8035,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "FakeClientCommand",
      "docStart": 8106,
      "docEnd": 8718,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "FakeClientCommandEx",
      "docStart": 8793,
      "docEnd": 9207,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "FakeClientCommandKeyValues",
      "docStart": 9284,
      "docEnd": 9557,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "KeyValues",
          "name": "kv",
          "decl": "KeyValues kv"
        }
      ]
    },
    {
      "name": "PrintToServer",
      "docStart": 9628,
      "docEnd": 9775,
      "kind": "native",
      "returnType": "void",
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
      "name": "PrintToConsole",
      "docStart": 9837,
      "docEnd": 10087,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "PrintToConsoleAll",
      "docStart": 10164,
      "docEnd": 10315,
      "kind": "stock",
      "returnType": "void",
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
      "name": "ReplyToCommand",
      "docStart": 10606,
      "docEnd": 11034,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "GetCmdReplySource",
      "docStart": 11109,
      "docEnd": 11206,
      "kind": "native",
      "returnType": "ReplySource",
      "arguments": []
    },
    {
      "name": "SetCmdReplySource",
      "docStart": 11251,
      "docEnd": 11514,
      "kind": "native",
      "returnType": "ReplySource",
      "arguments": [
        {
          "type": "ReplySource",
          "name": "source",
          "decl": "ReplySource source"
        }
      ]
    },
    {
      "name": "IsChatTrigger",
      "docStart": 11577,
      "docEnd": 11776,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "ShowActivity2",
      "docStart": 11810,
      "docEnd": 12301,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "tag",
          "decl": "const char[] tag"
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
      "name": "ShowActivity",
      "docStart": 12393,
      "docEnd": 12942,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
      "name": "ShowActivityEx",
      "docStart": 13015,
      "docEnd": 13360,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "tag",
          "decl": "const char[] tag"
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
      "name": "FormatActivitySource",
      "docStart": 13453,
      "docEnd": 14309,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "target",
          "decl": "int target"
        },
        {
          "type": "const char[]",
          "name": "namebuf",
          "decl": "const char[] namebuf"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "RegServerCmd",
      "docStart": 14711,
      "docEnd": 15186,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "SrvCmd",
          "name": "callback",
          "decl": "SrvCmd callback"
        },
        {
          "type": "const char[]",
          "name": "description",
          "decl": "const char[] description"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "RegConsoleCmd",
      "docStart": 15672,
      "docEnd": 16345,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "ConCmd",
          "name": "callback",
          "decl": "ConCmd callback"
        },
        {
          "type": "const char[]",
          "name": "description",
          "decl": "const char[] description"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "RegAdminCmd",
      "docStart": 16454,
      "docEnd": 17293,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "cmd",
          "decl": "const char[] cmd"
        },
        {
          "type": "ConCmd",
          "name": "callback",
          "decl": "ConCmd callback"
        },
        {
          "type": "int",
          "name": "adminflags",
          "decl": "int adminflags"
        },
        {
          "type": "const char[]",
          "name": "description",
          "decl": "const char[] description"
        },
        {
          "type": "const char[]",
          "name": "group",
          "decl": "const char[] group"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetCmdArgs",
      "docStart": 17474,
      "docEnd": 17705,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetCmdArg",
      "docStart": 17735,
      "docEnd": 18123,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "argnum",
          "decl": "int argnum"
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
      "name": "GetCmdArgString",
      "docStart": 18192,
      "docEnd": 18474,
      "kind": "native",
      "returnType": "int",
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
      "name": "GetCommandIterator",
      "docStart": 19878,
      "docEnd": 19993,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "ReadCommandIterator",
      "docStart": 20034,
      "docEnd": 20506,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "iter",
          "decl": "Handle iter"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "nameLen",
          "decl": "int nameLen"
        },
        {
          "type": "int&",
          "name": "eflags",
          "decl": "int& eflags"
        },
        {
          "type": "char[]",
          "name": "desc",
          "decl": "char[] desc"
        },
        {
          "type": "int",
          "name": "descLen",
          "decl": "int descLen"
        }
      ]
    },
    {
      "name": "CheckCommandAccess",
      "docStart": 20679,
      "docEnd": 21503,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "bool",
          "name": "override_only",
          "decl": "bool override_only"
        }
      ]
    },
    {
      "name": "CheckAccess",
      "docStart": 21645,
      "docEnd": 22472,
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
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "bool",
          "name": "override_only",
          "decl": "bool override_only"
        }
      ]
    },
    {
      "name": "GetCommandFlags",
      "docStart": 22607,
      "docEnd": 22832,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SetCommandFlags",
      "docStart": 22884,
      "docEnd": 23098,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "FindFirstConCommand",
      "docStart": 23162,
      "docEnd": 24196,
      "kind": "native",
      "returnType": "Handle",
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
          "type": "bool&",
          "name": "isCommand",
          "decl": "bool& isCommand"
        },
        {
          "type": "int&",
          "name": "flags",
          "decl": "int& flags"
        },
        {
          "type": "char[]",
          "name": "description",
          "decl": "char[] description"
        },
        {
          "type": "int",
          "name": "descrmax_size",
          "decl": "int descrmax_size"
        }
      ]
    },
    {
      "name": "FindNextConCommand",
      "docStart": 24340,
      "docEnd": 25113,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "search",
          "decl": "Handle search"
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
          "type": "bool&",
          "name": "isCommand",
          "decl": "bool& isCommand"
        },
        {
          "type": "int&",
          "name": "flags",
          "decl": "int& flags"
        },
        {
          "type": "char[]",
          "name": "description",
          "decl": "char[] description"
        },
        {
          "type": "int",
          "name": "descrmax_size",
          "decl": "int descrmax_size"
        }
      ]
    },
    {
      "name": "AddServerTag",
      "docStart": 25269,
      "docEnd": 25591,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "tag",
          "decl": "const char[] tag"
        }
      ]
    },
    {
      "name": "RemoveServerTag",
      "docStart": 25640,
      "docEnd": 25749,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "tag",
          "decl": "const char[] tag"
        }
      ]
    },
    {
      "name": "AddCommandListener",
      "docStart": 27076,
      "docEnd": 27849,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "CommandListener",
          "name": "callback",
          "decl": "CommandListener callback"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        }
      ]
    },
    {
      "name": "RemoveCommandListener",
      "docStart": 27937,
      "docEnd": 28237,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "CommandListener",
          "name": "callback",
          "decl": "CommandListener callback"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        }
      ]
    },
    {
      "name": "CommandExists",
      "docStart": 28328,
      "docEnd": 28482,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        }
      ]
    },
    {
      "name": "OnClientSayCommand",
      "docStart": 28598,
      "docEnd": 28939,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "const char[]",
          "name": "sArgs",
          "decl": "const char[] sArgs"
        }
      ]
    },
    {
      "name": "OnClientSayCommand_Post",
      "docStart": 29033,
      "docEnd": 29201,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "const char[]",
          "name": "sArgs",
          "decl": "const char[] sArgs"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "CommandIterator",
      "methods": [
        {
          "name": "CommandIterator",
          "docStart": 18576,
          "docEnd": 18873,
          "returnType": "CommandIterator",
          "arguments": []
        },
        {
          "name": "Next",
          "docStart": 18913,
          "docEnd": 19067,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "GetDescription",
          "docStart": 19101,
          "docEnd": 19274,
          "returnType": "void",
          "arguments": [
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
          "name": "GetName",
          "docStart": 19343,
          "docEnd": 19509,
          "returnType": "void",
          "arguments": [
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
        }
      ],
      "properties": [
        {
          "name": "Plugin",
          "docStart": 19571,
          "docEnd": 19673,
          "type": "Handle",
          "getter": true,
          "setter": false
        },
        {
          "name": "Flags",
          "docStart": 19733,
          "docEnd": 19820,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "QueryCookie",
      "docStart": 1677,
      "docEnd": 1727,
      "entries": [
        {
          "name": "QUERYCOOKIE_FAILED"
        }
      ]
    },
    {
      "name": "ReplySource",
      "docStart": 1782,
      "docEnd": 1822,
      "entries": [
        {
          "name": "SM_REPLY_TO_CONSOLE"
        },
        {
          "name": "SM_REPLY_TO_CHAT"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "SrvCmd",
      "docStart": 14409,
      "docEnd": 14661,
      "type": "function Action(int args)"
    },
    {
      "name": "ConCmd",
      "docStart": 15294,
      "docEnd": 15610,
      "type": "function Action(int client, int args)"
    },
    {
      "name": "CommandListener",
      "docStart": 25801,
      "docEnd": 26925,
      "type": "function Action(int client, const char[] command, int argc)"
    }
  ]
}