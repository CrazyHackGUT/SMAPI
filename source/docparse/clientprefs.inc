{
  "functions": [
    {
      "name": "RegClientCookie",
      "docStart": 6468,
      "docEnd": 7038,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "description",
          "decl": "const char[] description"
        },
        {
          "type": "CookieAccess",
          "name": "access",
          "decl": "CookieAccess access"
        }
      ]
    },
    {
      "name": "FindClientCookie",
      "docStart": 7140,
      "docEnd": 7440,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SetClientCookie",
      "docStart": 7496,
      "docEnd": 7772,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "GetClientCookie",
      "docStart": 7853,
      "docEnd": 8195,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "SetAuthIdCookie",
      "docStart": 8283,
      "docEnd": 8587,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "authID",
          "decl": "const char[] authID"
        },
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "AreClientCookiesCached",
      "docStart": 8677,
      "docEnd": 8901,
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
      "name": "OnClientCookiesCached",
      "docStart": 8954,
      "docEnd": 9082,
      "kind": "forward",
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
      "name": "SetCookiePrefabMenu",
      "docStart": 9135,
      "docEnd": 9658,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        },
        {
          "type": "CookieMenu",
          "name": "type",
          "decl": "CookieMenu type"
        },
        {
          "type": "const char[]",
          "name": "display",
          "decl": "const char[] display"
        },
        {
          "type": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen)",
          "name": "handler",
          "decl": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen) handler"
        },
        {
          "type": "any",
          "name": "info",
          "decl": "any info"
        }
      ]
    },
    {
      "name": "SetCookieMenuItem",
      "docStart": 9806,
      "docEnd": 10191,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen)",
          "name": "handler",
          "decl": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen) handler"
        },
        {
          "type": "any",
          "name": "info",
          "decl": "any info"
        },
        {
          "type": "const char[]",
          "name": "display",
          "decl": "const char[] display"
        }
      ]
    },
    {
      "name": "ShowCookieMenu",
      "docStart": 10286,
      "docEnd": 10381,
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
      "name": "GetCookieIterator",
      "docStart": 10426,
      "docEnd": 10549,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "ReadCookieIterator",
      "docStart": 10589,
      "docEnd": 11042,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "iter",
          "decl": "Handle iter"
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
        },
        {
          "type": "CookieAccess&",
          "name": "access",
          "decl": "CookieAccess& access"
        },
        {
          "type": "char[]",
          "name": "desc",
          "decl": "char[] desc"
        },
        {
          "type": "int",
          "name": "descLen",
          "decl": "int descLen"
        }
      ]
    },
    {
      "name": "GetCookieAccess",
      "docStart": 11220,
      "docEnd": 11431,
      "kind": "native",
      "returnType": "CookieAccess",
      "arguments": [
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        }
      ]
    },
    {
      "name": "GetClientCookieTime",
      "docStart": 11488,
      "docEnd": 11687,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "cookie",
          "decl": "Handle cookie"
        }
      ]
    },
    {
      "name": "__ext_cprefs_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "Cookie",
      "methods": [
        {
          "name": "Cookie",
          "docStart": 3504,
          "docEnd": 4055,
          "returnType": "Cookie",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "const char[]",
              "name": "description",
              "decl": "const char[] description"
            },
            {
              "type": "CookieAccess",
              "name": "access",
              "decl": "CookieAccess access"
            }
          ]
        },
        {
          "name": "Find",
          "docStart": 4150,
          "docEnd": 4441,
          "returnType": "Cookie",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            }
          ]
        },
        {
          "name": "Set",
          "docStart": 4501,
          "docEnd": 4713,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "Get",
          "docStart": 4776,
          "docEnd": 5055,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlen",
              "decl": "int maxlen"
            }
          ]
        },
        {
          "name": "SetByAuthId",
          "docStart": 5125,
          "docEnd": 5365,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "authID",
              "decl": "const char[] authID"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "SetPrefabMenu",
          "docStart": 5445,
          "docEnd": 5908,
          "returnType": "void",
          "arguments": [
            {
              "type": "CookieMenu",
              "name": "type",
              "decl": "CookieMenu type"
            },
            {
              "type": "const char[]",
              "name": "display",
              "decl": "const char[] display"
            },
            {
              "type": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen)",
              "name": "handler",
              "decl": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen) handler"
            },
            {
              "type": "any",
              "name": "info",
              "decl": "any info"
            }
          ]
        },
        {
          "name": "GetClientTime",
          "docStart": 6044,
          "docEnd": 6196,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "AccessLevel",
          "docStart": 6248,
          "docEnd": 6394,
          "type": "CookieAccess",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "CookieAccess",
      "docStart": 1649,
      "docEnd": 1700,
      "entries": [
        {
          "name": "CookieAccess_Public",
          "docStart": 1757,
          "docEnd": 1796
        },
        {
          "name": "CookieAccess_Protected",
          "docStart": 1831,
          "docEnd": 1857
        },
        {
          "name": "CookieAccess_Private",
          "docStart": 1892,
          "docEnd": 1924
        }
      ]
    },
    {
      "name": "CookieMenu",
      "docStart": 1932,
      "docEnd": 1969,
      "entries": [
        {
          "name": "CookieMenu_YesNo",
          "docStart": 2020,
          "docEnd": 2085
        },
        {
          "name": "CookieMenu_YesNo_Int",
          "docStart": 2116,
          "docEnd": 2166
        },
        {
          "name": "CookieMenu_OnOff",
          "docStart": 2197,
          "docEnd": 2262
        },
        {
          "name": "CookieMenu_OnOff_Int",
          "docStart": 2293,
          "docEnd": 2343
        }
      ]
    },
    {
      "name": "CookieMenuAction",
      "entries": [
        {
          "name": "CookieMenuAction_DisplayOption",
          "docStart": 2378,
          "docEnd": 2539
        },
        {
          "name": "CookieMenuAction_SelectOption",
          "docStart": 2583,
          "docEnd": 2688
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "CookieMenuHandler",
      "docStart": 2732,
      "docEnd": 3018,
      "type": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen)"
    }
  ]
}