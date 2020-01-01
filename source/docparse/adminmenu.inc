{
  "functions": [
    {
      "name": "OnAdminMenuCreated",
      "docStart": 2319,
      "docEnd": 2501,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        }
      ]
    },
    {
      "name": "OnAdminMenuReady",
      "docStart": 2555,
      "docEnd": 2690,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        }
      ]
    },
    {
      "name": "GetAdminTopMenu",
      "docStart": 2742,
      "docEnd": 2926,
      "kind": "native",
      "returnType": "TopMenu",
      "arguments": []
    },
    {
      "name": "AddTargetsToMenu",
      "docStart": 2965,
      "docEnd": 3398,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "source_client",
          "decl": "int source_client"
        },
        {
          "type": "bool",
          "name": "in_game_only",
          "decl": "bool in_game_only"
        },
        {
          "type": "bool",
          "name": "alive_only",
          "decl": "bool alive_only"
        }
      ]
    },
    {
      "name": "AddTargetsToMenu2",
      "docStart": 3538,
      "docEnd": 3920,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "source_client",
          "decl": "int source_client"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "RedisplayAdminMenu",
      "docStart": 3998,
      "docEnd": 4260,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "__pl_adminmenu_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}