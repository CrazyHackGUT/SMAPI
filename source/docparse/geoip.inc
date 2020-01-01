{
  "functions": [
    {
      "name": "GeoipCode2",
      "docStart": 1744,
      "docEnd": 2028,
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
      "docStart": 2089,
      "docEnd": 2377,
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
      "docStart": 2438,
      "docEnd": 2789,
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