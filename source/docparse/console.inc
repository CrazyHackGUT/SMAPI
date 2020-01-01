{
  "functions": [
    {
      "name": "ServerCommand",
      "docStart": 6577,
      "docEnd": 6771,
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
      "docStart": 6833,
      "docEnd": 7422,
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
      "docStart": 7513,
      "docEnd": 7707,
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
      "docStart": 7775,
      "docEnd": 7870,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "ClientCommand",
      "docStart": 7904,
      "docEnd": 8263,
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
      "docStart": 8334,
      "docEnd": 8979,
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
      "docStart": 9054,
      "docEnd": 9501,
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
      "docStart": 9578,
      "docEnd": 9893,
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
      "docStart": 9964,
      "docEnd": 10125,
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
      "docStart": 10187,
      "docEnd": 10468,
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
      "docStart": 10545,
      "docEnd": 10710,
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
      "docStart": 11001,
      "docEnd": 11460,
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
      "docStart": 11535,
      "docEnd": 11642,
      "kind": "native",
      "returnType": "ReplySource",
      "arguments": []
    },
    {
      "name": "SetCmdReplySource",
      "docStart": 11687,
      "docEnd": 11966,
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
      "docStart": 12029,
      "docEnd": 12238,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "ShowActivity2",
      "docStart": 12272,
      "docEnd": 12791,
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
      "docStart": 12883,
      "docEnd": 13452,
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
      "docStart": 13525,
      "docEnd": 13898,
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
      "docStart": 13991,
      "docEnd": 14847,
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
      "docStart": 15282,
      "docEnd": 15788,
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
      "docStart": 16313,
      "docEnd": 17017,
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
      "docStart": 17126,
      "docEnd": 18020,
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
      "docStart": 18201,
      "docEnd": 18442,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetCmdArg",
      "docStart": 18472,
      "docEnd": 18885,
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
      "docStart": 18954,
      "docEnd": 19255,
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
      "docStart": 20751,
      "docEnd": 20876,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "ReadCommandIterator",
      "docStart": 20917,
      "docEnd": 21436,
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
      "docStart": 21609,
      "docEnd": 22540,
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
      "docStart": 22682,
      "docEnd": 23619,
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
      "docStart": 23754,
      "docEnd": 24015,
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
      "docStart": 24067,
      "docEnd": 24307,
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
      "docStart": 24371,
      "docEnd": 25546,
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
      "docStart": 25690,
      "docEnd": 26562,
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
      "docStart": 26718,
      "docEnd": 27048,
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
      "docStart": 27097,
      "docEnd": 27214,
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
      "docStart": 28551,
      "docEnd": 29329,
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
      "docStart": 29417,
      "docEnd": 29737,
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
      "docStart": 29828,
      "docEnd": 29999,
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
      "docStart": 30115,
      "docEnd": 30500,
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
      "docStart": 30594,
      "docEnd": 30779,
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
          "docStart": 19357,
          "docEnd": 19665,
          "returnType": "CommandIterator",
          "arguments": []
        },
        {
          "name": "Next",
          "docStart": 19705,
          "docEnd": 19871,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "GetDescription",
          "docStart": 19905,
          "docEnd": 20101,
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
          "docStart": 20170,
          "docEnd": 20359,
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
          "docStart": 20421,
          "docEnd": 20534,
          "type": "Handle",
          "getter": true,
          "setter": false
        },
        {
          "name": "Flags",
          "docStart": 20594,
          "docEnd": 20693,
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
      "docStart": 1676,
      "docEnd": 1726,
      "entries": [
        {
          "name": "QUERYCOOKIE_FAILED"
        }
      ]
    },
    {
      "name": "ReplySource",
      "docStart": 1780,
      "docEnd": 1820,
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
      "docStart": 14947,
      "docEnd": 15232,
      "type": "function Action(int args)"
    },
    {
      "name": "ConCmd",
      "docStart": 15896,
      "docEnd": 16251,
      "type": "function Action(int client, int args)"
    },
    {
      "name": "CommandListener",
      "docStart": 27266,
      "docEnd": 28400,
      "type": "function Action(int client, const char[] command, int argc)"
    }
  ]
}