{
  "functions": [
    {
      "name": "CreateMenu",
      "docStart": 18722,
      "docEnd": 19174,
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
      "docStart": 19265,
      "docEnd": 19577,
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
      "docStart": 19642,
      "docEnd": 20043,
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
      "docStart": 20130,
      "docEnd": 20608,
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
      "docStart": 20741,
      "docEnd": 21364,
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
      "docStart": 21517,
      "docEnd": 21772,
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
      "docStart": 21832,
      "docEnd": 21975,
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
      "docStart": 22025,
      "docEnd": 22558,
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
      "docStart": 22740,
      "docEnd": 23228,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetMenuItemCount",
      "docStart": 23272,
      "docEnd": 23460,
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
      "docStart": 23507,
      "docEnd": 23996,
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
      "docStart": 24063,
      "docEnd": 24247,
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
      "docStart": 24295,
      "docEnd": 24537,
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
      "docStart": 24583,
      "docEnd": 24827,
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
      "docStart": 24898,
      "docEnd": 25182,
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
      "docStart": 25255,
      "docEnd": 25500,
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
      "docStart": 25552,
      "docEnd": 25821,
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
      "docStart": 25870,
      "docEnd": 26517,
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
      "docStart": 26579,
      "docEnd": 27013,
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
      "docStart": 27066,
      "docEnd": 27484,
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
      "docStart": 27550,
      "docEnd": 27892,
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
      "docStart": 27956,
      "docEnd": 28406,
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
      "docStart": 28448,
      "docEnd": 28631,
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
      "docStart": 28680,
      "docEnd": 29074,
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
      "docStart": 29135,
      "docEnd": 29316,
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
      "docStart": 29379,
      "docEnd": 29477,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "VoteMenu",
      "docStart": 29508,
      "docEnd": 30304,
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
      "docStart": 30398,
      "docEnd": 30806,
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
      "docStart": 31990,
      "docEnd": 32251,
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
      "docStart": 32326,
      "docEnd": 32580,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "IsClientInVotePool",
      "docStart": 32614,
      "docEnd": 32989,
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
      "docStart": 33038,
      "docEnd": 33487,
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
      "docStart": 33557,
      "docEnd": 33722,
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
      "docStart": 33778,
      "docEnd": 34165,
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
      "docStart": 34226,
      "docEnd": 34865,
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
      "docStart": 34988,
      "docEnd": 35276,
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
      "docStart": 35346,
      "docEnd": 35762,
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
      "docStart": 35862,
      "docEnd": 36123,
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
      "docStart": 36186,
      "docEnd": 36394,
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
      "docStart": 36442,
      "docEnd": 36700,
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
      "docStart": 36789,
      "docEnd": 37315,
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
      "docStart": 37407,
      "docEnd": 37801,
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
      "docStart": 37866,
      "docEnd": 38167,
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
      "docStart": 38228,
      "docEnd": 38671,
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
      "docStart": 38726,
      "docEnd": 39439,
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
      "docStart": 39532,
      "docEnd": 40011,
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
      "docStart": 40064,
      "docEnd": 40268,
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
      "docStart": 40318,
      "docEnd": 40666,
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
      "docStart": 40726,
      "docEnd": 40933,
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
      "docStart": 40984,
      "docEnd": 41876,
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
      "docStart": 42002,
      "docEnd": 42267,
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
      "docStart": 42416,
      "docEnd": 42762,
      "kind": "stock",
      "returnType": "bool",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "Panel",
      "docStart": 7391,
      "docEnd": 7523,
      "methods": [
        {
          "name": "Panel",
          "docStart": 7555,
          "docEnd": 7669,
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
          "docStart": 7719,
          "docEnd": 7884,
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
          "docStart": 7963,
          "docEnd": 8400,
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
          "docStart": 8482,
          "docEnd": 8700,
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
          "docStart": 8755,
          "docEnd": 8964,
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
          "docStart": 9015,
          "docEnd": 9409,
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
          "docStart": 9454,
          "docEnd": 10069,
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
          "docStart": 10144,
          "docEnd": 10385,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "CurrentKey",
          "docStart": 10449,
          "docEnd": 10556,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "Style",
          "docStart": 10648,
          "docEnd": 10724,
          "type": "Handle",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "Menu",
      "docStart": 10786,
      "docEnd": 10842,
      "methods": [
        {
          "name": "Menu",
          "docStart": 10873,
          "docEnd": 11277,
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
          "docStart": 11366,
          "docEnd": 11617,
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
          "docStart": 11674,
          "docEnd": 12021,
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
          "docStart": 12096,
          "docEnd": 12515,
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
          "docStart": 12619,
          "docEnd": 13193,
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
          "docStart": 13346,
          "docEnd": 13547,
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
          "docStart": 13599,
          "docEnd": 13632,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetItem",
          "docStart": 13676,
          "docEnd": 14128,
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
          "docStart": 14271,
          "docEnd": 14429,
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
          "docStart": 14492,
          "docEnd": 14691,
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
          "docStart": 14757,
          "docEnd": 14916,
          "returnType": "Panel",
          "arguments": []
        },
        {
          "name": "Cancel",
          "docStart": 14954,
          "docEnd": 15318,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "DisplayVote",
          "docStart": 15354,
          "docEnd": 16096,
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
          "docStart": 16189,
          "docEnd": 16513,
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
          "docStart": 16841,
          "docEnd": 17033,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "OptionFlags",
          "docStart": 17127,
          "docEnd": 17248,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "ExitButton",
          "docStart": 17343,
          "docEnd": 17441,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "ExitBackButton",
          "docStart": 17537,
          "docEnd": 17798,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "NoVoteButton",
          "docStart": 17898,
          "docEnd": 18016,
          "type": "bool",
          "getter": false,
          "setter": true
        },
        {
          "name": "VoteResultCallback",
          "docStart": 18090,
          "docEnd": 18202,
          "type": "VoteHandler",
          "getter": false,
          "setter": true
        },
        {
          "name": "ItemCount",
          "docStart": 18298,
          "docEnd": 18339,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "Style",
          "docStart": 18399,
          "docEnd": 18468,
          "type": "Handle",
          "getter": true,
          "setter": false
        },
        {
          "name": "Selection",
          "docStart": 18527,
          "docEnd": 18660,
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
      "docStart": 1651,
      "docEnd": 1700,
      "entries": [
        {
          "name": "MenuStyle_Default",
          "docStart": 1750,
          "docEnd": 1794
        },
        {
          "name": "MenuStyle_Valve",
          "docStart": 1825,
          "docEnd": 1878
        },
        {
          "name": "MenuStyle_Radio",
          "docStart": 1909,
          "docEnd": 1961
        }
      ]
    },
    {
      "name": "MenuAction",
      "docStart": 1969,
      "docEnd": 2028,
      "entries": [
        {
          "name": "MenuAction_Start",
          "docStart": 2083,
          "docEnd": 2131
        },
        {
          "name": "MenuAction_Display",
          "docStart": 2166,
          "docEnd": 2246
        },
        {
          "name": "MenuAction_Select",
          "docStart": 2281,
          "docEnd": 2338
        },
        {
          "name": "MenuAction_Cancel",
          "docStart": 2373,
          "docEnd": 2434
        },
        {
          "name": "MenuAction_End"
        },
        {
          "name": "MenuAction_VoteEnd",
          "docStart": 2469,
          "docEnd": 2714
        },
        {
          "name": "MenuAction_VoteStart",
          "docStart": 2749,
          "docEnd": 2933
        },
        {
          "name": "MenuAction_VoteCancel",
          "docStart": 3068,
          "docEnd": 3139
        },
        {
          "name": "MenuAction_DrawItem",
          "docStart": 3174,
          "docEnd": 3255
        },
        {
          "name": "MenuAction_DisplayItem"
        }
      ]
    },
    {
      "name": "MenuSource",
      "docStart": 6626,
      "docEnd": 6664,
      "entries": [
        {
          "name": "MenuSource_None",
          "docStart": 6719,
          "docEnd": 6753
        },
        {
          "name": "MenuSource_External",
          "docStart": 6788,
          "docEnd": 6809
        },
        {
          "name": "MenuSource_Normal",
          "docStart": 6844,
          "docEnd": 6883
        },
        {
          "name": "MenuSource_RawPanel",
          "docStart": 6918,
          "docEnd": 6975
        }
      ]
    }
  ],
  "constants": [
    {
      "name": "MenuCancel_Disconnected",
      "docStart": 5477,
      "docEnd": 5515
    },
    {
      "name": "MenuCancel_Interrupted",
      "docStart": 5550,
      "docEnd": 5598
    },
    {
      "name": "MenuCancel_Exit",
      "docStart": 5633,
      "docEnd": 5665
    },
    {
      "name": "MenuCancel_NoDisplay",
      "docStart": 5700,
      "docEnd": 5749
    },
    {
      "name": "MenuCancel_Timeout",
      "docStart": 5784,
      "docEnd": 5806
    },
    {
      "name": "MenuCancel_ExitBack",
      "docStart": 5841,
      "docEnd": 5896
    },
    {
      "name": "VoteCancel_Generic",
      "docStart": 6017,
      "docEnd": 6056
    },
    {
      "name": "VoteCancel_NoVotes",
      "docStart": 6091,
      "docEnd": 6130
    },
    {
      "name": "MenuEnd_Selected",
      "docStart": 6233,
      "docEnd": 6263
    },
    {
      "name": "MenuEnd_VotingDone",
      "docStart": 6298,
      "docEnd": 6321
    },
    {
      "name": "MenuEnd_VotingCancelled",
      "docStart": 6356,
      "docEnd": 6384
    },
    {
      "name": "MenuEnd_Cancelled",
      "docStart": 6419,
      "docEnd": 6464
    },
    {
      "name": "MenuEnd_Exit",
      "docStart": 6499,
      "docEnd": 6541
    },
    {
      "name": "MenuEnd_ExitBack",
      "docStart": 6576,
      "docEnd": 6618
    }
  ],
  "typesets": [
    {
      "name": "VoteHandler",
      "docStart": 31127,
      "docEnd": 31626,
      "types": [
        {
          "type": "function void(Menu menu, int num_votes, int num_clients, const int client_info[][2], int num_items, const int item_info[][2])",
          "docStart": 31653,
          "docEnd": 31665
        },
        {
          "type": "function void(Menu menu, int num_votes, int num_clients, const int[][] client_info, int num_items, const int[][] item_info)",
          "docStart": 31821,
          "docEnd": 31833
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "MenuHandler",
      "docStart": 6983,
      "docEnd": 7295,
      "type": "function int(Menu menu, MenuAction action, int param1, int param2)"
    }
  ]
}