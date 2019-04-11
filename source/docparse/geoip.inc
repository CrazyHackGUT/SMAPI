{
  "functions": [
    {
      "name": "GeoipCode2",
      "docStart": 1745,
      "docEnd": 2004,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "ip",
          "decl": "const char[] ip"
        },
        {
          "type": "char[3]",
          "name": "ccode",
          "decl": "char ccode[3]"
        }
      ]
    },
    {
      "name": "GeoipCode3",
      "docStart": 2065,
      "docEnd": 2328,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "ip",
          "decl": "const char[] ip"
        },
        {
          "type": "char[4]",
          "name": "ccode",
          "decl": "char ccode[4]"
        }
      ]
    },
    {
      "name": "GeoipCountry",
      "docStart": 2389,
      "docEnd": 2712,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "ip",
          "decl": "const char[] ip"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "__ext_geoip_SetNTVOptional",
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