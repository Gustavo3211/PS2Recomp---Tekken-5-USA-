#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A3008
// Address: 0x4a3008 - 0x4a31b8
void sub_004A3008_0x4a3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3008_0x4a3008");
#endif

    switch (ctx->pc) {
        case 0x4a303cu: goto label_4a303c;
        case 0x4a3048u: goto label_4a3048;
        case 0x4a3050u: goto label_4a3050;
        case 0x4a3198u: goto label_4a3198;
        default: break;
    }

    ctx->pc = 0x4a3008u;

    // 0x4a3008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a300c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a3014: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a3018: 0x24117fff  addiu       $s1, $zero, 0x7FFF
    ctx->pc = 0x4a3018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a301c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a3020: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x4a3020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a3024: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a3028: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a3028u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a302c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a3030: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a3030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a3034: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3034u;
    SET_GPR_U32(ctx, 31, 0x4A303Cu);
    ctx->pc = 0x4A3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3034u;
    // 0x4a3038: 0x3c142c00  lui         $s4, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)11264 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3034u, 0x4A303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A303Cu;
label_4a303c:
    // 0x4a303c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a3040: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x4a3040u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x4a3044: 0x24508958  addiu       $s0, $v0, -0x76A8
    ctx->pc = 0x4a3044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936920));
label_4a3048:
    // 0x4a3048: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A3048u;
    SET_GPR_U32(ctx, 31, 0x4A3050u);
    ctx->pc = 0x4A304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3048u;
    // 0x4a304c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A3048u, 0x4A3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3050u;
label_4a3050:
    // 0x4a3050: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x4a3050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x4a3054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3058: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4a3058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a305c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4a305cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4a3060: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x4a3060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a3064: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4a3064u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3068: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4a3068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a306c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3070: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a3070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a3074: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3078: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x4a3078u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a307c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x4a307cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a3080: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4a3080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3084: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x4a3084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3088: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a308c: 0xa4660148  sh          $a2, 0x148($v1)
    ctx->pc = 0x4a308cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3090: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a3090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3094: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a3094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a3098: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a309c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a309cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a30a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4a30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4a30a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a30a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a30ac: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4a30acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4a30b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a30b4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a30b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a30b8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4a30b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4a30bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a30c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a30c4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4a30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4a30c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a30cc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a30d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a30d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a30d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a30d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a30dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a30dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a30e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a30e4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x4a30e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a30e8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a30e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a30ec: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a30ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a30f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a30f4: 0xa4440118  sh          $a0, 0x118($v0)
    ctx->pc = 0x4a30f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a30f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a30f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a30fc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a30fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a3100: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3104: 0xa443011c  sh          $v1, 0x11C($v0)
    ctx->pc = 0x4a3104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3108: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a3108u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a310c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a310cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a3110: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3114: 0xa4440120  sh          $a0, 0x120($v0)
    ctx->pc = 0x4a3114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a3118: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a311c: 0xa4600130  sh          $zero, 0x130($v1)
    ctx->pc = 0x4a311cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3120: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3124: 0xa4470132  sh          $a3, 0x132($v0)
    ctx->pc = 0x4a3124u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 306), (uint16_t)GPR_U32(ctx, 7));
    // 0x4a3128: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a312c: 0xac600124  sw          $zero, 0x124($v1)
    ctx->pc = 0x4a312cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 0));
    // 0x4a3130: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a3130u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3134: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a3134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a3138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a313c: 0xa4440138  sh          $a0, 0x138($v0)
    ctx->pc = 0x4a313cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 312), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a3140: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3144: 0xa468002e  sh          $t0, 0x2E($v1)
    ctx->pc = 0x4a3144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a3148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a314c: 0xa4490030  sh          $t1, 0x30($v0)
    ctx->pc = 0x4a314cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a3150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3154: 0xa4600022  sh          $zero, 0x22($v1)
    ctx->pc = 0x4a3154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3158: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a315c: 0xa4510024  sh          $s1, 0x24($v0)
    ctx->pc = 0x4a315cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a3160: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3164: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x4a3164u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a316c: 0xa4510028  sh          $s1, 0x28($v0)
    ctx->pc = 0x4a316cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a3170: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3174: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4a3174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3178: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a317c: 0xa451002c  sh          $s1, 0x2C($v0)
    ctx->pc = 0x4a317cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a3180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3184: 0x641ffb0  bgez        $s2, . + 4 + (-0x50 << 2)
    ctx->pc = 0x4A3184u;
    {
        const bool branch_taken_0x4a3184 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4A3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3184u;
        // 0x4a3188: 0xa460018c  sh          $zero, 0x18C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 396), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3184) {
            ctx->pc = 0x4A3048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3048;
        }
    }
    ctx->pc = 0x4A318Cu;
    // 0x4a318c: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a318cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a3190: 0xc123bf2  jal         func_48EFC8
    ctx->pc = 0x4A3190u;
    SET_GPR_U32(ctx, 31, 0x4A3198u);
    ctx->pc = 0x4A3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3190u;
    // 0x4a3194: 0x248489a0  addiu       $a0, $a0, -0x7660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EFC8u, 0x4A3190u, 0x4A3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3198u;
label_4a3198:
    // 0x4a3198: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a319c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a319cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a31a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a31a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a31a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a31a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a31a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a31a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a31ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a31acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a31b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A31B0u;
        // 0x4a31b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A31B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A31B8u;
}
