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

// Function: sub_004A0120
// Address: 0x4a0120 - 0x4a02a0
void sub_004A0120_0x4a0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0120_0x4a0120");
#endif

    switch (ctx->pc) {
        case 0x4a0120u: goto label_4a0120;
        case 0x4a0124u: goto label_4a0124;
        case 0x4a0128u: goto label_4a0128;
        case 0x4a012cu: goto label_4a012c;
        case 0x4a0130u: goto label_4a0130;
        case 0x4a0134u: goto label_4a0134;
        case 0x4a0138u: goto label_4a0138;
        case 0x4a013cu: goto label_4a013c;
        case 0x4a0140u: goto label_4a0140;
        case 0x4a0144u: goto label_4a0144;
        case 0x4a0148u: goto label_4a0148;
        case 0x4a014cu: goto label_4a014c;
        case 0x4a0150u: goto label_4a0150;
        case 0x4a0154u: goto label_4a0154;
        case 0x4a0158u: goto label_4a0158;
        case 0x4a015cu: goto label_4a015c;
        case 0x4a0160u: goto label_4a0160;
        case 0x4a0164u: goto label_4a0164;
        case 0x4a0168u: goto label_4a0168;
        case 0x4a016cu: goto label_4a016c;
        case 0x4a0170u: goto label_4a0170;
        case 0x4a0174u: goto label_4a0174;
        case 0x4a0178u: goto label_4a0178;
        case 0x4a017cu: goto label_4a017c;
        case 0x4a0180u: goto label_4a0180;
        case 0x4a0184u: goto label_4a0184;
        case 0x4a0188u: goto label_4a0188;
        case 0x4a018cu: goto label_4a018c;
        case 0x4a0190u: goto label_4a0190;
        case 0x4a0194u: goto label_4a0194;
        case 0x4a0198u: goto label_4a0198;
        case 0x4a019cu: goto label_4a019c;
        case 0x4a01a0u: goto label_4a01a0;
        case 0x4a01a4u: goto label_4a01a4;
        case 0x4a01a8u: goto label_4a01a8;
        case 0x4a01acu: goto label_4a01ac;
        case 0x4a01b0u: goto label_4a01b0;
        case 0x4a01b4u: goto label_4a01b4;
        case 0x4a01b8u: goto label_4a01b8;
        case 0x4a01bcu: goto label_4a01bc;
        case 0x4a01c0u: goto label_4a01c0;
        case 0x4a01c4u: goto label_4a01c4;
        case 0x4a01c8u: goto label_4a01c8;
        case 0x4a01ccu: goto label_4a01cc;
        case 0x4a01d0u: goto label_4a01d0;
        case 0x4a01d4u: goto label_4a01d4;
        case 0x4a01d8u: goto label_4a01d8;
        case 0x4a01dcu: goto label_4a01dc;
        case 0x4a01e0u: goto label_4a01e0;
        case 0x4a01e4u: goto label_4a01e4;
        case 0x4a01e8u: goto label_4a01e8;
        case 0x4a01ecu: goto label_4a01ec;
        case 0x4a01f0u: goto label_4a01f0;
        case 0x4a01f4u: goto label_4a01f4;
        case 0x4a01f8u: goto label_4a01f8;
        case 0x4a01fcu: goto label_4a01fc;
        case 0x4a0200u: goto label_4a0200;
        case 0x4a0204u: goto label_4a0204;
        case 0x4a0208u: goto label_4a0208;
        case 0x4a020cu: goto label_4a020c;
        case 0x4a0210u: goto label_4a0210;
        case 0x4a0214u: goto label_4a0214;
        case 0x4a0218u: goto label_4a0218;
        case 0x4a021cu: goto label_4a021c;
        case 0x4a0220u: goto label_4a0220;
        case 0x4a0224u: goto label_4a0224;
        case 0x4a0228u: goto label_4a0228;
        case 0x4a022cu: goto label_4a022c;
        case 0x4a0230u: goto label_4a0230;
        case 0x4a0234u: goto label_4a0234;
        case 0x4a0238u: goto label_4a0238;
        case 0x4a023cu: goto label_4a023c;
        case 0x4a0240u: goto label_4a0240;
        case 0x4a0244u: goto label_4a0244;
        case 0x4a0248u: goto label_4a0248;
        case 0x4a024cu: goto label_4a024c;
        case 0x4a0250u: goto label_4a0250;
        case 0x4a0254u: goto label_4a0254;
        case 0x4a0258u: goto label_4a0258;
        case 0x4a025cu: goto label_4a025c;
        case 0x4a0260u: goto label_4a0260;
        case 0x4a0264u: goto label_4a0264;
        case 0x4a0268u: goto label_4a0268;
        case 0x4a026cu: goto label_4a026c;
        case 0x4a0270u: goto label_4a0270;
        case 0x4a0274u: goto label_4a0274;
        case 0x4a0278u: goto label_4a0278;
        case 0x4a027cu: goto label_4a027c;
        case 0x4a0280u: goto label_4a0280;
        case 0x4a0284u: goto label_4a0284;
        case 0x4a0288u: goto label_4a0288;
        case 0x4a028cu: goto label_4a028c;
        case 0x4a0290u: goto label_4a0290;
        case 0x4a0294u: goto label_4a0294;
        case 0x4a0298u: goto label_4a0298;
        case 0x4a029cu: goto label_4a029c;
        default: break;
    }

    ctx->pc = 0x4a0120u;

label_4a0120:
    // 0x4a0120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a0124:
    // 0x4a0124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0128:
    // 0x4a0128: 0xc1232f2  jal         func_48CBC8
label_4a012c:
    if (ctx->pc == 0x4A012Cu) {
        ctx->pc = 0x4A0130u;
        goto label_4a0130;
    }
    ctx->pc = 0x4A0128u;
    SET_GPR_U32(ctx, 31, 0x4A0130u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A0128u, 0x4A0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0130u;
label_4a0130:
    // 0x4a0130: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a0130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a0134:
    // 0x4a0134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a0134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a0138:
    // 0x4a0138: 0x24e8006c  addiu       $t0, $a3, 0x6C
    ctx->pc = 0x4a0138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
label_4a013c:
    // 0x4a013c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4a0140:
    // 0x4a0140: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4a0140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0144:
    // 0x4a0144: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a0144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0148:
    // 0x4a0148: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_4a014c:
    if (ctx->pc == 0x4A014Cu) {
        ctx->pc = 0x4A014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0148u;
        // 0x4a014c: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0150u;
        goto label_4a0150;
    }
    ctx->pc = 0x4A0148u;
    {
        const bool branch_taken_0x4a0148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0148u;
        // 0x4a014c: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0148) {
            ctx->pc = 0x4A0174u;
            goto label_4a0174;
        }
    }
    ctx->pc = 0x4A0150u;
label_4a0150:
    // 0x4a0150: 0x94e2007e  lhu         $v0, 0x7E($a3)
    ctx->pc = 0x4a0150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 126)));
label_4a0154:
    // 0x4a0154: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4a0154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4a0158:
    // 0x4a0158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4a015c:
    if (ctx->pc == 0x4A015Cu) {
        ctx->pc = 0x4A015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0158u;
        // 0x4a015c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0160u;
        goto label_4a0160;
    }
    ctx->pc = 0x4A0158u;
    {
        const bool branch_taken_0x4a0158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0158u;
        // 0x4a015c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0158) {
            ctx->pc = 0x4A0178u;
            goto label_4a0178;
        }
    }
    ctx->pc = 0x4A0160u;
label_4a0160:
    // 0x4a0160: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4a0160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4a0164:
    // 0x4a0164: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a0164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_4a0168:
    // 0x4a0168: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a0168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a016c:
    // 0x4a016c: 0x40f809  jalr        $v0
label_4a0170:
    if (ctx->pc == 0x4A0170u) {
        ctx->pc = 0x4A0174u;
        goto label_4a0174;
    }
    ctx->pc = 0x4A016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A016Cu, 0x4A0174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0174u;
label_4a0174:
    // 0x4a0174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0178:
    // 0x4a0178: 0x3e00008  jr          $ra
label_4a017c:
    if (ctx->pc == 0x4A017Cu) {
        ctx->pc = 0x4A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0178u;
        // 0x4a017c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0180u;
        goto label_4a0180;
    }
    ctx->pc = 0x4A0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0178u;
        // 0x4a017c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0180u;
label_4a0180:
    // 0x4a0180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a0184:
    // 0x4a0184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4a0188:
    // 0x4a0188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a0188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4a018c:
    // 0x4a018c: 0xc129360  jal         func_4A4D80
label_4a0190:
    if (ctx->pc == 0x4A0190u) {
        ctx->pc = 0x4A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A018Cu;
        // 0x4a0190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0194u;
        goto label_4a0194;
    }
    ctx->pc = 0x4A018Cu;
    SET_GPR_U32(ctx, 31, 0x4A0194u);
    ctx->pc = 0x4A0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A018Cu;
    // 0x4a0190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D80u, 0x4A018Cu, 0x4A0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0194u;
label_4a0194:
    // 0x4a0194: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a0194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4a0198:
    // 0x4a0198: 0x860401c6  lh          $a0, 0x1C6($s0)
    ctx->pc = 0x4a0198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_4a019c:
    // 0x4a019c: 0x24e70bc8  addiu       $a3, $a3, 0xBC8
    ctx->pc = 0x4a019cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3016));
label_4a01a0:
    // 0x4a01a0: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4a01a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4a01a4:
    // 0x4a01a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a01a8:
    // 0x4a01a8: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x4a01a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
label_4a01ac:
    // 0x4a01ac: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4a01acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_4a01b0:
    // 0x4a01b0: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4a01b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4a01b4:
    // 0x4a01b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a01b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a01b8:
    // 0x4a01b8: 0x84a9d6ba  lh          $t1, -0x2946($a1)
    ctx->pc = 0x4a01b8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294956730)));
label_4a01bc:
    // 0x4a01bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a01bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4a01c0:
    // 0x4a01c0: 0x254a0bd8  addiu       $t2, $t2, 0xBD8
    ctx->pc = 0x4a01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3032));
label_4a01c4:
    // 0x4a01c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4a01c8:
    // 0x4a01c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a01cc:
    // 0x4a01cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a01ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4a01d0:
    // 0x4a01d0: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x4a01d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_4a01d4:
    // 0x4a01d4: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4a01d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4a01d8:
    // 0x4a01d8: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4a01d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a01dc:
    // 0x4a01dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a01dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a01e0:
    // 0x4a01e0: 0x8cc40bd4  lw          $a0, 0xBD4($a2)
    ctx->pc = 0x4a01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3028)));
label_4a01e4:
    // 0x4a01e4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x4a01e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_4a01e8:
    // 0x4a01e8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a01e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a01ec:
    // 0x4a01ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a01ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4a01f0:
    // 0x4a01f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a01f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a01f4:
    // 0x4a01f4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4a01f8:
    // 0x4a01f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a01f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a01fc:
    // 0x4a01fc: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4a01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_4a0200:
    // 0x4a0200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a0200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a0204:
    // 0x4a0204: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4a0204u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4a0208:
    // 0x4a0208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a0208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a020c:
    // 0x4a020c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a020cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4a0210:
    // 0x4a0210: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4a0210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4a0214:
    // 0x4a0214: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4a0214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4a0218:
    // 0x4a0218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4a021c:
    // 0x4a021c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4a0220:
    // 0x4a0220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a0224:
    // 0x4a0224: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a0224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4a0228:
    // 0x4a0228: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a0228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a022c:
    // 0x4a022c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a022cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4a0230:
    // 0x4a0230: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a0230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a0234:
    // 0x4a0234: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4a0234u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
label_4a0238:
    // 0x4a0238: 0x8125e9e  j           func_497A78
label_4a023c:
    if (ctx->pc == 0x4A023Cu) {
        ctx->pc = 0x4A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0238u;
        // 0x4a023c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0240u;
        goto label_4a0240;
    }
    ctx->pc = 0x4A0238u;
    ctx->pc = 0x4A023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0238u;
    // 0x4a023c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A78u, 0x4A0238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A0240u;
label_4a0240:
    // 0x4a0240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a0244:
    // 0x4a0244: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a0244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a0248:
    // 0x4a0248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a024c:
    // 0x4a024c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a0250:
    // 0x4a0250: 0xac620bd4  sw          $v0, 0xBD4($v1)
    ctx->pc = 0x4a0250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3028), GPR_U32(ctx, 2));
label_4a0254:
    // 0x4a0254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0258:
    // 0x4a0258: 0x8128060  j           func_4A0180
label_4a025c:
    if (ctx->pc == 0x4A025Cu) {
        ctx->pc = 0x4A025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0258u;
        // 0x4a025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0260u;
        goto label_4a0260;
    }
    ctx->pc = 0x4A0258u;
    ctx->pc = 0x4A025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0258u;
    // 0x4a025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0180u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4a0180;
    ctx->pc = 0x4A0260u;
label_4a0260:
    // 0x4a0260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a0264:
    // 0x4a0264: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a0264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a0268:
    // 0x4a0268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a026c:
    // 0x4a026c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0270:
    // 0x4a0270: 0xac620bd4  sw          $v0, 0xBD4($v1)
    ctx->pc = 0x4a0270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3028), GPR_U32(ctx, 2));
label_4a0274:
    // 0x4a0274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0278:
    // 0x4a0278: 0x8128060  j           func_4A0180
label_4a027c:
    if (ctx->pc == 0x4A027Cu) {
        ctx->pc = 0x4A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0278u;
        // 0x4a027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0280u;
        goto label_4a0280;
    }
    ctx->pc = 0x4A0278u;
    ctx->pc = 0x4A027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0278u;
    // 0x4a027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0180u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4a0180;
    ctx->pc = 0x4A0280u;
label_4a0280:
    // 0x4a0280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a0284:
    // 0x4a0284: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a0288:
    // 0x4a0288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a028c:
    // 0x4a028c: 0xac400bd4  sw          $zero, 0xBD4($v0)
    ctx->pc = 0x4a028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3028), GPR_U32(ctx, 0));
label_4a0290:
    // 0x4a0290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0294:
    // 0x4a0294: 0x8128060  j           func_4A0180
label_4a0298:
    if (ctx->pc == 0x4A0298u) {
        ctx->pc = 0x4A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0294u;
        // 0x4a0298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A029Cu;
        goto label_4a029c;
    }
    ctx->pc = 0x4A0294u;
    ctx->pc = 0x4A0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0294u;
    // 0x4a0298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0180u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4a0180;
    ctx->pc = 0x4A029Cu;
label_4a029c:
    // 0x4a029c: 0x0  nop
    ctx->pc = 0x4a029cu;
    // NOP
    ctx->pc = 0x4a02a0u;
}
