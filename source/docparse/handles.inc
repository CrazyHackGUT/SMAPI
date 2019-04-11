{
  "functions": [
    {
      "name": "CloseHandle",
      "docStart": 1772,
      "docEnd": 2152,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "CloneHandle",
      "docStart": 2195,
      "docEnd": 3214,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        }
      ]
    },
    {
      "name": "IsValidHandle",
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "Handle",
      "docStart": 1640,
      "docEnd": 1674,
      "entries": [
        {
          "name": "INVALID_HANDLE"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}