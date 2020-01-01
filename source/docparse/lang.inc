{
  "functions": [
    {
      "name": "LoadTranslations",
      "docStart": 1709,
      "docEnd": 1880,
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
      "docStart": 1934,
      "docEnd": 2262,
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
      "docStart": 2313,
      "docEnd": 2540,
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
      "docStart": 2587,
      "docEnd": 2694,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetLanguageCount",
      "docStart": 2731,
      "docEnd": 2844,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetLanguageInfo",
      "docStart": 2880,
      "docEnd": 3291,
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
      "docStart": 3401,
      "docEnd": 3607,
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
      "docStart": 3669,
      "docEnd": 3861,
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
      "docStart": 3915,
      "docEnd": 4101,
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
      "docStart": 4155,
      "docEnd": 4349,
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
      "docStart": 4412,
      "docEnd": 4630,
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