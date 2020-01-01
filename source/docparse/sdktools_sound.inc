{
  "functions": [
    {
      "name": "PrefetchSound",
      "docStart": 5060,
      "docEnd": 5169,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "GetSoundDuration",
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "EmitAmbientSound",
      "docStart": 5636,
      "docEnd": 6082,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "vol",
          "decl": "float vol"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    },
    {
      "name": "FadeClientVolume",
      "docStart": 6365,
      "docEnd": 6750,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float",
          "name": "percent",
          "decl": "float percent"
        },
        {
          "type": "float",
          "name": "outtime",
          "decl": "float outtime"
        },
        {
          "type": "float",
          "name": "holdtime",
          "decl": "float holdtime"
        },
        {
          "type": "float",
          "name": "intime",
          "decl": "float intime"
        }
      ]
    },
    {
      "name": "StopSound",
      "docStart": 6857,
      "docEnd": 7041,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "EmitSound",
      "docStart": 7113,
      "docEnd": 7955,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "const char[]",
          "name": "sample",
          "decl": "const char[] sample"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "volume",
          "decl": "float volume"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "EmitSoundEntry",
      "docStart": 8448,
      "docEnd": 9528,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "const char[]",
          "name": "soundEntry",
          "decl": "const char[] soundEntry"
        },
        {
          "type": "const char[]",
          "name": "sample",
          "decl": "const char[] sample"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "seed",
          "decl": "int seed"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "volume",
          "decl": "float volume"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "EmitSentence",
      "docStart": 10077,
      "docEnd": 10918,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "int",
          "name": "sentence",
          "decl": "int sentence"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "volume",
          "decl": "float volume"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "GetDistGainFromSoundLevel",
      "docStart": 11387,
      "docEnd": 11809,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "soundlevel",
          "decl": "int soundlevel"
        },
        {
          "type": "float",
          "name": "distance",
          "decl": "float distance"
        }
      ]
    },
    {
      "name": "AddAmbientSoundHook",
      "docStart": 14574,
      "docEnd": 14723,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AmbientSHook",
          "name": "hook",
          "decl": "AmbientSHook hook"
        }
      ]
    },
    {
      "name": "AddNormalSoundHook",
      "docStart": 14780,
      "docEnd": 14928,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "NormalSHook",
          "name": "hook",
          "decl": "NormalSHook hook"
        }
      ]
    },
    {
      "name": "RemoveAmbientSoundHook",
      "docStart": 14983,
      "docEnd": 15135,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AmbientSHook",
          "name": "hook",
          "decl": "AmbientSHook hook"
        }
      ]
    },
    {
      "name": "RemoveNormalSoundHook",
      "docStart": 15195,
      "docEnd": 15346,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "NormalSHook",
          "name": "hook",
          "decl": "NormalSHook hook"
        }
      ]
    },
    {
      "name": "EmitSoundToClient",
      "docStart": 15404,
      "docEnd": 16090,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "sample",
          "decl": "const char[] sample"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "volume",
          "decl": "float volume"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        }
      ]
    },
    {
      "name": "EmitSoundToAll",
      "docStart": 16861,
      "docEnd": 17509,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "sample",
          "decl": "const char[] sample"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "int",
          "name": "level",
          "decl": "int level"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "volume",
          "decl": "float volume"
        },
        {
          "type": "int",
          "name": "pitch",
          "decl": "int pitch"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        }
      ]
    },
    {
      "name": "ATTN_TO_SNDLEVEL",
      "docStart": 18276,
      "docEnd": 18468,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "float",
          "name": "attn",
          "decl": "float attn"
        }
      ]
    },
    {
      "name": "GetGameSoundParams",
      "docStart": 18600,
      "docEnd": 19395,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "gameSound",
          "decl": "const char[] gameSound"
        },
        {
          "type": "int&",
          "name": "channel",
          "decl": "int& channel"
        },
        {
          "type": "int&",
          "name": "soundLevel",
          "decl": "int& soundLevel"
        },
        {
          "type": "float&",
          "name": "volume",
          "decl": "float& volume"
        },
        {
          "type": "int&",
          "name": "pitch",
          "decl": "int& pitch"
        },
        {
          "type": "char[]",
          "name": "sample",
          "decl": "char[] sample"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "EmitGameSound",
      "docStart": 19609,
      "docEnd": 20468,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "const char[]",
          "name": "gameSound",
          "decl": "const char[] gameSound"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        }
      ]
    },
    {
      "name": "EmitAmbientGameSound",
      "docStart": 21182,
      "docEnd": 21656,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "gameSound",
          "decl": "const char[] gameSound"
        },
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    },
    {
      "name": "EmitGameSoundToClient",
      "docStart": 22245,
      "docEnd": 22952,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "gameSound",
          "decl": "const char[] gameSound"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        }
      ]
    },
    {
      "name": "EmitGameSoundToAll",
      "docStart": 23562,
      "docEnd": 24229,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "gameSound",
          "decl": "const char[] gameSound"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "speakerentity",
          "decl": "int speakerentity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "updatePos",
          "decl": "bool updatePos"
        },
        {
          "type": "float",
          "name": "soundtime",
          "decl": "float soundtime"
        }
      ]
    },
    {
      "name": "PrecacheScriptSound",
      "docStart": 24853,
      "docEnd": 25523,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "soundname",
          "decl": "const char[] soundname"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [
    {
      "name": "SNDCHAN_REPLACE",
      "docStart": 1988,
      "docEnd": 2003
    },
    {
      "name": "SNDCHAN_AUTO",
      "docStart": 2034,
      "docEnd": 2046
    },
    {
      "name": "SNDCHAN_WEAPON",
      "docStart": 2077,
      "docEnd": 2092
    },
    {
      "name": "SNDCHAN_VOICE",
      "docStart": 2123,
      "docEnd": 2137
    },
    {
      "name": "SNDCHAN_ITEM",
      "docStart": 2168,
      "docEnd": 2181
    },
    {
      "name": "SNDCHAN_BODY",
      "docStart": 2212,
      "docEnd": 2227
    },
    {
      "name": "SNDCHAN_STREAM",
      "docStart": 2258,
      "docEnd": 2314
    },
    {
      "name": "SNDCHAN_STATIC",
      "docStart": 2345,
      "docEnd": 2390
    },
    {
      "name": "SNDCHAN_VOICE_BASE",
      "docStart": 2421,
      "docEnd": 2461
    },
    {
      "name": "SNDCHAN_USER_BASE",
      "docStart": 2492,
      "docEnd": 2542
    },
    {
      "name": "SND_NOFLAGS",
      "docStart": 2644,
      "docEnd": 2659
    },
    {
      "name": "SND_CHANGEVOL",
      "docStart": 2690,
      "docEnd": 2717
    },
    {
      "name": "SND_CHANGEPITCH",
      "docStart": 2748,
      "docEnd": 2774
    },
    {
      "name": "SND_STOP",
      "docStart": 2805,
      "docEnd": 2827
    },
    {
      "name": "SND_SPAWNING",
      "docStart": 2858,
      "docEnd": 2897
    },
    {
      "name": "SND_DELAY",
      "docStart": 2928,
      "docEnd": 2962
    },
    {
      "name": "SND_STOPLOOPING",
      "docStart": 2993,
      "docEnd": 3038
    },
    {
      "name": "SND_SPEAKER",
      "docStart": 3069,
      "docEnd": 3116
    },
    {
      "name": "SND_SHOULDPAUSE",
      "docStart": 3147,
      "docEnd": 3178
    },
    {
      "name": "SNDLEVEL_NONE",
      "docStart": 3277,
      "docEnd": 3289
    },
    {
      "name": "SNDLEVEL_RUSTLE",
      "docStart": 3320,
      "docEnd": 3343
    },
    {
      "name": "SNDLEVEL_WHISPER",
      "docStart": 3374,
      "docEnd": 3392
    },
    {
      "name": "SNDLEVEL_LIBRARY",
      "docStart": 3423,
      "docEnd": 3443
    },
    {
      "name": "SNDLEVEL_FRIDGE",
      "docStart": 3474,
      "docEnd": 3494
    },
    {
      "name": "SNDLEVEL_HOME",
      "docStart": 3525,
      "docEnd": 3556
    },
    {
      "name": "SNDLEVEL_CONVO",
      "docStart": 3587,
      "docEnd": 3625
    },
    {
      "name": "SNDLEVEL_DRYER",
      "docStart": 3656,
      "docEnd": 3677
    },
    {
      "name": "SNDLEVEL_DISHWASHER",
      "docStart": 3708,
      "docEnd": 3753
    },
    {
      "name": "SNDLEVEL_CAR",
      "docStart": 3784,
      "docEnd": 3824
    },
    {
      "name": "SNDLEVEL_NORMAL",
      "docStart": 3855,
      "docEnd": 3881
    },
    {
      "name": "SNDLEVEL_TRAFFIC",
      "docStart": 3912,
      "docEnd": 3943
    },
    {
      "name": "SNDLEVEL_MINIBIKE",
      "docStart": 3974,
      "docEnd": 4015
    },
    {
      "name": "SNDLEVEL_SCREAMING",
      "docStart": 4046,
      "docEnd": 4080
    },
    {
      "name": "SNDLEVEL_TRAIN",
      "docStart": 4111,
      "docEnd": 4159
    },
    {
      "name": "SNDLEVEL_HELICOPTER",
      "docStart": 4190,
      "docEnd": 4208
    },
    {
      "name": "SNDLEVEL_SNOWMOBILE",
      "docStart": 4239,
      "docEnd": 4258
    },
    {
      "name": "SNDLEVEL_AIRCRAFT",
      "docStart": 4289,
      "docEnd": 4316
    },
    {
      "name": "SNDLEVEL_RAIDSIREN",
      "docStart": 4347,
      "docEnd": 4369
    },
    {
      "name": "SNDLEVEL_GUNFIRE",
      "docStart": 4400,
      "docEnd": 4439
    },
    {
      "name": "SNDLEVEL_ROCKET",
      "docStart": 4470,
      "docEnd": 4505
    }
  ],
  "typesets": [
    {
      "name": "NormalSHook",
      "types": [
        {
          "type": "function Action(int clients[], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags, char soundEntry[], int& seed)",
          "docStart": 12865,
          "docEnd": 13872
        },
        {
          "type": "function Action(int clients[64], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags, char soundEntry[], int& seed)",
          "docStart": 14104,
          "docEnd": 14139
        },
        {
          "type": "function Action(int clients[64], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags)",
          "docStart": 14363,
          "docEnd": 14398
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "AmbientSHook",
      "docStart": 11886,
      "docEnd": 12643,
      "type": "function Action(char sample[], int& entity, float& volume, int& level, int& pitch, float pos[3], int& flags, float& delay)"
    }
  ]
}