{
  "functions": [
    {
      "name": "CreateTopMenu",
      "docStart": 9625,
      "docEnd": 9792,
      "kind": "native",
      "returnType": "TopMenu",
      "arguments": [
        {
          "type": "TopMenuHandler",
          "name": "handler",
          "decl": "TopMenuHandler handler"
        }
      ]
    },
    {
      "name": "LoadTopMenuConfig",
      "docStart": 9859,
      "docEnd": 10996,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "AddToTopMenu",
      "docStart": 11096,
      "docEnd": 11748,
      "kind": "native",
      "returnType": "TopMenuObject",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "TopMenuObjectType",
          "name": "type",
          "decl": "TopMenuObjectType type"
        },
        {
          "type": "TopMenuHandler",
          "name": "handler",
          "decl": "TopMenuHandler handler"
        },
        {
          "type": "TopMenuObject",
          "name": "parent",
          "decl": "TopMenuObject parent"
        },
        {
          "type": "const char[]",
          "name": "cmdname",
          "decl": "const char[] cmdname"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "info_string",
          "decl": "const char[] info_string"
        }
      ]
    },
    {
      "name": "GetTopMenuInfoString",
      "docStart": 12047,
      "docEnd": 12431,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "TopMenuObject",
          "name": "parent",
          "decl": "TopMenuObject parent"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetTopMenuObjName",
      "docStart": 12537,
      "docEnd": 12921,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "TopMenuObject",
          "name": "topobj",
          "decl": "TopMenuObject topobj"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "RemoveFromTopMenu",
      "docStart": 13024,
      "docEnd": 13349,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "TopMenuObject",
          "name": "topobj",
          "decl": "TopMenuObject topobj"
        }
      ]
    },
    {
      "name": "DisplayTopMenu",
      "docStart": 13423,
      "docEnd": 13702,
      "kind": "native",
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
        },
        {
          "type": "TopMenuPosition",
          "name": "position",
          "decl": "TopMenuPosition position"
        }
      ]
    },
    {
      "name": "DisplayTopMenuCategory",
      "docStart": 13789,
      "docEnd": 14070,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "TopMenuObject",
          "name": "category",
          "decl": "TopMenuObject category"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "FindTopMenuCategory",
      "docStart": 14163,
      "docEnd": 14432,
      "kind": "native",
      "returnType": "TopMenuObject",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SetTopMenuTitleCaching",
      "docStart": 14514,
      "docEnd": 15007,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "topmenu",
          "decl": "Handle topmenu"
        },
        {
          "type": "bool",
          "name": "cache_titles",
          "decl": "bool cache_titles"
        }
      ]
    },
    {
      "name": "__ext_topmenus_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "TopMenu",
      "docStart": 4227,
      "docEnd": 4388,
      "methods": [
        {
          "name": "TopMenu",
          "docStart": 4422,
          "docEnd": 4562,
          "returnType": "TopMenu",
          "arguments": [
            {
              "type": "TopMenuHandler",
              "name": "handler",
              "decl": "TopMenuHandler handler"
            }
          ]
        },
        {
          "name": "FromHandle",
          "docStart": 4616,
          "docEnd": 4775,
          "returnType": "TopMenu",
          "arguments": [
            {
              "type": "Handle",
              "name": "handle",
              "decl": "Handle handle"
            }
          ]
        },
        {
          "name": "LoadConfig",
          "docStart": 4838,
          "docEnd": 5985,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "file",
              "decl": "const char[] file"
            },
            {
              "type": "char[]",
              "name": "error",
              "decl": "char[] error"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "AddCategory",
          "docStart": 6071,
          "docEnd": 6464,
          "returnType": "TopMenuObject",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "TopMenuHandler",
              "name": "handler",
              "decl": "TopMenuHandler handler"
            },
            {
              "type": "const char[]",
              "name": "cmdname",
              "decl": "const char[] cmdname"
            },
            {
              "type": "int",
              "name": "flags",
              "decl": "int flags"
            },
            {
              "type": "const char[]",
              "name": "info_string",
              "decl": "const char[] info_string"
            }
          ]
        },
        {
          "name": "AddItem",
          "docStart": 6712,
          "docEnd": 7184,
          "returnType": "TopMenuObject",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "TopMenuHandler",
              "name": "handler",
              "decl": "TopMenuHandler handler"
            },
            {
              "type": "TopMenuObject",
              "name": "parent",
              "decl": "TopMenuObject parent"
            },
            {
              "type": "const char[]",
              "name": "cmdname",
              "decl": "const char[] cmdname"
            },
            {
              "type": "int",
              "name": "flags",
              "decl": "int flags"
            },
            {
              "type": "const char[]",
              "name": "info_string",
              "decl": "const char[] info_string"
            }
          ]
        },
        {
          "name": "GetInfoString",
          "docStart": 7442,
          "docEnd": 7733,
          "returnType": "int",
          "arguments": [
            {
              "type": "TopMenuObject",
              "name": "parent",
              "decl": "TopMenuObject parent"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "GetObjName",
          "docStart": 7825,
          "docEnd": 8115,
          "returnType": "int",
          "arguments": [
            {
              "type": "TopMenuObject",
              "name": "topobj",
              "decl": "TopMenuObject topobj"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "Remove",
          "docStart": 8204,
          "docEnd": 8454,
          "returnType": "void",
          "arguments": [
            {
              "type": "TopMenuObject",
              "name": "topobj",
              "decl": "TopMenuObject topobj"
            }
          ]
        },
        {
          "name": "Display",
          "docStart": 8510,
          "docEnd": 8700,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "TopMenuPosition",
              "name": "position",
              "decl": "TopMenuPosition position"
            }
          ]
        },
        {
          "name": "DisplayCategory",
          "docStart": 8773,
          "docEnd": 8966,
          "returnType": "bool",
          "arguments": [
            {
              "type": "TopMenuObject",
              "name": "category",
              "decl": "TopMenuObject category"
            },
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            }
          ]
        },
        {
          "name": "FindCategory",
          "docStart": 9045,
          "docEnd": 9260,
          "returnType": "TopMenuObject",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "CacheTitles",
          "docStart": 9329,
          "docEnd": 9549,
          "type": "bool",
          "getter": false,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "TopMenuAction",
      "docStart": 1678,
      "docEnd": 1733,
      "entries": [
        {
          "name": "TopMenuAction_DisplayOption",
          "docStart": 1759,
          "docEnd": 1951
        },
        {
          "name": "TopMenuAction_DisplayTitle",
          "docStart": 1992,
          "docEnd": 2310
        },
        {
          "name": "TopMenuAction_SelectOption",
          "docStart": 2350,
          "docEnd": 2521
        },
        {
          "name": "TopMenuAction_DrawOption",
          "docStart": 2560,
          "docEnd": 2848
        },
        {
          "name": "TopMenuAction_RemoveObject",
          "docStart": 2888,
          "docEnd": 3067
        }
      ]
    },
    {
      "name": "TopMenuObjectType",
      "docStart": 3110,
      "docEnd": 3145,
      "entries": [
        {
          "name": "TopMenuObject_Category",
          "docStart": 3205,
          "docEnd": 3252
        },
        {
          "name": "TopMenuObject_Item",
          "docStart": 3281,
          "docEnd": 3307
        }
      ]
    },
    {
      "name": "TopMenuPosition",
      "docStart": 3315,
      "docEnd": 3368,
      "entries": [
        {
          "name": "TopMenuPosition_Start",
          "docStart": 3425,
          "docEnd": 3455
        },
        {
          "name": "TopMenuPosition_LastRoot",
          "docStart": 3489,
          "docEnd": 3527
        },
        {
          "name": "TopMenuPosition_LastCategory",
          "docStart": 3564,
          "docEnd": 3608
        }
      ]
    },
    {
      "name": "TopMenuObject",
      "docStart": 3616,
      "docEnd": 3667,
      "entries": [
        {
          "name": "INVALID_TOPMENUOBJECT"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "TopMenuHandler",
      "docStart": 3727,
      "docEnd": 4054,
      "type": "function void(TopMenu topmenu, TopMenuAction action, TopMenuObject topobj_id, int param, char[] buffer, int maxlength)"
    }
  ]
}