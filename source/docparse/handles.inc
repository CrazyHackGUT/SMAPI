{
  "functions": [
    {
      "name": "CloseHandle",
      "docStart": 1770,
      "docEnd": 2160,
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
      "docStart": 2203,
      "docEnd": 3280,
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
      "docStart": 1639,
      "docEnd": 1673,
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