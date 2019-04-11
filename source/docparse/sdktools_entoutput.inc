{
  "functions": [
    {
      "name": "HookEntityOutput",
      "docStart": 2328,
      "docEnd": 2575,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        },
        {
          "type": "const char[]",
          "name": "output",
          "decl": "const char[] output"
        },
        {
          "type": "EntityOutput",
          "name": "callback",
          "decl": "EntityOutput callback"
        }
      ]
    },
    {
      "name": "UnhookEntityOutput",
      "docStart": 2678,
      "docEnd": 2969,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        },
        {
          "type": "const char[]",
          "name": "output",
          "decl": "const char[] output"
        },
        {
          "type": "EntityOutput",
          "name": "callback",
          "decl": "EntityOutput callback"
        }
      ]
    },
    {
      "name": "HookSingleEntityOutput",
      "docStart": 3074,
      "docEnd": 3428,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "output",
          "decl": "const char[] output"
        },
        {
          "type": "EntityOutput",
          "name": "callback",
          "decl": "EntityOutput callback"
        },
        {
          "type": "bool",
          "name": "once",
          "decl": "bool once"
        }
      ]
    },
    {
      "name": "UnhookSingleEntityOutput",
      "docStart": 3542,
      "docEnd": 3883,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "output",
          "decl": "const char[] output"
        },
        {
          "type": "EntityOutput",
          "name": "callback",
          "decl": "EntityOutput callback"
        }
      ]
    },
    {
      "name": "FireEntityOutput",
      "docStart": 3982,
      "docEnd": 4420,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "caller",
          "decl": "int caller"
        },
        {
          "type": "const char[]",
          "name": "output",
          "decl": "const char[] output"
        },
        {
          "type": "int",
          "name": "activator",
          "decl": "int activator"
        },
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [
    {
      "name": "EntityOutput",
      "docStart": 1663,
      "docEnd": 2135,
      "types": [
        {
          "type": "function void(const char[] output, int caller, int activator, float delay)"
        },
        {
          "type": "function Action(const char[] output, int caller, int activator, float delay)"
        }
      ]
    }
  ],
  "typedefs": []
}