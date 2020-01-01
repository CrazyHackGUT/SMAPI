{
  "functions": [
    {
      "name": "LogMessage",
      "docStart": 1645,
      "docEnd": 1862,
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
      "docStart": 1921,
      "docEnd": 2261,
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
      "docStart": 2338,
      "docEnd": 2614,
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
      "docStart": 2693,
      "docEnd": 3154,
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
      "docStart": 3237,
      "docEnd": 3387,
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
      "docStart": 3444,
      "docEnd": 4263,
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
      "docStart": 5021,
      "docEnd": 5099,
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
      "docStart": 5150,
      "docEnd": 5231,
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
      "docStart": 4413,
      "docEnd": 4954,
      "type": "function Action(const char[] message)"
    }
  ]
}