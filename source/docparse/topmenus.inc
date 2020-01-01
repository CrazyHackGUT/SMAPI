{
  "functions": [
    {
      "name": "CreateTopMenu",
      "docStart": 9690,
      "docEnd": 9870,
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
      "docStart": 9929,
      "docEnd": 11138,
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
      "docStart": 11238,
      "docEnd": 11989,
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
      "docStart": 12278,
      "docEnd": 12711,
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
      "docStart": 12817,
      "docEnd": 13250,
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
      "docStart": 13353,
      "docEnd": 13696,
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
      "docStart": 13770,
      "docEnd": 14080,
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
      "docStart": 14167,
      "docEnd": 14480,
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
      "docStart": 14573,
      "docEnd": 14885,
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
      "docStart": 14967,
      "docEnd": 15460,
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
      "docStart": 4303,
      "docEnd": 4464,
      "methods": [
        {
          "name": "TopMenu",
          "docStart": 4498,
          "docEnd": 4638,
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
          "docStart": 4692,
          "docEnd": 4851,
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
          "docStart": 4914,
          "docEnd": 6055,
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
          "docStart": 6141,
          "docEnd": 6534,
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
          "docStart": 6782,
          "docEnd": 7254,
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
          "docStart": 7512,
          "docEnd": 7803,
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
          "docStart": 7895,
          "docEnd": 8185,
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
          "docStart": 8274,
          "docEnd": 8521,
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
          "docStart": 8577,
          "docEnd": 8767,
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
          "docStart": 8840,
          "docEnd": 9033,
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
          "docStart": 9112,
          "docEnd": 9326,
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
          "docStart": 9394,
          "docEnd": 9614,
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
      "docStart": 1676,
      "docEnd": 1731,
      "entries": [
        {
          "name": "TopMenuAction_DisplayOption",
          "docStart": 1757,
          "docEnd": 1949
        },
        {
          "name": "TopMenuAction_DisplayTitle",
          "docStart": 1989,
          "docEnd": 2306
        },
        {
          "name": "TopMenuAction_SelectOption",
          "docStart": 2345,
          "docEnd": 2516
        },
        {
          "name": "TopMenuAction_DrawOption",
          "docStart": 2555,
          "docEnd": 2876
        },
        {
          "name": "TopMenuAction_RemoveObject",
          "docStart": 2914,
          "docEnd": 3093
        }
      ]
    },
    {
      "name": "TopMenuObjectType",
      "docStart": 3135,
      "docEnd": 3170,
      "entries": [
        {
          "name": "TopMenuObject_Category",
          "docStart": 3236,
          "docEnd": 3283
        },
        {
          "name": "TopMenuObject_Item",
          "docStart": 3322,
          "docEnd": 3348
        }
      ]
    },
    {
      "name": "TopMenuPosition",
      "docStart": 3356,
      "docEnd": 3409,
      "entries": [
        {
          "name": "TopMenuPosition_Start",
          "docStart": 3473,
          "docEnd": 3503
        },
        {
          "name": "TopMenuPosition_LastRoot",
          "docStart": 3542,
          "docEnd": 3580
        },
        {
          "name": "TopMenuPosition_LastCategory",
          "docStart": 3619,
          "docEnd": 3663
        }
      ]
    },
    {
      "name": "TopMenuObject",
      "docStart": 3671,
      "docEnd": 3722,
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
      "docStart": 3781,
      "docEnd": 4131,
      "type": "function void(TopMenu topmenu, TopMenuAction action, TopMenuObject topobj_id, int param, char[] buffer, int maxlength)"
    }
  ]
}