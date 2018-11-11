{
  "functions": [
    {
      "name": "CreateMenu",
      "docStart": 18244,
      "docEnd": 18636,
      "kind": "native",
      "returnType": "Menu",
      "arguments": [
        {
          "type": "MenuHandler",
          "name": "handler",
          "decl": "MenuHandler handler"
        },
        {
          "type": "MenuAction",
          "name": "actions",
          "decl": "MenuAction actions"
        }
      ]
    },
    {
      "name": "DisplayMenu",
      "docStart": 18727,
      "docEnd": 19003,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        }
      ]
    },
    {
      "name": "DisplayMenuAtItem",
      "docStart": 19068,
      "docEnd": 19431,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "first_item",
          "decl": "int first_item"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        }
      ]
    },
    {
      "name": "AddMenuItem",
      "docStart": 19518,
      "docEnd": 19942,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "const char[]",
          "name": "info",
          "decl": "const char[] info"
        },
        {
          "type": "const char[]",
          "name": "display",
          "decl": "const char[] display"
        },
        {
          "type": "int",
          "name": "style",
          "decl": "int style"
        }
      ]
    },
    {
      "name": "InsertMenuItem",
      "docStart": 20078,
      "docEnd": 20644,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "position",
          "decl": "int position"
        },
        {
          "type": "const char[]",
          "name": "info",
          "decl": "const char[] info"
        },
        {
          "type": "const char[]",
          "name": "display",
          "decl": "const char[] display"
        },
        {
          "type": "int",
          "name": "style",
          "decl": "int style"
        }
      ]
    },
    {
      "name": "RemoveMenuItem",
      "docStart": 20800,
      "docEnd": 21027,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "position",
          "decl": "int position"
        }
      ]
    },
    {
      "name": "RemoveAllMenuItems",
      "docStart": 21087,
      "docEnd": 21214,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "GetMenuItem",
      "docStart": 21264,
      "docEnd": 21752,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "position",
          "decl": "int position"
        },
        {
          "type": "char[]",
          "name": "infoBuf",
          "decl": "char[] infoBuf"
        },
        {
          "type": "int",
          "name": "infoBufLen",
          "decl": "int infoBufLen"
        },
        {
          "type": "int&",
          "name": "style",
          "decl": "int& style"
        },
        {
          "type": "char[]",
          "name": "dispBuf",
          "decl": "char[] dispBuf"
        },
        {
          "type": "int",
          "name": "dispBufLen",
          "decl": "int dispBufLen"
        }
      ]
    },
    {
      "name": "GetMenuSelectionPosition",
      "docStart": 21945,
      "docEnd": 22372,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetMenuItemCount",
      "docStart": 22416,
      "docEnd": 22579,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "SetMenuPagination",
      "docStart": 22626,
      "docEnd": 23077,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "itemsPerPage",
          "decl": "int itemsPerPage"
        }
      ]
    },
    {
      "name": "GetMenuPagination",
      "docStart": 23144,
      "docEnd": 23303,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "GetMenuStyle",
      "docStart": 23351,
      "docEnd": 23569,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "SetMenuTitle",
      "docStart": 23615,
      "docEnd": 23829,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "const char[]",
          "name": "fmt",
          "decl": "const char[] fmt"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "GetMenuTitle",
      "docStart": 23900,
      "docEnd": 24152,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
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
      "name": "CreatePanelFromMenu",
      "docStart": 24225,
      "docEnd": 24445,
      "kind": "native",
      "returnType": "Panel",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "GetMenuExitButton",
      "docStart": 24497,
      "docEnd": 24742,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "SetMenuExitButton",
      "docStart": 24791,
      "docEnd": 25413,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "bool",
          "name": "button",
          "decl": "bool button"
        }
      ]
    },
    {
      "name": "GetMenuExitBackButton",
      "docStart": 25475,
      "docEnd": 25889,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "SetMenuExitBackButton",
      "docStart": 25942,
      "docEnd": 26341,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "bool",
          "name": "button",
          "decl": "bool button"
        }
      ]
    },
    {
      "name": "SetMenuNoVoteButton",
      "docStart": 26407,
      "docEnd": 26720,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "bool",
          "name": "button",
          "decl": "bool button"
        }
      ]
    },
    {
      "name": "CancelMenu",
      "docStart": 26784,
      "docEnd": 27218,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "GetMenuOptionFlags",
      "docStart": 27260,
      "docEnd": 27418,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "SetMenuOptionFlags",
      "docStart": 27467,
      "docEnd": 27840,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "IsVoteInProgress",
      "docStart": 27901,
      "docEnd": 28067,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        }
      ]
    },
    {
      "name": "CancelVote",
      "docStart": 28130,
      "docEnd": 28218,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "VoteMenu",
      "docStart": 28249,
      "docEnd": 28990,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int[]",
          "name": "clients",
          "decl": "int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "VoteMenuToAll",
      "docStart": 29084,
      "docEnd": 29441,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "SetVoteResultCallback",
      "docStart": 30598,
      "docEnd": 30840,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "menu",
          "decl": "Handle menu"
        },
        {
          "type": "VoteHandler",
          "name": "callback",
          "decl": "VoteHandler callback"
        }
      ]
    },
    {
      "name": "CheckVoteDelay",
      "docStart": 30915,
      "docEnd": 31160,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "IsClientInVotePool",
      "docStart": 31194,
      "docEnd": 31547,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "RedrawClientVoteMenu",
      "docStart": 31596,
      "docEnd": 31989,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "revotes",
          "decl": "bool revotes"
        }
      ]
    },
    {
      "name": "GetMenuStyleHandle",
      "docStart": 32059,
      "docEnd": 32208,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "MenuStyle",
          "name": "style",
          "decl": "MenuStyle style"
        }
      ]
    },
    {
      "name": "CreatePanel",
      "docStart": 32264,
      "docEnd": 32625,
      "kind": "native",
      "returnType": "Panel",
      "arguments": [
        {
          "type": "Handle",
          "name": "hStyle",
          "decl": "Handle hStyle"
        }
      ]
    },
    {
      "name": "CreateMenuEx",
      "docStart": 32686,
      "docEnd": 33243,
      "kind": "native",
      "returnType": "Menu",
      "arguments": [
        {
          "type": "Handle",
          "name": "hStyle",
          "decl": "Handle hStyle"
        },
        {
          "type": "MenuHandler",
          "name": "handler",
          "decl": "MenuHandler handler"
        },
        {
          "type": "MenuAction",
          "name": "actions",
          "decl": "MenuAction actions"
        }
      ]
    },
    {
      "name": "GetClientMenu",
      "docStart": 33366,
      "docEnd": 33621,
      "kind": "native",
      "returnType": "MenuSource",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "hStyle",
          "decl": "Handle hStyle"
        }
      ]
    },
    {
      "name": "CancelClientMenu",
      "docStart": 33691,
      "docEnd": 34067,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "autoIgnore",
          "decl": "bool autoIgnore"
        },
        {
          "type": "Handle",
          "name": "hStyle",
          "decl": "Handle hStyle"
        }
      ]
    },
    {
      "name": "GetMaxPageItems",
      "docStart": 34167,
      "docEnd": 34401,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hStyle",
          "decl": "Handle hStyle"
        }
      ]
    },
    {
      "name": "GetPanelStyle",
      "docStart": 34464,
      "docEnd": 34645,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        }
      ]
    },
    {
      "name": "SetPanelTitle",
      "docStart": 34693,
      "docEnd": 34925,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "bool",
          "name": "onlyIfEmpty",
          "decl": "bool onlyIfEmpty"
        }
      ]
    },
    {
      "name": "DrawPanelItem",
      "docStart": 35014,
      "docEnd": 35469,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "int",
          "name": "style",
          "decl": "int style"
        }
      ]
    },
    {
      "name": "DrawPanelText",
      "docStart": 35561,
      "docEnd": 35906,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        }
      ]
    },
    {
      "name": "CanPanelDrawFlags",
      "docStart": 35971,
      "docEnd": 36239,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "int",
          "name": "style",
          "decl": "int style"
        }
      ]
    },
    {
      "name": "SetPanelKeys",
      "docStart": 36300,
      "docEnd": 36691,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "int",
          "name": "keys",
          "decl": "int keys"
        }
      ]
    },
    {
      "name": "SendPanelToClient",
      "docStart": 36746,
      "docEnd": 37415,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "MenuHandler",
          "name": "handler",
          "decl": "MenuHandler handler"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        }
      ]
    },
    {
      "name": "GetPanelTextRemaining",
      "docStart": 37508,
      "docEnd": 37948,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        }
      ]
    },
    {
      "name": "GetPanelCurrentKey",
      "docStart": 38001,
      "docEnd": 38178,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        }
      ]
    },
    {
      "name": "SetPanelCurrentKey",
      "docStart": 38228,
      "docEnd": 38525,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "panel",
          "decl": "Handle panel"
        },
        {
          "type": "int",
          "name": "key",
          "decl": "int key"
        }
      ]
    },
    {
      "name": "RedrawMenuItem",
      "docStart": 38585,
      "docEnd": 38776,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        }
      ]
    },
    {
      "name": "InternalShowMenu",
      "docStart": 38827,
      "docEnd": 39656,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "keys",
          "decl": "int keys"
        },
        {
          "type": "MenuHandler",
          "name": "handler",
          "decl": "MenuHandler handler"
        }
      ]
    },
    {
      "name": "GetMenuVoteInfo",
      "docStart": 39782,
      "docEnd": 40037,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "param2",
          "decl": "int param2"
        },
        {
          "type": "int&",
          "name": "winningVotes",
          "decl": "int& winningVotes"
        },
        {
          "type": "int&",
          "name": "totalVotes",
          "decl": "int& totalVotes"
        }
      ]
    },
    {
      "name": "IsNewVoteAllowed",
      "docStart": 40186,
      "docEnd": 40509,
      "kind": "stock",
      "returnType": "bool",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "Panel",
      "docStart": 6907,
      "docEnd": 7039,
      "methods": [
        {
          "name": "Panel",
          "docStart": 7071,
          "docEnd": 7180,
          "returnType": "Panel",
          "arguments": [
            {
              "type": "Handle",
              "name": "hStyle",
              "decl": "Handle hStyle"
            }
          ]
        },
        {
          "name": "SetTitle",
          "docStart": 7230,
          "docEnd": 7395,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "text",
              "decl": "const char[] text"
            },
            {
              "type": "bool",
              "name": "onlyIfEmpty",
              "decl": "bool onlyIfEmpty"
            }
          ]
        },
        {
          "name": "DrawItem",
          "docStart": 7474,
          "docEnd": 7912,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "text",
              "decl": "const char[] text"
            },
            {
              "type": "int",
              "name": "style",
              "decl": "int style"
            }
          ]
        },
        {
          "name": "DrawText",
          "docStart": 7994,
          "docEnd": 8212,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "text",
              "decl": "const char[] text"
            }
          ]
        },
        {
          "name": "CanDrawFlags",
          "docStart": 8267,
          "docEnd": 8476,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "style",
              "decl": "int style"
            }
          ]
        },
        {
          "name": "SetKeys",
          "docStart": 8527,
          "docEnd": 8923,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "keys",
              "decl": "int keys"
            }
          ]
        },
        {
          "name": "Send",
          "docStart": 8968,
          "docEnd": 9584,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "MenuHandler",
              "name": "handler",
              "decl": "MenuHandler handler"
            },
            {
              "type": "int",
              "name": "time",
              "decl": "int time"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "TextRemaining",
          "docStart": 9659,
          "docEnd": 9903,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "CurrentKey",
          "docStart": 9967,
          "docEnd": 10074,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "Style",
          "docStart": 10166,
          "docEnd": 10242,
          "type": "Handle",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "Menu",
      "docStart": 10304,
      "docEnd": 10360,
      "methods": [
        {
          "name": "Menu",
          "docStart": 10391,
          "docEnd": 10797,
          "returnType": "Menu",
          "arguments": [
            {
              "type": "MenuHandler",
              "name": "handler",
              "decl": "MenuHandler handler"
            },
            {
              "type": "MenuAction",
              "name": "actions",
              "decl": "MenuAction actions"
            }
          ]
        },
        {
          "name": "Display",
          "docStart": 10886,
          "docEnd": 11137,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "int",
              "name": "time",
              "decl": "int time"
            }
          ]
        },
        {
          "name": "DisplayAt",
          "docStart": 11194,
          "docEnd": 11541,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "int",
              "name": "first_item",
              "decl": "int first_item"
            },
            {
              "type": "int",
              "name": "time",
              "decl": "int time"
            }
          ]
        },
        {
          "name": "AddItem",
          "docStart": 11616,
          "docEnd": 12036,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "info",
              "decl": "const char[] info"
            },
            {
              "type": "const char[]",
              "name": "display",
              "decl": "const char[] display"
            },
            {
              "type": "int",
              "name": "style",
              "decl": "int style"
            }
          ]
        },
        {
          "name": "InsertItem",
          "docStart": 12140,
          "docEnd": 12715,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "position",
              "decl": "int position"
            },
            {
              "type": "const char[]",
              "name": "info",
              "decl": "const char[] info"
            },
            {
              "type": "const char[]",
              "name": "display",
              "decl": "const char[] display"
            },
            {
              "type": "int",
              "name": "style",
              "decl": "int style"
            }
          ]
        },
        {
          "name": "RemoveItem",
          "docStart": 12868,
          "docEnd": 13069,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "position",
              "decl": "int position"
            }
          ]
        },
        {
          "name": "RemoveAllItems",
          "docStart": 13121,
          "docEnd": 13154,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetItem",
          "docStart": 13198,
          "docEnd": 13650,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "position",
              "decl": "int position"
            },
            {
              "type": "char[]",
              "name": "infoBuf",
              "decl": "char[] infoBuf"
            },
            {
              "type": "int",
              "name": "infoBufLen",
              "decl": "int infoBufLen"
            },
            {
              "type": "int&",
              "name": "style",
              "decl": "int& style"
            },
            {
              "type": "char[]",
              "name": "dispBuf",
              "decl": "char[] dispBuf"
            },
            {
              "type": "int",
              "name": "dispBufLen",
              "decl": "int dispBufLen"
            }
          ]
        },
        {
          "name": "SetTitle",
          "docStart": 13794,
          "docEnd": 13952,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "fmt",
              "decl": "const char[] fmt"
            },
            {
              "type": "any...",
              "name": "...",
              "decl": "any... ..."
            }
          ]
        },
        {
          "name": "GetTitle",
          "docStart": 14015,
          "docEnd": 14214,
          "returnType": "void",
          "arguments": [
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
          "name": "ToPanel",
          "docStart": 14280,
          "docEnd": 14439,
          "returnType": "Panel",
          "arguments": []
        },
        {
          "name": "Cancel",
          "docStart": 14477,
          "docEnd": 14841,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "DisplayVote",
          "docStart": 14877,
          "docEnd": 15621,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int[]",
              "name": "clients",
              "decl": "int[] clients"
            },
            {
              "type": "int",
              "name": "numClients",
              "decl": "int numClients"
            },
            {
              "type": "int",
              "name": "time",
              "decl": "int time"
            },
            {
              "type": "int",
              "name": "flags",
              "decl": "int flags"
            }
          ]
        },
        {
          "name": "DisplayVoteToAll",
          "docStart": 15714,
          "docEnd": 16038,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "time",
              "decl": "int time"
            },
            {
              "type": "int",
              "name": "flags",
              "decl": "int flags"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "Pagination",
          "docStart": 16354,
          "docEnd": 16549,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "OptionFlags",
          "docStart": 16643,
          "docEnd": 16764,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "ExitButton",
          "docStart": 16859,
          "docEnd": 16957,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "ExitBackButton",
          "docStart": 17053,
          "docEnd": 17319,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "NoVoteButton",
          "docStart": 17419,
          "docEnd": 17537,
          "type": "bool",
          "getter": false,
          "setter": true
        },
        {
          "name": "VoteResultCallback",
          "docStart": 17611,
          "docEnd": 17723,
          "type": "VoteHandler",
          "getter": false,
          "setter": true
        },
        {
          "name": "ItemCount",
          "docStart": 17819,
          "docEnd": 17860,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "Style",
          "docStart": 17920,
          "docEnd": 17989,
          "type": "Handle",
          "getter": true,
          "setter": false
        },
        {
          "name": "Selection",
          "docStart": 18048,
          "docEnd": 18182,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "MenuStyle",
      "docStart": 1653,
      "docEnd": 1702,
      "entries": [
        {
          "name": "MenuStyle_Default",
          "docStart": 1748,
          "docEnd": 1792
        },
        {
          "name": "MenuStyle_Valve",
          "docStart": 1817,
          "docEnd": 1870
        },
        {
          "name": "MenuStyle_Radio",
          "docStart": 1895,
          "docEnd": 1947
        }
      ]
    },
    {
      "name": "MenuAction",
      "docStart": 1955,
      "docEnd": 2014,
      "entries": [
        {
          "name": "MenuAction_Start",
          "docStart": 2065,
          "docEnd": 2113
        },
        {
          "name": "MenuAction_Display",
          "docStart": 2145,
          "docEnd": 2225
        },
        {
          "name": "MenuAction_Select",
          "docStart": 2257,
          "docEnd": 2314
        },
        {
          "name": "MenuAction_Cancel",
          "docStart": 2346,
          "docEnd": 2407
        },
        {
          "name": "MenuAction_End"
        },
        {
          "name": "MenuAction_VoteEnd",
          "docStart": 2436,
          "docEnd": 2634
        },
        {
          "name": "MenuAction_VoteStart",
          "docStart": 2666,
          "docEnd": 2821
        },
        {
          "name": "MenuAction_VoteCancel",
          "docStart": 2956,
          "docEnd": 3027
        },
        {
          "name": "MenuAction_DrawItem",
          "docStart": 3060,
          "docEnd": 3141
        },
        {
          "name": "MenuAction_DisplayItem"
        }
      ]
    },
    {
      "name": "MenuSource",
      "docStart": 6206,
      "docEnd": 6244,
      "entries": [
        {
          "name": "MenuSource_None",
          "docStart": 6290,
          "docEnd": 6324
        },
        {
          "name": "MenuSource_External",
          "docStart": 6354,
          "docEnd": 6375
        },
        {
          "name": "MenuSource_Normal",
          "docStart": 6403,
          "docEnd": 6442
        },
        {
          "name": "MenuSource_RawPanel",
          "docStart": 6471,
          "docEnd": 6528
        }
      ]
    }
  ],
  "constants": [
    {
      "name": "MenuCancel_Disconnected",
      "docStart": 5134,
      "docEnd": 5172
    },
    {
      "name": "MenuCancel_Interrupted",
      "docStart": 5204,
      "docEnd": 5252
    },
    {
      "name": "MenuCancel_Exit",
      "docStart": 5279,
      "docEnd": 5311
    },
    {
      "name": "MenuCancel_NoDisplay",
      "docStart": 5342,
      "docEnd": 5391
    },
    {
      "name": "MenuCancel_Timeout",
      "docStart": 5420,
      "docEnd": 5442
    },
    {
      "name": "MenuCancel_ExitBack",
      "docStart": 5472,
      "docEnd": 5527
    },
    {
      "name": "VoteCancel_Generic",
      "docStart": 5642,
      "docEnd": 5681
    },
    {
      "name": "VoteCancel_NoVotes",
      "docStart": 5710,
      "docEnd": 5749
    },
    {
      "name": "MenuEnd_Selected",
      "docStart": 5844,
      "docEnd": 5874
    },
    {
      "name": "MenuEnd_VotingDone",
      "docStart": 5903,
      "docEnd": 5926
    },
    {
      "name": "MenuEnd_VotingCancelled",
      "docStart": 5959,
      "docEnd": 5987
    },
    {
      "name": "MenuEnd_Cancelled",
      "docStart": 6016,
      "docEnd": 6061
    },
    {
      "name": "MenuEnd_Exit",
      "docStart": 6086,
      "docEnd": 6128
    },
    {
      "name": "MenuEnd_ExitBack",
      "docStart": 6156,
      "docEnd": 6198
    }
  ],
  "typesets": [
    {
      "name": "VoteHandler",
      "docStart": 29764,
      "docEnd": 30234,
      "types": [
        {
          "type": "function void(Menu menu, int num_votes, int num_clients, const int client_info[][2], int num_items, const int item_info[][2])",
          "docStart": 30261,
          "docEnd": 30273
        },
        {
          "type": "function void(Menu menu, int num_votes, int num_clients, const int[][] client_info, int num_items, const int[][] item_info)",
          "docStart": 30429,
          "docEnd": 30441
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "MenuHandler",
      "docStart": 6536,
      "docEnd": 6811,
      "type": "function int(Menu menu, MenuAction action, int param1, int param2)"
    }
  ]
}