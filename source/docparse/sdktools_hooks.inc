{
  "functions": [
    {
      "name": "OnPlayerRunCmd",
      "docStart": 1733,
      "docEnd": 2893,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int&",
          "name": "buttons",
          "decl": "int& buttons"
        },
        {
          "type": "int&",
          "name": "impulse",
          "decl": "int& impulse"
        },
        {
          "type": "float[3]",
          "name": "vel",
          "decl": "float vel[3]"
        },
        {
          "type": "float[3]",
          "name": "angles",
          "decl": "float angles[3]"
        },
        {
          "type": "int&",
          "name": "weapon",
          "decl": "int& weapon"
        },
        {
          "type": "int&",
          "name": "subtype",
          "decl": "int& subtype"
        },
        {
          "type": "int&",
          "name": "cmdnum",
          "decl": "int& cmdnum"
        },
        {
          "type": "int&",
          "name": "tickcount",
          "decl": "int& tickcount"
        },
        {
          "type": "int&",
          "name": "seed",
          "decl": "int& seed"
        },
        {
          "type": "int[2]",
          "name": "mouse",
          "decl": "int mouse[2]"
        }
      ]
    },
    {
      "name": "OnPlayerRunCmdPost",
      "docStart": 3081,
      "docEnd": 3955,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "buttons",
          "decl": "int buttons"
        },
        {
          "type": "int",
          "name": "impulse",
          "decl": "int impulse"
        },
        {
          "type": "const float[3]",
          "name": "vel",
          "decl": "const float vel[3]"
        },
        {
          "type": "const float[3]",
          "name": "angles",
          "decl": "const float angles[3]"
        },
        {
          "type": "int",
          "name": "weapon",
          "decl": "int weapon"
        },
        {
          "type": "int",
          "name": "subtype",
          "decl": "int subtype"
        },
        {
          "type": "int",
          "name": "cmdnum",
          "decl": "int cmdnum"
        },
        {
          "type": "int",
          "name": "tickcount",
          "decl": "int tickcount"
        },
        {
          "type": "int",
          "name": "seed",
          "decl": "int seed"
        },
        {
          "type": "const int[2]",
          "name": "mouse",
          "decl": "const int mouse[2]"
        }
      ]
    },
    {
      "name": "OnFileSend",
      "docStart": 4156,
      "docEnd": 4413,
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
          "name": "sFile",
          "decl": "const char[] sFile"
        }
      ]
    },
    {
      "name": "OnFileReceive",
      "docStart": 4477,
      "docEnd": 4729,
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
          "name": "sFile",
          "decl": "const char[] sFile"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}