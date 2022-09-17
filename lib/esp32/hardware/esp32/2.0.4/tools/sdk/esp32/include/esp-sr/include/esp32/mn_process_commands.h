#pragma once
#include "esp_mn_iface.h"
#define SPEECH_COMMANDS_NUM 99
#if CONFIG_SR_MN_CHINESE
#define MN_SPEECH_COMMAND_ID0   CONFIG_CN_SPEECH_COMMAND_ID0
#define MN_SPEECH_COMMAND_ID1   CONFIG_CN_SPEECH_COMMAND_ID1
#define MN_SPEECH_COMMAND_ID2   CONFIG_CN_SPEECH_COMMAND_ID2
#define MN_SPEECH_COMMAND_ID3   CONFIG_CN_SPEECH_COMMAND_ID3
#define MN_SPEECH_COMMAND_ID4   CONFIG_CN_SPEECH_COMMAND_ID4
#define MN_SPEECH_COMMAND_ID5   CONFIG_CN_SPEECH_COMMAND_ID5
#define MN_SPEECH_COMMAND_ID6   CONFIG_CN_SPEECH_COMMAND_ID6
#define MN_SPEECH_COMMAND_ID7   CONFIG_CN_SPEECH_COMMAND_ID7
#define MN_SPEECH_COMMAND_ID8   CONFIG_CN_SPEECH_COMMAND_ID8
#define MN_SPEECH_COMMAND_ID9   CONFIG_CN_SPEECH_COMMAND_ID9
#define MN_SPEECH_COMMAND_ID10   CONFIG_CN_SPEECH_COMMAND_ID10
#define MN_SPEECH_COMMAND_ID11   CONFIG_CN_SPEECH_COMMAND_ID11
#define MN_SPEECH_COMMAND_ID12   CONFIG_CN_SPEECH_COMMAND_ID12
#define MN_SPEECH_COMMAND_ID13   CONFIG_CN_SPEECH_COMMAND_ID13
#define MN_SPEECH_COMMAND_ID14   CONFIG_CN_SPEECH_COMMAND_ID14
#define MN_SPEECH_COMMAND_ID15   CONFIG_CN_SPEECH_COMMAND_ID15
#define MN_SPEECH_COMMAND_ID16   CONFIG_CN_SPEECH_COMMAND_ID16
#define MN_SPEECH_COMMAND_ID17   CONFIG_CN_SPEECH_COMMAND_ID17
#define MN_SPEECH_COMMAND_ID18   CONFIG_CN_SPEECH_COMMAND_ID18
#define MN_SPEECH_COMMAND_ID19   CONFIG_CN_SPEECH_COMMAND_ID19
#define MN_SPEECH_COMMAND_ID20   CONFIG_CN_SPEECH_COMMAND_ID20
#define MN_SPEECH_COMMAND_ID21   CONFIG_CN_SPEECH_COMMAND_ID21
#define MN_SPEECH_COMMAND_ID22   CONFIG_CN_SPEECH_COMMAND_ID22
#define MN_SPEECH_COMMAND_ID23   CONFIG_CN_SPEECH_COMMAND_ID23
#define MN_SPEECH_COMMAND_ID24   CONFIG_CN_SPEECH_COMMAND_ID24
#define MN_SPEECH_COMMAND_ID25   CONFIG_CN_SPEECH_COMMAND_ID25
#define MN_SPEECH_COMMAND_ID26   CONFIG_CN_SPEECH_COMMAND_ID26
#define MN_SPEECH_COMMAND_ID27   CONFIG_CN_SPEECH_COMMAND_ID27
#define MN_SPEECH_COMMAND_ID28   CONFIG_CN_SPEECH_COMMAND_ID28
#define MN_SPEECH_COMMAND_ID29   CONFIG_CN_SPEECH_COMMAND_ID29
#define MN_SPEECH_COMMAND_ID30   CONFIG_CN_SPEECH_COMMAND_ID30
#define MN_SPEECH_COMMAND_ID31   CONFIG_CN_SPEECH_COMMAND_ID31
#define MN_SPEECH_COMMAND_ID32   CONFIG_CN_SPEECH_COMMAND_ID32
#define MN_SPEECH_COMMAND_ID33   CONFIG_CN_SPEECH_COMMAND_ID33
#define MN_SPEECH_COMMAND_ID34   CONFIG_CN_SPEECH_COMMAND_ID34
#define MN_SPEECH_COMMAND_ID35   CONFIG_CN_SPEECH_COMMAND_ID35
#define MN_SPEECH_COMMAND_ID36   CONFIG_CN_SPEECH_COMMAND_ID36
#define MN_SPEECH_COMMAND_ID37   CONFIG_CN_SPEECH_COMMAND_ID37
#define MN_SPEECH_COMMAND_ID38   CONFIG_CN_SPEECH_COMMAND_ID38
#define MN_SPEECH_COMMAND_ID39   CONFIG_CN_SPEECH_COMMAND_ID39
#define MN_SPEECH_COMMAND_ID40   CONFIG_CN_SPEECH_COMMAND_ID40
#define MN_SPEECH_COMMAND_ID41   CONFIG_CN_SPEECH_COMMAND_ID41
#define MN_SPEECH_COMMAND_ID42   CONFIG_CN_SPEECH_COMMAND_ID42
#define MN_SPEECH_COMMAND_ID43   CONFIG_CN_SPEECH_COMMAND_ID43
#define MN_SPEECH_COMMAND_ID44   CONFIG_CN_SPEECH_COMMAND_ID44
#define MN_SPEECH_COMMAND_ID45   CONFIG_CN_SPEECH_COMMAND_ID45
#define MN_SPEECH_COMMAND_ID46   CONFIG_CN_SPEECH_COMMAND_ID46
#define MN_SPEECH_COMMAND_ID47   CONFIG_CN_SPEECH_COMMAND_ID47
#define MN_SPEECH_COMMAND_ID48   CONFIG_CN_SPEECH_COMMAND_ID48
#define MN_SPEECH_COMMAND_ID49   CONFIG_CN_SPEECH_COMMAND_ID49
#define MN_SPEECH_COMMAND_ID50   CONFIG_CN_SPEECH_COMMAND_ID50
#define MN_SPEECH_COMMAND_ID51   CONFIG_CN_SPEECH_COMMAND_ID51
#define MN_SPEECH_COMMAND_ID52   CONFIG_CN_SPEECH_COMMAND_ID52
#define MN_SPEECH_COMMAND_ID53   CONFIG_CN_SPEECH_COMMAND_ID53
#define MN_SPEECH_COMMAND_ID54   CONFIG_CN_SPEECH_COMMAND_ID54
#define MN_SPEECH_COMMAND_ID55   CONFIG_CN_SPEECH_COMMAND_ID55
#define MN_SPEECH_COMMAND_ID56   CONFIG_CN_SPEECH_COMMAND_ID56
#define MN_SPEECH_COMMAND_ID57   CONFIG_CN_SPEECH_COMMAND_ID57
#define MN_SPEECH_COMMAND_ID58   CONFIG_CN_SPEECH_COMMAND_ID58
#define MN_SPEECH_COMMAND_ID59   CONFIG_CN_SPEECH_COMMAND_ID59
#define MN_SPEECH_COMMAND_ID60   CONFIG_CN_SPEECH_COMMAND_ID60
#define MN_SPEECH_COMMAND_ID61   CONFIG_CN_SPEECH_COMMAND_ID61
#define MN_SPEECH_COMMAND_ID62   CONFIG_CN_SPEECH_COMMAND_ID62
#define MN_SPEECH_COMMAND_ID63   CONFIG_CN_SPEECH_COMMAND_ID63
#define MN_SPEECH_COMMAND_ID64   CONFIG_CN_SPEECH_COMMAND_ID64
#define MN_SPEECH_COMMAND_ID65   CONFIG_CN_SPEECH_COMMAND_ID65
#define MN_SPEECH_COMMAND_ID66   CONFIG_CN_SPEECH_COMMAND_ID66
#define MN_SPEECH_COMMAND_ID67   CONFIG_CN_SPEECH_COMMAND_ID67
#define MN_SPEECH_COMMAND_ID68   CONFIG_CN_SPEECH_COMMAND_ID68
#define MN_SPEECH_COMMAND_ID69   CONFIG_CN_SPEECH_COMMAND_ID69
#define MN_SPEECH_COMMAND_ID70   CONFIG_CN_SPEECH_COMMAND_ID70
#define MN_SPEECH_COMMAND_ID71   CONFIG_CN_SPEECH_COMMAND_ID71
#define MN_SPEECH_COMMAND_ID72   CONFIG_CN_SPEECH_COMMAND_ID72
#define MN_SPEECH_COMMAND_ID73   CONFIG_CN_SPEECH_COMMAND_ID73
#define MN_SPEECH_COMMAND_ID74   CONFIG_CN_SPEECH_COMMAND_ID74
#define MN_SPEECH_COMMAND_ID75   CONFIG_CN_SPEECH_COMMAND_ID75
#define MN_SPEECH_COMMAND_ID76   CONFIG_CN_SPEECH_COMMAND_ID76
#define MN_SPEECH_COMMAND_ID77   CONFIG_CN_SPEECH_COMMAND_ID77
#define MN_SPEECH_COMMAND_ID78   CONFIG_CN_SPEECH_COMMAND_ID78
#define MN_SPEECH_COMMAND_ID79   CONFIG_CN_SPEECH_COMMAND_ID79
#define MN_SPEECH_COMMAND_ID80   CONFIG_CN_SPEECH_COMMAND_ID80
#define MN_SPEECH_COMMAND_ID81   CONFIG_CN_SPEECH_COMMAND_ID81
#define MN_SPEECH_COMMAND_ID82   CONFIG_CN_SPEECH_COMMAND_ID82
#define MN_SPEECH_COMMAND_ID83   CONFIG_CN_SPEECH_COMMAND_ID83
#define MN_SPEECH_COMMAND_ID84   CONFIG_CN_SPEECH_COMMAND_ID84
#define MN_SPEECH_COMMAND_ID85   CONFIG_CN_SPEECH_COMMAND_ID85
#define MN_SPEECH_COMMAND_ID86   CONFIG_CN_SPEECH_COMMAND_ID86
#define MN_SPEECH_COMMAND_ID87   CONFIG_CN_SPEECH_COMMAND_ID87
#define MN_SPEECH_COMMAND_ID88   CONFIG_CN_SPEECH_COMMAND_ID88
#define MN_SPEECH_COMMAND_ID89   CONFIG_CN_SPEECH_COMMAND_ID89
#define MN_SPEECH_COMMAND_ID90   CONFIG_CN_SPEECH_COMMAND_ID90
#define MN_SPEECH_COMMAND_ID91   CONFIG_CN_SPEECH_COMMAND_ID91
#define MN_SPEECH_COMMAND_ID92   CONFIG_CN_SPEECH_COMMAND_ID92
#define MN_SPEECH_COMMAND_ID93   CONFIG_CN_SPEECH_COMMAND_ID93
#define MN_SPEECH_COMMAND_ID94   CONFIG_CN_SPEECH_COMMAND_ID94
#define MN_SPEECH_COMMAND_ID95   CONFIG_CN_SPEECH_COMMAND_ID95
#define MN_SPEECH_COMMAND_ID96   CONFIG_CN_SPEECH_COMMAND_ID96
#define MN_SPEECH_COMMAND_ID97   CONFIG_CN_SPEECH_COMMAND_ID97
#define MN_SPEECH_COMMAND_ID98   CONFIG_CN_SPEECH_COMMAND_ID98
#define MN_SPEECH_COMMAND_ID99   CONFIG_CN_SPEECH_COMMAND_ID99
#define MN_SPEECH_COMMAND_ID100   CONFIG_CN_SPEECH_COMMAND_ID100
#define MN_SPEECH_COMMAND_ID101   CONFIG_CN_SPEECH_COMMAND_ID101
#define MN_SPEECH_COMMAND_ID102   CONFIG_CN_SPEECH_COMMAND_ID102
#define MN_SPEECH_COMMAND_ID103   CONFIG_CN_SPEECH_COMMAND_ID103
#define MN_SPEECH_COMMAND_ID104   CONFIG_CN_SPEECH_COMMAND_ID104
#define MN_SPEECH_COMMAND_ID105   CONFIG_CN_SPEECH_COMMAND_ID105
#define MN_SPEECH_COMMAND_ID106   CONFIG_CN_SPEECH_COMMAND_ID106
#define MN_SPEECH_COMMAND_ID107   CONFIG_CN_SPEECH_COMMAND_ID107
#define MN_SPEECH_COMMAND_ID108   CONFIG_CN_SPEECH_COMMAND_ID108
#define MN_SPEECH_COMMAND_ID109   CONFIG_CN_SPEECH_COMMAND_ID109
#define MN_SPEECH_COMMAND_ID110   CONFIG_CN_SPEECH_COMMAND_ID110
#define MN_SPEECH_COMMAND_ID111   CONFIG_CN_SPEECH_COMMAND_ID111
#define MN_SPEECH_COMMAND_ID112   CONFIG_CN_SPEECH_COMMAND_ID112
#define MN_SPEECH_COMMAND_ID113   CONFIG_CN_SPEECH_COMMAND_ID113
#define MN_SPEECH_COMMAND_ID114   CONFIG_CN_SPEECH_COMMAND_ID114
#define MN_SPEECH_COMMAND_ID115   CONFIG_CN_SPEECH_COMMAND_ID115
#define MN_SPEECH_COMMAND_ID116   CONFIG_CN_SPEECH_COMMAND_ID116
#define MN_SPEECH_COMMAND_ID117   CONFIG_CN_SPEECH_COMMAND_ID117
#define MN_SPEECH_COMMAND_ID118   CONFIG_CN_SPEECH_COMMAND_ID118
#define MN_SPEECH_COMMAND_ID119   CONFIG_CN_SPEECH_COMMAND_ID119
#define MN_SPEECH_COMMAND_ID120   CONFIG_CN_SPEECH_COMMAND_ID120
#define MN_SPEECH_COMMAND_ID121   CONFIG_CN_SPEECH_COMMAND_ID121
#define MN_SPEECH_COMMAND_ID122   CONFIG_CN_SPEECH_COMMAND_ID122
#define MN_SPEECH_COMMAND_ID123   CONFIG_CN_SPEECH_COMMAND_ID123
#define MN_SPEECH_COMMAND_ID124   CONFIG_CN_SPEECH_COMMAND_ID124
#define MN_SPEECH_COMMAND_ID125   CONFIG_CN_SPEECH_COMMAND_ID125
#define MN_SPEECH_COMMAND_ID126   CONFIG_CN_SPEECH_COMMAND_ID126
#define MN_SPEECH_COMMAND_ID127   CONFIG_CN_SPEECH_COMMAND_ID127
#define MN_SPEECH_COMMAND_ID128   CONFIG_CN_SPEECH_COMMAND_ID128
#define MN_SPEECH_COMMAND_ID129   CONFIG_CN_SPEECH_COMMAND_ID129
#define MN_SPEECH_COMMAND_ID130   CONFIG_CN_SPEECH_COMMAND_ID130
#define MN_SPEECH_COMMAND_ID131   CONFIG_CN_SPEECH_COMMAND_ID131
#define MN_SPEECH_COMMAND_ID132   CONFIG_CN_SPEECH_COMMAND_ID132
#define MN_SPEECH_COMMAND_ID133   CONFIG_CN_SPEECH_COMMAND_ID133
#define MN_SPEECH_COMMAND_ID134   CONFIG_CN_SPEECH_COMMAND_ID134
#define MN_SPEECH_COMMAND_ID135   CONFIG_CN_SPEECH_COMMAND_ID135
#define MN_SPEECH_COMMAND_ID136   CONFIG_CN_SPEECH_COMMAND_ID136
#define MN_SPEECH_COMMAND_ID137   CONFIG_CN_SPEECH_COMMAND_ID137
#define MN_SPEECH_COMMAND_ID138   CONFIG_CN_SPEECH_COMMAND_ID138
#define MN_SPEECH_COMMAND_ID139   CONFIG_CN_SPEECH_COMMAND_ID139
#define MN_SPEECH_COMMAND_ID140   CONFIG_CN_SPEECH_COMMAND_ID140
#define MN_SPEECH_COMMAND_ID141   CONFIG_CN_SPEECH_COMMAND_ID141
#define MN_SPEECH_COMMAND_ID142   CONFIG_CN_SPEECH_COMMAND_ID142
#define MN_SPEECH_COMMAND_ID143   CONFIG_CN_SPEECH_COMMAND_ID143
#define MN_SPEECH_COMMAND_ID144   CONFIG_CN_SPEECH_COMMAND_ID144
#define MN_SPEECH_COMMAND_ID145   CONFIG_CN_SPEECH_COMMAND_ID145
#define MN_SPEECH_COMMAND_ID146   CONFIG_CN_SPEECH_COMMAND_ID146
#define MN_SPEECH_COMMAND_ID147   CONFIG_CN_SPEECH_COMMAND_ID147
#define MN_SPEECH_COMMAND_ID148   CONFIG_CN_SPEECH_COMMAND_ID148
#define MN_SPEECH_COMMAND_ID149   CONFIG_CN_SPEECH_COMMAND_ID149
#define MN_SPEECH_COMMAND_ID150   CONFIG_CN_SPEECH_COMMAND_ID150
#define MN_SPEECH_COMMAND_ID151   CONFIG_CN_SPEECH_COMMAND_ID151
#define MN_SPEECH_COMMAND_ID152   CONFIG_CN_SPEECH_COMMAND_ID152
#define MN_SPEECH_COMMAND_ID153   CONFIG_CN_SPEECH_COMMAND_ID153
#define MN_SPEECH_COMMAND_ID154   CONFIG_CN_SPEECH_COMMAND_ID154
#define MN_SPEECH_COMMAND_ID155   CONFIG_CN_SPEECH_COMMAND_ID155
#define MN_SPEECH_COMMAND_ID156   CONFIG_CN_SPEECH_COMMAND_ID156
#define MN_SPEECH_COMMAND_ID157   CONFIG_CN_SPEECH_COMMAND_ID157
#define MN_SPEECH_COMMAND_ID158   CONFIG_CN_SPEECH_COMMAND_ID158
#define MN_SPEECH_COMMAND_ID159   CONFIG_CN_SPEECH_COMMAND_ID159
#define MN_SPEECH_COMMAND_ID160   CONFIG_CN_SPEECH_COMMAND_ID160
#define MN_SPEECH_COMMAND_ID161   CONFIG_CN_SPEECH_COMMAND_ID161
#define MN_SPEECH_COMMAND_ID162   CONFIG_CN_SPEECH_COMMAND_ID162
#define MN_SPEECH_COMMAND_ID163   CONFIG_CN_SPEECH_COMMAND_ID163
#define MN_SPEECH_COMMAND_ID164   CONFIG_CN_SPEECH_COMMAND_ID164
#define MN_SPEECH_COMMAND_ID165   CONFIG_CN_SPEECH_COMMAND_ID165
#define MN_SPEECH_COMMAND_ID166   CONFIG_CN_SPEECH_COMMAND_ID166
#define MN_SPEECH_COMMAND_ID167   CONFIG_CN_SPEECH_COMMAND_ID167
#define MN_SPEECH_COMMAND_ID168   CONFIG_CN_SPEECH_COMMAND_ID168
#define MN_SPEECH_COMMAND_ID169   CONFIG_CN_SPEECH_COMMAND_ID169
#define MN_SPEECH_COMMAND_ID170   CONFIG_CN_SPEECH_COMMAND_ID170
#define MN_SPEECH_COMMAND_ID171   CONFIG_CN_SPEECH_COMMAND_ID171
#define MN_SPEECH_COMMAND_ID172   CONFIG_CN_SPEECH_COMMAND_ID172
#define MN_SPEECH_COMMAND_ID173   CONFIG_CN_SPEECH_COMMAND_ID173
#define MN_SPEECH_COMMAND_ID174   CONFIG_CN_SPEECH_COMMAND_ID174
#define MN_SPEECH_COMMAND_ID175   CONFIG_CN_SPEECH_COMMAND_ID175
#define MN_SPEECH_COMMAND_ID176   CONFIG_CN_SPEECH_COMMAND_ID176
#define MN_SPEECH_COMMAND_ID177   CONFIG_CN_SPEECH_COMMAND_ID177
#define MN_SPEECH_COMMAND_ID178   CONFIG_CN_SPEECH_COMMAND_ID178
#define MN_SPEECH_COMMAND_ID179   CONFIG_CN_SPEECH_COMMAND_ID179
#define MN_SPEECH_COMMAND_ID180   CONFIG_CN_SPEECH_COMMAND_ID180
#define MN_SPEECH_COMMAND_ID181   CONFIG_CN_SPEECH_COMMAND_ID181
#define MN_SPEECH_COMMAND_ID182   CONFIG_CN_SPEECH_COMMAND_ID182
#define MN_SPEECH_COMMAND_ID183   CONFIG_CN_SPEECH_COMMAND_ID183
#define MN_SPEECH_COMMAND_ID184   CONFIG_CN_SPEECH_COMMAND_ID184
#define MN_SPEECH_COMMAND_ID185   CONFIG_CN_SPEECH_COMMAND_ID185
#define MN_SPEECH_COMMAND_ID186   CONFIG_CN_SPEECH_COMMAND_ID186
#define MN_SPEECH_COMMAND_ID187   CONFIG_CN_SPEECH_COMMAND_ID187
#define MN_SPEECH_COMMAND_ID188   CONFIG_CN_SPEECH_COMMAND_ID188
#define MN_SPEECH_COMMAND_ID189   CONFIG_CN_SPEECH_COMMAND_ID189
#define MN_SPEECH_COMMAND_ID190   CONFIG_CN_SPEECH_COMMAND_ID190
#define MN_SPEECH_COMMAND_ID191   CONFIG_CN_SPEECH_COMMAND_ID191
#define MN_SPEECH_COMMAND_ID192   CONFIG_CN_SPEECH_COMMAND_ID192
#define MN_SPEECH_COMMAND_ID193   CONFIG_CN_SPEECH_COMMAND_ID193
#define MN_SPEECH_COMMAND_ID194   CONFIG_CN_SPEECH_COMMAND_ID194
#define MN_SPEECH_COMMAND_ID195   CONFIG_CN_SPEECH_COMMAND_ID195
#define MN_SPEECH_COMMAND_ID196   CONFIG_CN_SPEECH_COMMAND_ID196
#define MN_SPEECH_COMMAND_ID197   CONFIG_CN_SPEECH_COMMAND_ID197
#define MN_SPEECH_COMMAND_ID198   CONFIG_CN_SPEECH_COMMAND_ID198
#define MN_SPEECH_COMMAND_ID199   CONFIG_CN_SPEECH_COMMAND_ID199
#elif CONFIG_SR_MN_ENGLISH
#define MN_SPEECH_COMMAND_ID0   CONFIG_EN_SPEECH_COMMAND_ID0
#define MN_SPEECH_COMMAND_ID1   CONFIG_EN_SPEECH_COMMAND_ID1
#define MN_SPEECH_COMMAND_ID2   CONFIG_EN_SPEECH_COMMAND_ID2
#define MN_SPEECH_COMMAND_ID3   CONFIG_EN_SPEECH_COMMAND_ID3
#define MN_SPEECH_COMMAND_ID4   CONFIG_EN_SPEECH_COMMAND_ID4
#define MN_SPEECH_COMMAND_ID5   CONFIG_EN_SPEECH_COMMAND_ID5
#define MN_SPEECH_COMMAND_ID6   CONFIG_EN_SPEECH_COMMAND_ID6
#define MN_SPEECH_COMMAND_ID7   CONFIG_EN_SPEECH_COMMAND_ID7
#define MN_SPEECH_COMMAND_ID8   CONFIG_EN_SPEECH_COMMAND_ID8
#define MN_SPEECH_COMMAND_ID9   CONFIG_EN_SPEECH_COMMAND_ID9
#define MN_SPEECH_COMMAND_ID10   CONFIG_EN_SPEECH_COMMAND_ID10
#define MN_SPEECH_COMMAND_ID11   CONFIG_EN_SPEECH_COMMAND_ID11
#define MN_SPEECH_COMMAND_ID12   CONFIG_EN_SPEECH_COMMAND_ID12
#define MN_SPEECH_COMMAND_ID13   CONFIG_EN_SPEECH_COMMAND_ID13
#define MN_SPEECH_COMMAND_ID14   CONFIG_EN_SPEECH_COMMAND_ID14
#define MN_SPEECH_COMMAND_ID15   CONFIG_EN_SPEECH_COMMAND_ID15
#define MN_SPEECH_COMMAND_ID16   CONFIG_EN_SPEECH_COMMAND_ID16
#define MN_SPEECH_COMMAND_ID17   CONFIG_EN_SPEECH_COMMAND_ID17
#define MN_SPEECH_COMMAND_ID18   CONFIG_EN_SPEECH_COMMAND_ID18
#define MN_SPEECH_COMMAND_ID19   CONFIG_EN_SPEECH_COMMAND_ID19
#define MN_SPEECH_COMMAND_ID20   CONFIG_EN_SPEECH_COMMAND_ID20
#define MN_SPEECH_COMMAND_ID21   CONFIG_EN_SPEECH_COMMAND_ID21
#define MN_SPEECH_COMMAND_ID22   CONFIG_EN_SPEECH_COMMAND_ID22
#define MN_SPEECH_COMMAND_ID23   CONFIG_EN_SPEECH_COMMAND_ID23
#define MN_SPEECH_COMMAND_ID24   CONFIG_EN_SPEECH_COMMAND_ID24
#define MN_SPEECH_COMMAND_ID25   CONFIG_EN_SPEECH_COMMAND_ID25
#define MN_SPEECH_COMMAND_ID26   CONFIG_EN_SPEECH_COMMAND_ID26
#define MN_SPEECH_COMMAND_ID27   CONFIG_EN_SPEECH_COMMAND_ID27
#define MN_SPEECH_COMMAND_ID28   CONFIG_EN_SPEECH_COMMAND_ID28
#define MN_SPEECH_COMMAND_ID29   CONFIG_EN_SPEECH_COMMAND_ID29
#define MN_SPEECH_COMMAND_ID30   CONFIG_EN_SPEECH_COMMAND_ID30
#define MN_SPEECH_COMMAND_ID31   CONFIG_EN_SPEECH_COMMAND_ID31
#define MN_SPEECH_COMMAND_ID32   CONFIG_EN_SPEECH_COMMAND_ID32
#define MN_SPEECH_COMMAND_ID33   CONFIG_EN_SPEECH_COMMAND_ID33
#define MN_SPEECH_COMMAND_ID34   CONFIG_EN_SPEECH_COMMAND_ID34
#define MN_SPEECH_COMMAND_ID35   CONFIG_EN_SPEECH_COMMAND_ID35
#define MN_SPEECH_COMMAND_ID36   CONFIG_EN_SPEECH_COMMAND_ID36
#define MN_SPEECH_COMMAND_ID37   CONFIG_EN_SPEECH_COMMAND_ID37
#define MN_SPEECH_COMMAND_ID38   CONFIG_EN_SPEECH_COMMAND_ID38
#define MN_SPEECH_COMMAND_ID39   CONFIG_EN_SPEECH_COMMAND_ID39
#define MN_SPEECH_COMMAND_ID40   CONFIG_EN_SPEECH_COMMAND_ID40
#define MN_SPEECH_COMMAND_ID41   CONFIG_EN_SPEECH_COMMAND_ID41
#define MN_SPEECH_COMMAND_ID42   CONFIG_EN_SPEECH_COMMAND_ID42
#define MN_SPEECH_COMMAND_ID43   CONFIG_EN_SPEECH_COMMAND_ID43
#define MN_SPEECH_COMMAND_ID44   CONFIG_EN_SPEECH_COMMAND_ID44
#define MN_SPEECH_COMMAND_ID45   CONFIG_EN_SPEECH_COMMAND_ID45
#define MN_SPEECH_COMMAND_ID46   CONFIG_EN_SPEECH_COMMAND_ID46
#define MN_SPEECH_COMMAND_ID47   CONFIG_EN_SPEECH_COMMAND_ID47
#define MN_SPEECH_COMMAND_ID48   CONFIG_EN_SPEECH_COMMAND_ID48
#define MN_SPEECH_COMMAND_ID49   CONFIG_EN_SPEECH_COMMAND_ID49
#define MN_SPEECH_COMMAND_ID50   CONFIG_EN_SPEECH_COMMAND_ID50
#define MN_SPEECH_COMMAND_ID51   CONFIG_EN_SPEECH_COMMAND_ID51
#define MN_SPEECH_COMMAND_ID52   CONFIG_EN_SPEECH_COMMAND_ID52
#define MN_SPEECH_COMMAND_ID53   CONFIG_EN_SPEECH_COMMAND_ID53
#define MN_SPEECH_COMMAND_ID54   CONFIG_EN_SPEECH_COMMAND_ID54
#define MN_SPEECH_COMMAND_ID55   CONFIG_EN_SPEECH_COMMAND_ID55
#define MN_SPEECH_COMMAND_ID56   CONFIG_EN_SPEECH_COMMAND_ID56
#define MN_SPEECH_COMMAND_ID57   CONFIG_EN_SPEECH_COMMAND_ID57
#define MN_SPEECH_COMMAND_ID58   CONFIG_EN_SPEECH_COMMAND_ID58
#define MN_SPEECH_COMMAND_ID59   CONFIG_EN_SPEECH_COMMAND_ID59
#define MN_SPEECH_COMMAND_ID60   CONFIG_EN_SPEECH_COMMAND_ID60
#define MN_SPEECH_COMMAND_ID61   CONFIG_EN_SPEECH_COMMAND_ID61
#define MN_SPEECH_COMMAND_ID62   CONFIG_EN_SPEECH_COMMAND_ID62
#define MN_SPEECH_COMMAND_ID63   CONFIG_EN_SPEECH_COMMAND_ID63
#define MN_SPEECH_COMMAND_ID64   CONFIG_EN_SPEECH_COMMAND_ID64
#define MN_SPEECH_COMMAND_ID65   CONFIG_EN_SPEECH_COMMAND_ID65
#define MN_SPEECH_COMMAND_ID66   CONFIG_EN_SPEECH_COMMAND_ID66
#define MN_SPEECH_COMMAND_ID67   CONFIG_EN_SPEECH_COMMAND_ID67
#define MN_SPEECH_COMMAND_ID68   CONFIG_EN_SPEECH_COMMAND_ID68
#define MN_SPEECH_COMMAND_ID69   CONFIG_EN_SPEECH_COMMAND_ID69
#define MN_SPEECH_COMMAND_ID70   CONFIG_EN_SPEECH_COMMAND_ID70
#define MN_SPEECH_COMMAND_ID71   CONFIG_EN_SPEECH_COMMAND_ID71
#define MN_SPEECH_COMMAND_ID72   CONFIG_EN_SPEECH_COMMAND_ID72
#define MN_SPEECH_COMMAND_ID73   CONFIG_EN_SPEECH_COMMAND_ID73
#define MN_SPEECH_COMMAND_ID74   CONFIG_EN_SPEECH_COMMAND_ID74
#define MN_SPEECH_COMMAND_ID75   CONFIG_EN_SPEECH_COMMAND_ID75
#define MN_SPEECH_COMMAND_ID76   CONFIG_EN_SPEECH_COMMAND_ID76
#define MN_SPEECH_COMMAND_ID77   CONFIG_EN_SPEECH_COMMAND_ID77
#define MN_SPEECH_COMMAND_ID78   CONFIG_EN_SPEECH_COMMAND_ID78
#define MN_SPEECH_COMMAND_ID79   CONFIG_EN_SPEECH_COMMAND_ID79
#define MN_SPEECH_COMMAND_ID80   CONFIG_EN_SPEECH_COMMAND_ID80
#define MN_SPEECH_COMMAND_ID81   CONFIG_EN_SPEECH_COMMAND_ID81
#define MN_SPEECH_COMMAND_ID82   CONFIG_EN_SPEECH_COMMAND_ID82
#define MN_SPEECH_COMMAND_ID83   CONFIG_EN_SPEECH_COMMAND_ID83
#define MN_SPEECH_COMMAND_ID84   CONFIG_EN_SPEECH_COMMAND_ID84
#define MN_SPEECH_COMMAND_ID85   CONFIG_EN_SPEECH_COMMAND_ID85
#define MN_SPEECH_COMMAND_ID86   CONFIG_EN_SPEECH_COMMAND_ID86
#define MN_SPEECH_COMMAND_ID87   CONFIG_EN_SPEECH_COMMAND_ID87
#define MN_SPEECH_COMMAND_ID88   CONFIG_EN_SPEECH_COMMAND_ID88
#define MN_SPEECH_COMMAND_ID89   CONFIG_EN_SPEECH_COMMAND_ID89
#define MN_SPEECH_COMMAND_ID90   CONFIG_EN_SPEECH_COMMAND_ID90
#define MN_SPEECH_COMMAND_ID91   CONFIG_EN_SPEECH_COMMAND_ID91
#define MN_SPEECH_COMMAND_ID92   CONFIG_EN_SPEECH_COMMAND_ID92
#define MN_SPEECH_COMMAND_ID93   CONFIG_EN_SPEECH_COMMAND_ID93
#define MN_SPEECH_COMMAND_ID94   CONFIG_EN_SPEECH_COMMAND_ID94
#define MN_SPEECH_COMMAND_ID95   CONFIG_EN_SPEECH_COMMAND_ID95
#define MN_SPEECH_COMMAND_ID96   CONFIG_EN_SPEECH_COMMAND_ID96
#define MN_SPEECH_COMMAND_ID97   CONFIG_EN_SPEECH_COMMAND_ID97
#define MN_SPEECH_COMMAND_ID98   CONFIG_EN_SPEECH_COMMAND_ID98
#define MN_SPEECH_COMMAND_ID99   CONFIG_EN_SPEECH_COMMAND_ID99
#define MN_SPEECH_COMMAND_ID100   CONFIG_EN_SPEECH_COMMAND_ID100
#define MN_SPEECH_COMMAND_ID101   CONFIG_EN_SPEECH_COMMAND_ID101
#define MN_SPEECH_COMMAND_ID102   CONFIG_EN_SPEECH_COMMAND_ID102
#define MN_SPEECH_COMMAND_ID103   CONFIG_EN_SPEECH_COMMAND_ID103
#define MN_SPEECH_COMMAND_ID104   CONFIG_EN_SPEECH_COMMAND_ID104
#define MN_SPEECH_COMMAND_ID105   CONFIG_EN_SPEECH_COMMAND_ID105
#define MN_SPEECH_COMMAND_ID106   CONFIG_EN_SPEECH_COMMAND_ID106
#define MN_SPEECH_COMMAND_ID107   CONFIG_EN_SPEECH_COMMAND_ID107
#define MN_SPEECH_COMMAND_ID108   CONFIG_EN_SPEECH_COMMAND_ID108
#define MN_SPEECH_COMMAND_ID109   CONFIG_EN_SPEECH_COMMAND_ID109
#define MN_SPEECH_COMMAND_ID110   CONFIG_EN_SPEECH_COMMAND_ID110
#define MN_SPEECH_COMMAND_ID111   CONFIG_EN_SPEECH_COMMAND_ID111
#define MN_SPEECH_COMMAND_ID112   CONFIG_EN_SPEECH_COMMAND_ID112
#define MN_SPEECH_COMMAND_ID113   CONFIG_EN_SPEECH_COMMAND_ID113
#define MN_SPEECH_COMMAND_ID114   CONFIG_EN_SPEECH_COMMAND_ID114
#define MN_SPEECH_COMMAND_ID115   CONFIG_EN_SPEECH_COMMAND_ID115
#define MN_SPEECH_COMMAND_ID116   CONFIG_EN_SPEECH_COMMAND_ID116
#define MN_SPEECH_COMMAND_ID117   CONFIG_EN_SPEECH_COMMAND_ID117
#define MN_SPEECH_COMMAND_ID118   CONFIG_EN_SPEECH_COMMAND_ID118
#define MN_SPEECH_COMMAND_ID119   CONFIG_EN_SPEECH_COMMAND_ID119
#define MN_SPEECH_COMMAND_ID120   CONFIG_EN_SPEECH_COMMAND_ID120
#define MN_SPEECH_COMMAND_ID121   CONFIG_EN_SPEECH_COMMAND_ID121
#define MN_SPEECH_COMMAND_ID122   CONFIG_EN_SPEECH_COMMAND_ID122
#define MN_SPEECH_COMMAND_ID123   CONFIG_EN_SPEECH_COMMAND_ID123
#define MN_SPEECH_COMMAND_ID124   CONFIG_EN_SPEECH_COMMAND_ID124
#define MN_SPEECH_COMMAND_ID125   CONFIG_EN_SPEECH_COMMAND_ID125
#define MN_SPEECH_COMMAND_ID126   CONFIG_EN_SPEECH_COMMAND_ID126
#define MN_SPEECH_COMMAND_ID127   CONFIG_EN_SPEECH_COMMAND_ID127
#define MN_SPEECH_COMMAND_ID128   CONFIG_EN_SPEECH_COMMAND_ID128
#define MN_SPEECH_COMMAND_ID129   CONFIG_EN_SPEECH_COMMAND_ID129
#define MN_SPEECH_COMMAND_ID130   CONFIG_EN_SPEECH_COMMAND_ID130
#define MN_SPEECH_COMMAND_ID131   CONFIG_EN_SPEECH_COMMAND_ID131
#define MN_SPEECH_COMMAND_ID132   CONFIG_EN_SPEECH_COMMAND_ID132
#define MN_SPEECH_COMMAND_ID133   CONFIG_EN_SPEECH_COMMAND_ID133
#define MN_SPEECH_COMMAND_ID134   CONFIG_EN_SPEECH_COMMAND_ID134
#define MN_SPEECH_COMMAND_ID135   CONFIG_EN_SPEECH_COMMAND_ID135
#define MN_SPEECH_COMMAND_ID136   CONFIG_EN_SPEECH_COMMAND_ID136
#define MN_SPEECH_COMMAND_ID137   CONFIG_EN_SPEECH_COMMAND_ID137
#define MN_SPEECH_COMMAND_ID138   CONFIG_EN_SPEECH_COMMAND_ID138
#define MN_SPEECH_COMMAND_ID139   CONFIG_EN_SPEECH_COMMAND_ID139
#define MN_SPEECH_COMMAND_ID140   CONFIG_EN_SPEECH_COMMAND_ID140
#define MN_SPEECH_COMMAND_ID141   CONFIG_EN_SPEECH_COMMAND_ID141
#define MN_SPEECH_COMMAND_ID142   CONFIG_EN_SPEECH_COMMAND_ID142
#define MN_SPEECH_COMMAND_ID143   CONFIG_EN_SPEECH_COMMAND_ID143
#define MN_SPEECH_COMMAND_ID144   CONFIG_EN_SPEECH_COMMAND_ID144
#define MN_SPEECH_COMMAND_ID145   CONFIG_EN_SPEECH_COMMAND_ID145
#define MN_SPEECH_COMMAND_ID146   CONFIG_EN_SPEECH_COMMAND_ID146
#define MN_SPEECH_COMMAND_ID147   CONFIG_EN_SPEECH_COMMAND_ID147
#define MN_SPEECH_COMMAND_ID148   CONFIG_EN_SPEECH_COMMAND_ID148
#define MN_SPEECH_COMMAND_ID149   CONFIG_EN_SPEECH_COMMAND_ID149
#define MN_SPEECH_COMMAND_ID150   CONFIG_EN_SPEECH_COMMAND_ID150
#define MN_SPEECH_COMMAND_ID151   CONFIG_EN_SPEECH_COMMAND_ID151
#define MN_SPEECH_COMMAND_ID152   CONFIG_EN_SPEECH_COMMAND_ID152
#define MN_SPEECH_COMMAND_ID153   CONFIG_EN_SPEECH_COMMAND_ID153
#define MN_SPEECH_COMMAND_ID154   CONFIG_EN_SPEECH_COMMAND_ID154
#define MN_SPEECH_COMMAND_ID155   CONFIG_EN_SPEECH_COMMAND_ID155
#define MN_SPEECH_COMMAND_ID156   CONFIG_EN_SPEECH_COMMAND_ID156
#define MN_SPEECH_COMMAND_ID157   CONFIG_EN_SPEECH_COMMAND_ID157
#define MN_SPEECH_COMMAND_ID158   CONFIG_EN_SPEECH_COMMAND_ID158
#define MN_SPEECH_COMMAND_ID159   CONFIG_EN_SPEECH_COMMAND_ID159
#define MN_SPEECH_COMMAND_ID160   CONFIG_EN_SPEECH_COMMAND_ID160
#define MN_SPEECH_COMMAND_ID161   CONFIG_EN_SPEECH_COMMAND_ID161
#define MN_SPEECH_COMMAND_ID162   CONFIG_EN_SPEECH_COMMAND_ID162
#define MN_SPEECH_COMMAND_ID163   CONFIG_EN_SPEECH_COMMAND_ID163
#define MN_SPEECH_COMMAND_ID164   CONFIG_EN_SPEECH_COMMAND_ID164
#define MN_SPEECH_COMMAND_ID165   CONFIG_EN_SPEECH_COMMAND_ID165
#define MN_SPEECH_COMMAND_ID166   CONFIG_EN_SPEECH_COMMAND_ID166
#define MN_SPEECH_COMMAND_ID167   CONFIG_EN_SPEECH_COMMAND_ID167
#define MN_SPEECH_COMMAND_ID168   CONFIG_EN_SPEECH_COMMAND_ID168
#define MN_SPEECH_COMMAND_ID169   CONFIG_EN_SPEECH_COMMAND_ID169
#define MN_SPEECH_COMMAND_ID170   CONFIG_EN_SPEECH_COMMAND_ID170
#define MN_SPEECH_COMMAND_ID171   CONFIG_EN_SPEECH_COMMAND_ID171
#define MN_SPEECH_COMMAND_ID172   CONFIG_EN_SPEECH_COMMAND_ID172
#define MN_SPEECH_COMMAND_ID173   CONFIG_EN_SPEECH_COMMAND_ID173
#define MN_SPEECH_COMMAND_ID174   CONFIG_EN_SPEECH_COMMAND_ID174
#define MN_SPEECH_COMMAND_ID175   CONFIG_EN_SPEECH_COMMAND_ID175
#define MN_SPEECH_COMMAND_ID176   CONFIG_EN_SPEECH_COMMAND_ID176
#define MN_SPEECH_COMMAND_ID177   CONFIG_EN_SPEECH_COMMAND_ID177
#define MN_SPEECH_COMMAND_ID178   CONFIG_EN_SPEECH_COMMAND_ID178
#define MN_SPEECH_COMMAND_ID179   CONFIG_EN_SPEECH_COMMAND_ID179
#define MN_SPEECH_COMMAND_ID180   CONFIG_EN_SPEECH_COMMAND_ID180
#define MN_SPEECH_COMMAND_ID181   CONFIG_EN_SPEECH_COMMAND_ID181
#define MN_SPEECH_COMMAND_ID182   CONFIG_EN_SPEECH_COMMAND_ID182
#define MN_SPEECH_COMMAND_ID183   CONFIG_EN_SPEECH_COMMAND_ID183
#define MN_SPEECH_COMMAND_ID184   CONFIG_EN_SPEECH_COMMAND_ID184
#define MN_SPEECH_COMMAND_ID185   CONFIG_EN_SPEECH_COMMAND_ID185
#define MN_SPEECH_COMMAND_ID186   CONFIG_EN_SPEECH_COMMAND_ID186
#define MN_SPEECH_COMMAND_ID187   CONFIG_EN_SPEECH_COMMAND_ID187
#define MN_SPEECH_COMMAND_ID188   CONFIG_EN_SPEECH_COMMAND_ID188
#define MN_SPEECH_COMMAND_ID189   CONFIG_EN_SPEECH_COMMAND_ID189
#define MN_SPEECH_COMMAND_ID190   CONFIG_EN_SPEECH_COMMAND_ID190
#define MN_SPEECH_COMMAND_ID191   CONFIG_EN_SPEECH_COMMAND_ID191
#define MN_SPEECH_COMMAND_ID192   CONFIG_EN_SPEECH_COMMAND_ID192
#define MN_SPEECH_COMMAND_ID193   CONFIG_EN_SPEECH_COMMAND_ID193
#define MN_SPEECH_COMMAND_ID194   CONFIG_EN_SPEECH_COMMAND_ID194
#define MN_SPEECH_COMMAND_ID195   CONFIG_EN_SPEECH_COMMAND_ID195
#define MN_SPEECH_COMMAND_ID196   CONFIG_EN_SPEECH_COMMAND_ID196
#define MN_SPEECH_COMMAND_ID197   CONFIG_EN_SPEECH_COMMAND_ID197
#define MN_SPEECH_COMMAND_ID198   CONFIG_EN_SPEECH_COMMAND_ID198
#define MN_SPEECH_COMMAND_ID199   CONFIG_EN_SPEECH_COMMAND_ID199
#endif
char *get_id_name(int i);
void reset_speech_commands(model_iface_data_t *model_data, char* command_str, char *err_phrase_id);