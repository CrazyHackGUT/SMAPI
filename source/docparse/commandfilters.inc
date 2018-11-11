{
  "functions": [
    {
      "name": "ProcessTargetString",
      "docStart": 2765,
      "docEnd": 3902,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "int",
          "name": "admin",
          "decl": "int admin"
        },
        {
          "type": "int[]",
          "name": "targets",
          "decl": "int[] targets"
        },
        {
          "type": "int",
          "name": "max_targets",
          "decl": "int max_targets"
        },
        {
          "type": "int",
          "name": "filter_flags",
          "decl": "int filter_flags"
        },
        {
          "type": "char[]",
          "name": "target_name",
          "decl": "char[] target_name"
        },
        {
          "type": "int",
          "name": "tn_maxlength",
          "decl": "int tn_maxlength"
        },
        {
          "type": "bool&",
          "name": "tn_is_ml",
          "decl": "bool& tn_is_ml"
        }
      ]
    },
    {
      "name": "ReplyToTargetError",
      "docStart": 4147,
      "docEnd": 4412,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "reason",
          "decl": "int reason"
        }
      ]
    },
    {
      "name": "AddMultiTargetFilter",
      "docStart": 5682,
      "docEnd": 6014,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "MultiTargetFilter",
          "name": "filter",
          "decl": "MultiTargetFilter filter"
        },
        {
          "type": "const char[]",
          "name": "phrase",
          "decl": "const char[] phrase"
        },
        {
          "type": "bool",
          "name": "phraseIsML",
          "decl": "bool phraseIsML"
        }
      ]
    },
    {
      "name": "RemoveMultiTargetFilter",
      "docStart": 6173,
      "docEnd": 6358,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "MultiTargetFilter",
          "name": "filter",
          "decl": "MultiTargetFilter filter"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "MultiTargetFilter",
      "docStart": 5353,
      "docEnd": 5595,
      "type": "function bool(const char[] pattern, Handle clients)"
    }
  ]
}