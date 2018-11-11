{
  "functions": [
    {
      "name": "LoadTranslations",
      "docStart": 1707,
      "docEnd": 1870,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        }
      ]
    },
    {
      "name": "SetGlobalTransTarget",
      "docStart": 1924,
      "docEnd": 2245,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientLanguage",
      "docStart": 2296,
      "docEnd": 2493,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetServerLanguage",
      "docStart": 2540,
      "docEnd": 2636,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetLanguageCount",
      "docStart": 2673,
      "docEnd": 2775,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetLanguageInfo",
      "docStart": 2811,
      "docEnd": 3177,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "language",
          "decl": "int language"
        },
        {
          "type": "char[]",
          "name": "code",
          "decl": "char[] code"
        },
        {
          "type": "int",
          "name": "codeLen",
          "decl": "int codeLen"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "nameLen",
          "decl": "int nameLen"
        }
      ]
    },
    {
      "name": "SetClientLanguage",
      "docStart": 3287,
      "docEnd": 3469,
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
          "name": "language",
          "decl": "int language"
        }
      ]
    },
    {
      "name": "GetLanguageByCode",
      "docStart": 3531,
      "docEnd": 3704,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "code",
          "decl": "const char[] code"
        }
      ]
    },
    {
      "name": "GetLanguageByName",
      "docStart": 3758,
      "docEnd": 3925,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "TranslationPhraseExists",
      "docStart": 3979,
      "docEnd": 4155,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "phrase",
          "decl": "const char[] phrase"
        }
      ]
    },
    {
      "name": "IsTranslatedForLanguage",
      "docStart": 4218,
      "docEnd": 4413,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "phrase",
          "decl": "const char[] phrase"
        },
        {
          "type": "int",
          "name": "language",
          "decl": "int language"
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