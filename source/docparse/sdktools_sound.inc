{
  "functions": [
    {
      "name": "PrefetchSound",
      "docStart": 4755,
      "docEnd": 4856,
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
      "docStart": 5254,
      "docEnd": 5639,
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
      "docStart": 5922,
      "docEnd": 6264,
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
      "docStart": 6371,
      "docEnd": 6534,
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
      "docStart": 6606,
      "docEnd": 7360,
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
      "docStart": 7853,
      "docEnd": 8835,
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
      "docStart": 9384,
      "docEnd": 10139,
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
      "docStart": 10613,
      "docEnd": 11016,
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
      "docStart": 13698,
      "docEnd": 13826,
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
      "docStart": 13883,
      "docEnd": 14010,
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
      "docStart": 14065,
      "docEnd": 14196,
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
      "docStart": 14256,
      "docEnd": 14386,
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
      "docStart": 14449,
      "docEnd": 15057,
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
      "docStart": 15829,
      "docEnd": 16405,
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
      "docStart": 17187,
      "docEnd": 17362,
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
      "docStart": 17494,
      "docEnd": 18222,
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
      "docStart": 18436,
      "docEnd": 19395,
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
      "docStart": 20124,
      "docEnd": 20649,
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
      "docStart": 21253,
      "docEnd": 22046,
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
      "docStart": 22656,
      "docEnd": 23394,
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
      "docStart": 24023,
      "docEnd": 24670,
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
      "docStart": 1974,
      "docEnd": 1989
    },
    {
      "name": "SNDCHAN_AUTO",
      "docStart": 2012,
      "docEnd": 2024
    },
    {
      "name": "SNDCHAN_WEAPON",
      "docStart": 2049,
      "docEnd": 2064
    },
    {
      "name": "SNDCHAN_VOICE",
      "docStart": 2088,
      "docEnd": 2102
    },
    {
      "name": "SNDCHAN_ITEM",
      "docStart": 2125,
      "docEnd": 2138
    },
    {
      "name": "SNDCHAN_BODY",
      "docStart": 2161,
      "docEnd": 2176
    },
    {
      "name": "SNDCHAN_STREAM",
      "docStart": 2201,
      "docEnd": 2257
    },
    {
      "name": "SNDCHAN_STATIC",
      "docStart": 2282,
      "docEnd": 2327
    },
    {
      "name": "SNDCHAN_VOICE_BASE",
      "docStart": 2355,
      "docEnd": 2395
    },
    {
      "name": "SNDCHAN_USER_BASE",
      "docStart": 2423,
      "docEnd": 2473
    },
    {
      "name": "SND_NOFLAGS",
      "docStart": 2565,
      "docEnd": 2580
    },
    {
      "name": "SND_CHANGEVOL",
      "docStart": 2603,
      "docEnd": 2630
    },
    {
      "name": "SND_CHANGEPITCH",
      "docStart": 2654,
      "docEnd": 2680
    },
    {
      "name": "SND_STOP",
      "docStart": 2699,
      "docEnd": 2721
    },
    {
      "name": "SND_SPAWNING",
      "docStart": 2743,
      "docEnd": 2782
    },
    {
      "name": "SND_DELAY",
      "docStart": 2802,
      "docEnd": 2836
    },
    {
      "name": "SND_STOPLOOPING",
      "docStart": 2860,
      "docEnd": 2905
    },
    {
      "name": "SND_SPEAKER",
      "docStart": 2926,
      "docEnd": 2973
    },
    {
      "name": "SND_SHOULDPAUSE",
      "docStart": 2997,
      "docEnd": 3028
    },
    {
      "name": "SNDLEVEL_NONE",
      "docStart": 3120,
      "docEnd": 3132
    },
    {
      "name": "SNDLEVEL_RUSTLE",
      "docStart": 3158,
      "docEnd": 3181
    },
    {
      "name": "SNDLEVEL_WHISPER",
      "docStart": 3208,
      "docEnd": 3226
    },
    {
      "name": "SNDLEVEL_LIBRARY",
      "docStart": 3253,
      "docEnd": 3273
    },
    {
      "name": "SNDLEVEL_FRIDGE",
      "docStart": 3299,
      "docEnd": 3319
    },
    {
      "name": "SNDLEVEL_HOME",
      "docStart": 3344,
      "docEnd": 3375
    },
    {
      "name": "SNDLEVEL_CONVO",
      "docStart": 3400,
      "docEnd": 3438
    },
    {
      "name": "SNDLEVEL_DRYER",
      "docStart": 3463,
      "docEnd": 3484
    },
    {
      "name": "SNDLEVEL_DISHWASHER",
      "docStart": 3513,
      "docEnd": 3558
    },
    {
      "name": "SNDLEVEL_CAR",
      "docStart": 3582,
      "docEnd": 3622
    },
    {
      "name": "SNDLEVEL_NORMAL",
      "docStart": 3648,
      "docEnd": 3674
    },
    {
      "name": "SNDLEVEL_TRAFFIC",
      "docStart": 3701,
      "docEnd": 3732
    },
    {
      "name": "SNDLEVEL_MINIBIKE",
      "docStart": 3760,
      "docEnd": 3801
    },
    {
      "name": "SNDLEVEL_SCREAMING",
      "docStart": 3829,
      "docEnd": 3863
    },
    {
      "name": "SNDLEVEL_TRAIN",
      "docStart": 3889,
      "docEnd": 3937
    },
    {
      "name": "SNDLEVEL_HELICOPTER",
      "docStart": 3967,
      "docEnd": 3985
    },
    {
      "name": "SNDLEVEL_SNOWMOBILE",
      "docStart": 4015,
      "docEnd": 4034
    },
    {
      "name": "SNDLEVEL_AIRCRAFT",
      "docStart": 4062,
      "docEnd": 4089
    },
    {
      "name": "SNDLEVEL_RAIDSIREN",
      "docStart": 4118,
      "docEnd": 4140
    },
    {
      "name": "SNDLEVEL_GUNFIRE",
      "docStart": 4168,
      "docEnd": 4207
    },
    {
      "name": "SNDLEVEL_ROCKET",
      "docStart": 4234,
      "docEnd": 4269
    }
  ],
  "typesets": [
    {
      "name": "NormalSHook",
      "types": [
        {
          "type": "function Action(int clients[], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags, char soundEntry[], int& seed)",
          "docStart": 11986,
          "docEnd": 12994
        },
        {
          "type": "function Action(int clients[64], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags, char soundEntry[], int& seed)",
          "docStart": 13227,
          "docEnd": 13262
        },
        {
          "type": "function Action(int clients[64], int& numClients, char sample[], int& entity, int& channel, float& volume, int& level, int& pitch, int& flags)",
          "docStart": 13487,
          "docEnd": 13522
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "AmbientSHook",
      "docStart": 11093,
      "docEnd": 11764,
      "type": "function Action(char sample[], int& entity, float& volume, int& level, int& pitch, float pos[3], int& flags, float& delay)"
    }
  ]
}