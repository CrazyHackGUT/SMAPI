{
  "functions": [
    {
      "name": "OnAdminMenuCreated",
      "docStart": 2301,
      "docEnd": 2478,
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
      "docStart": 2532,
      "docEnd": 2662,
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
      "docStart": 2714,
      "docEnd": 2872,
      "kind": "native",
      "returnType": "TopMenu",
      "arguments": []
    },
    {
      "name": "AddTargetsToMenu",
      "docStart": 2911,
      "docEnd": 3324,
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
      "docStart": 3461,
      "docEnd": 3820,
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
      "docStart": 3898,
      "docEnd": 4139,
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