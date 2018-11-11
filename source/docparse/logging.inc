{
  "functions": [
    {
      "name": "LogMessage",
      "docStart": 1647,
      "docEnd": 1851,
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
      "name": "LogToFile",
      "docStart": 1910,
      "docEnd": 2219,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
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
      "name": "LogToFileEx",
      "docStart": 2296,
      "docEnd": 2540,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
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
      "name": "LogAction",
      "docStart": 2619,
      "docEnd": 3041,
      "kind": "native",
      "returnType": "void",
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
      "name": "LogError",
      "docStart": 3124,
      "docEnd": 3260,
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
      "name": "OnLogAction",
      "docStart": 3317,
      "docEnd": 4036,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "Handle",
          "name": "source",
          "decl": "Handle source"
        },
        {
          "type": "Identity",
          "name": "ident",
          "decl": "Identity ident"
        },
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
          "name": "message",
          "decl": "const char[] message"
        }
      ]
    },
    {
      "name": "AddGameLogHook",
      "docStart": 4768,
      "docEnd": 4839,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GameLogHook",
          "name": "hook",
          "decl": "GameLogHook hook"
        }
      ]
    },
    {
      "name": "RemoveGameLogHook",
      "docStart": 4890,
      "docEnd": 4964,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "GameLogHook",
          "name": "hook",
          "decl": "GameLogHook hook"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "GameLogHook",
      "docStart": 4187,
      "docEnd": 4701,
      "type": "function Action(const char[] message)"
    }
  ]
}