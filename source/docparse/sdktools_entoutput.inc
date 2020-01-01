{
  "functions": [
    {
      "name": "HookEntityOutput",
      "docStart": 2384,
      "docEnd": 2655,
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
      "docStart": 2758,
      "docEnd": 3083,
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
      "docStart": 3188,
      "docEnd": 3575,
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
      "docStart": 3689,
      "docEnd": 4065,
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
      "docStart": 4164,
      "docEnd": 4638,
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
      "docStart": 1661,
      "docEnd": 2191,
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