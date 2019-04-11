{
  "functions": [
    {
      "name": "RegClientCookie",
      "docStart": 2999,
      "docEnd": 3533,
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
      "docStart": 3635,
      "docEnd": 3918,
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
      "docStart": 3974,
      "docEnd": 4221,
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
      "docStart": 4302,
      "docEnd": 4609,
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
      "docStart": 4697,
      "docEnd": 4971,
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
      "docStart": 5061,
      "docEnd": 5259,
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
      "docStart": 5312,
      "docEnd": 5434,
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
      "docStart": 5883,
      "docEnd": 6365,
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
      "docStart": 6513,
      "docEnd": 6870,
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
      "docStart": 6965,
      "docEnd": 7054,
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
      "docStart": 7099,
      "docEnd": 7212,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "ReadCookieIterator",
      "docStart": 7252,
      "docEnd": 7658,
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
      "docStart": 7844,
      "docEnd": 8029,
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
      "docStart": 8086,
      "docEnd": 8262,
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
  "methodmaps": [],
  "enums": [
    {
      "name": "CookieAccess",
      "docStart": 1649,
      "docEnd": 1700,
      "entries": [
        {
          "name": "CookieAccess_Public",
          "docStart": 1748,
          "docEnd": 1787
        },
        {
          "name": "CookieAccess_Protected",
          "docStart": 1816,
          "docEnd": 1842
        },
        {
          "name": "CookieAccess_Private",
          "docStart": 1869,
          "docEnd": 1901
        }
      ]
    },
    {
      "name": "CookieMenu",
      "docStart": 1909,
      "docEnd": 1946,
      "entries": [
        {
          "name": "CookieMenu_YesNo",
          "docStart": 1989,
          "docEnd": 2054
        },
        {
          "name": "CookieMenu_YesNo_Int",
          "docStart": 2080,
          "docEnd": 2130
        },
        {
          "name": "CookieMenu_OnOff",
          "docStart": 2153,
          "docEnd": 2218
        },
        {
          "name": "CookieMenu_OnOff_Int",
          "docStart": 2244,
          "docEnd": 2294
        }
      ]
    },
    {
      "name": "CookieMenuAction",
      "entries": [
        {
          "name": "CookieMenuAction_DisplayOption",
          "docStart": 2329,
          "docEnd": 2490
        },
        {
          "name": "CookieMenuAction_SelectOption",
          "docStart": 2534,
          "docEnd": 2639
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "CookieMenuHandler",
      "docStart": 5487,
      "docEnd": 5742,
      "type": "function void(int client, CookieMenuAction action, any info, char[] buffer, int maxlen)"
    }
  ]
}