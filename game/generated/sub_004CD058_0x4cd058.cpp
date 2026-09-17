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

// Function: sub_004CD058
// Address: 0x4cd058 - 0x4cd198
void sub_004CD058_0x4cd058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD058_0x4cd058");
#endif

    switch (ctx->pc) {
        case 0x4cd058u: goto label_4cd058;
        case 0x4cd05cu: goto label_4cd05c;
        case 0x4cd060u: goto label_4cd060;
        case 0x4cd064u: goto label_4cd064;
        case 0x4cd068u: goto label_4cd068;
        case 0x4cd06cu: goto label_4cd06c;
        case 0x4cd070u: goto label_4cd070;
        case 0x4cd074u: goto label_4cd074;
        case 0x4cd078u: goto label_4cd078;
        case 0x4cd07cu: goto label_4cd07c;
        case 0x4cd080u: goto label_4cd080;
        case 0x4cd084u: goto label_4cd084;
        case 0x4cd088u: goto label_4cd088;
        case 0x4cd08cu: goto label_4cd08c;
        case 0x4cd090u: goto label_4cd090;
        case 0x4cd094u: goto label_4cd094;
        case 0x4cd098u: goto label_4cd098;
        case 0x4cd09cu: goto label_4cd09c;
        case 0x4cd0a0u: goto label_4cd0a0;
        case 0x4cd0a4u: goto label_4cd0a4;
        case 0x4cd0a8u: goto label_4cd0a8;
        case 0x4cd0acu: goto label_4cd0ac;
        case 0x4cd0b0u: goto label_4cd0b0;
        case 0x4cd0b4u: goto label_4cd0b4;
        case 0x4cd0b8u: goto label_4cd0b8;
        case 0x4cd0bcu: goto label_4cd0bc;
        case 0x4cd0c0u: goto label_4cd0c0;
        case 0x4cd0c4u: goto label_4cd0c4;
        case 0x4cd0c8u: goto label_4cd0c8;
        case 0x4cd0ccu: goto label_4cd0cc;
        case 0x4cd0d0u: goto label_4cd0d0;
        case 0x4cd0d4u: goto label_4cd0d4;
        case 0x4cd0d8u: goto label_4cd0d8;
        case 0x4cd0dcu: goto label_4cd0dc;
        case 0x4cd0e0u: goto label_4cd0e0;
        case 0x4cd0e4u: goto label_4cd0e4;
        case 0x4cd0e8u: goto label_4cd0e8;
        case 0x4cd0ecu: goto label_4cd0ec;
        case 0x4cd0f0u: goto label_4cd0f0;
        case 0x4cd0f4u: goto label_4cd0f4;
        case 0x4cd0f8u: goto label_4cd0f8;
        case 0x4cd0fcu: goto label_4cd0fc;
        case 0x4cd100u: goto label_4cd100;
        case 0x4cd104u: goto label_4cd104;
        case 0x4cd108u: goto label_4cd108;
        case 0x4cd10cu: goto label_4cd10c;
        case 0x4cd110u: goto label_4cd110;
        case 0x4cd114u: goto label_4cd114;
        case 0x4cd118u: goto label_4cd118;
        case 0x4cd11cu: goto label_4cd11c;
        case 0x4cd120u: goto label_4cd120;
        case 0x4cd124u: goto label_4cd124;
        case 0x4cd128u: goto label_4cd128;
        case 0x4cd12cu: goto label_4cd12c;
        case 0x4cd130u: goto label_4cd130;
        case 0x4cd134u: goto label_4cd134;
        case 0x4cd138u: goto label_4cd138;
        case 0x4cd13cu: goto label_4cd13c;
        case 0x4cd140u: goto label_4cd140;
        case 0x4cd144u: goto label_4cd144;
        case 0x4cd148u: goto label_4cd148;
        case 0x4cd14cu: goto label_4cd14c;
        case 0x4cd150u: goto label_4cd150;
        case 0x4cd154u: goto label_4cd154;
        case 0x4cd158u: goto label_4cd158;
        case 0x4cd15cu: goto label_4cd15c;
        case 0x4cd160u: goto label_4cd160;
        case 0x4cd164u: goto label_4cd164;
        case 0x4cd168u: goto label_4cd168;
        case 0x4cd16cu: goto label_4cd16c;
        case 0x4cd170u: goto label_4cd170;
        case 0x4cd174u: goto label_4cd174;
        case 0x4cd178u: goto label_4cd178;
        case 0x4cd17cu: goto label_4cd17c;
        case 0x4cd180u: goto label_4cd180;
        case 0x4cd184u: goto label_4cd184;
        case 0x4cd188u: goto label_4cd188;
        case 0x4cd18cu: goto label_4cd18c;
        case 0x4cd190u: goto label_4cd190;
        case 0x4cd194u: goto label_4cd194;
        default: break;
    }

    ctx->pc = 0x4cd058u;

label_4cd058:
    // 0x4cd058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cd058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cd05c:
    // 0x4cd05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cd060:
    // 0x4cd060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cd060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cd064:
    // 0x4cd064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cd064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cd068:
    // 0x4cd068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cd068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cd06c:
    // 0x4cd06c: 0xc1232f2  jal         func_48CBC8
label_4cd070:
    if (ctx->pc == 0x4CD070u) {
        ctx->pc = 0x4CD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD06Cu;
        // 0x4cd070: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD074u;
        goto label_4cd074;
    }
    ctx->pc = 0x4CD06Cu;
    SET_GPR_U32(ctx, 31, 0x4CD074u);
    ctx->pc = 0x4CD070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD06Cu;
    // 0x4cd070: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CD06Cu, 0x4CD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD074u;
label_4cd074:
    // 0x4cd074: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4cd078:
    // 0x4cd078: 0xac620fa8  sw          $v0, 0xFA8($v1)
    ctx->pc = 0x4cd078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4008), GPR_U32(ctx, 2));
label_4cd07c:
    // 0x4cd07c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cd07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4cd080:
    // 0x4cd080: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
label_4cd084:
    if (ctx->pc == 0x4CD084u) {
        ctx->pc = 0x4CD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD080u;
        // 0x4cd084: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD088u;
        goto label_4cd088;
    }
    ctx->pc = 0x4CD080u;
    {
        const bool branch_taken_0x4cd080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD080u;
        // 0x4cd084: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd080) {
            ctx->pc = 0x4CD120u;
            goto label_4cd120;
        }
    }
    ctx->pc = 0x4CD088u;
label_4cd088:
    // 0x4cd088: 0xc12b642  jal         func_4AD908
label_4cd08c:
    if (ctx->pc == 0x4CD08Cu) {
        ctx->pc = 0x4CD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD088u;
        // 0x4cd08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD090u;
        goto label_4cd090;
    }
    ctx->pc = 0x4CD088u;
    SET_GPR_U32(ctx, 31, 0x4CD090u);
    ctx->pc = 0x4CD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD088u;
    // 0x4cd08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CD088u, 0x4CD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD090u;
label_4cd090:
    // 0x4cd090: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x4cd090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4cd094:
    // 0x4cd094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cd094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cd098:
    // 0x4cd098: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cd098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4cd09c:
    // 0x4cd09c: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4cd09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4cd0a0:
    // 0x4cd0a0: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4cd0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_4cd0a4:
    // 0x4cd0a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cd0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4cd0a8:
    // 0x4cd0a8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4cd0ac:
    // 0x4cd0ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4cd0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4cd0b0:
    // 0x4cd0b0: 0x24840f88  addiu       $a0, $a0, 0xF88
    ctx->pc = 0x4cd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3976));
label_4cd0b4:
    // 0x4cd0b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4cd0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4cd0b8:
    // 0x4cd0b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4cd0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4cd0bc:
    // 0x4cd0bc: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x4cd0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_4cd0c0:
    // 0x4cd0c0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x4cd0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4cd0c4:
    // 0x4cd0c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4cd0c8:
    // 0x4cd0c8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4cd0c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cd0cc:
    // 0x4cd0cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4cd0d0:
    // 0x4cd0d0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cd0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4cd0d4:
    // 0x4cd0d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cd0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4cd0d8:
    // 0x4cd0d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4cd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4cd0dc:
    // 0x4cd0dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cd0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4cd0e0:
    // 0x4cd0e0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4cd0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4cd0e4:
    // 0x4cd0e4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4cd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4cd0e8:
    // 0x4cd0e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cd0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cd0ec:
    // 0x4cd0ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4cd0f0:
    // 0x4cd0f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cd0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4cd0f4:
    // 0x4cd0f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4cd0f8:
    // 0x4cd0f8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cd0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4cd0fc:
    // 0x4cd0fc: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4cd0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
label_4cd100:
    // 0x4cd100: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4cd100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4cd104:
    // 0x4cd104: 0xa6090158  sh          $t1, 0x158($s0)
    ctx->pc = 0x4cd104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 9));
label_4cd108:
    // 0x4cd108: 0xa603015c  sh          $v1, 0x15C($s0)
    ctx->pc = 0x4cd108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 3));
label_4cd10c:
    // 0x4cd10c: 0xa60a01b6  sh          $t2, 0x1B6($s0)
    ctx->pc = 0x4cd10cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 10));
label_4cd110:
    // 0x4cd110: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cd110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4cd114:
    // 0x4cd114: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cd114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4cd118:
    // 0x4cd118: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4cd118u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cd11c:
    // 0x4cd11c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cd11cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4cd120:
    // 0x4cd120: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4cd120u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4cd124:
    // 0x4cd124: 0x25290f94  addiu       $t1, $t1, 0xF94
    ctx->pc = 0x4cd124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3988));
label_4cd128:
    // 0x4cd128: 0x254a0f98  addiu       $t2, $t2, 0xF98
    ctx->pc = 0x4cd128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3992));
label_4cd12c:
    // 0x4cd12c: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4cd12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4cd130:
    // 0x4cd130: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cd130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4cd134:
    // 0x4cd134: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4cd134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4cd138:
    // 0x4cd138: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4cd13c:
    // 0x4cd13c: 0x34630493  ori         $v1, $v1, 0x493
    ctx->pc = 0x4cd13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1171);
label_4cd140:
    // 0x4cd140: 0x3442047e  ori         $v0, $v0, 0x47E
    ctx->pc = 0x4cd140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1150);
label_4cd144:
    // 0x4cd144: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cd144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4cd148:
    // 0x4cd148: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cd148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4cd14c:
    // 0x4cd14c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4cd14cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4cd150:
    // 0x4cd150: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4cd150u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4cd154:
    // 0x4cd154: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4cd154u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4cd158:
    // 0x4cd158: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4cd158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4cd15c:
    // 0x4cd15c: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4cd15cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4cd160:
    // 0x4cd160: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4cd160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4cd164:
    // 0x4cd164: 0xc12b698  jal         func_4ADA60
label_4cd168:
    if (ctx->pc == 0x4CD168u) {
        ctx->pc = 0x4CD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD164u;
        // 0x4cd168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD16Cu;
        goto label_4cd16c;
    }
    ctx->pc = 0x4CD164u;
    SET_GPR_U32(ctx, 31, 0x4CD16Cu);
    ctx->pc = 0x4CD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD164u;
    // 0x4cd168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4CD164u, 0x4CD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD16Cu;
label_4cd16c:
    // 0x4cd16c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4cd16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4cd170:
    // 0x4cd170: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x4cd170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4cd174:
    // 0x4cd174: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_4cd178:
    if (ctx->pc == 0x4CD178u) {
        ctx->pc = 0x4CD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD174u;
        // 0x4cd178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD17Cu;
        goto label_4cd17c;
    }
    ctx->pc = 0x4CD174u;
    {
        const bool branch_taken_0x4cd174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd174) {
            ctx->pc = 0x4CD178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD174u;
            // 0x4cd178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD274u;
            return;
        }
    }
    ctx->pc = 0x4CD17Cu;
label_4cd17c:
    // 0x4cd17c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4cd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cd180:
    // 0x4cd180: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4cd180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4cd184:
    // 0x4cd184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cd184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4cd188:
    // 0x4cd188: 0x8c63b630  lw          $v1, -0x49D0($v1)
    ctx->pc = 0x4cd188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948400)));
label_4cd18c:
    // 0x4cd18c: 0x600008  jr          $v1
label_4cd190:
    if (ctx->pc == 0x4CD190u) {
        ctx->pc = 0x4CD194u;
        goto label_4cd194;
    }
    ctx->pc = 0x4CD18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD18Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4CD194u;
label_4cd194:
    // 0x4cd194: 0x0  nop
    ctx->pc = 0x4cd194u;
    // NOP
    ctx->pc = 0x4cd198u;
}
