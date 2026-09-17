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

// Function: sub_001F0180
// Address: 0x1f0180 - 0x1f0388
void sub_001F0180_0x1f0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0180_0x1f0180");
#endif

    switch (ctx->pc) {
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0360u: goto label_1f0360;
        default: break;
    }

    ctx->pc = 0x1f0180u;

    // 0x1f0180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f018c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0194: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0198: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f019c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f01a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f01a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f01a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f01a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f01a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f01ac: 0x2442d5f0  addiu       $v0, $v0, -0x2A10
    ctx->pc = 0x1f01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956528));
    // 0x1f01b0: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x1f01b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1f01b4: 0x26530058  addiu       $s3, $s2, 0x58
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x1f01b8: 0x26540060  addiu       $s4, $s2, 0x60
    ctx->pc = 0x1f01b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1f01bc: 0x26550068  addiu       $s5, $s2, 0x68
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1f01c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f01c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1f01c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f01cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f01d0: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1f01d4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1f01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1f01d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f01dc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1f01e0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1f01e4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1f01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1f01e8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1f01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1f01ec: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f01f0:
    // 0x1f01f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f01f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f01f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f01fc: 0x0  nop
    ctx->pc = 0x1f01fcu;
    // NOP
    // 0x1f0200: 0x0  nop
    ctx->pc = 0x1f0200u;
    // NOP
    // 0x1f0204: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F0204u;
    {
        const bool branch_taken_0x1f0204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0204u;
        // 0x1f0208: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0204) {
            ctx->pc = 0x1F01F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f01f0;
        }
    }
    ctx->pc = 0x1F020Cu;
    // 0x1f020c: 0x26560088  addiu       $s6, $s2, 0x88
    ctx->pc = 0x1f020cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x1f0210: 0x3c0657ff  lui         $a2, 0x57FF
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22527 << 16));
    // 0x1f0214: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1f0214u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1f0218: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1f0218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1f021c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1f021cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x1f0220: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f0220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f0224: 0x24632f30  addiu       $v1, $v1, 0x2F30
    ctx->pc = 0x1f0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
    // 0x1f0228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f022c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1f022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f0230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0234: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1f0234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1f0238: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1f023c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f023cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f0240: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F0240u;
    SET_GPR_U32(ctx, 31, 0x1F0248u);
    ctx->pc = 0x1F0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0240u;
    // 0x1f0244: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F0240u, 0x1F0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0248u;
label_1f0248:
    // 0x1f0248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f024c: 0xc0a1594  jal         func_285650
    ctx->pc = 0x1F024Cu;
    SET_GPR_U32(ctx, 31, 0x1F0254u);
    ctx->pc = 0x1F0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F024Cu;
    // 0x1f0250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285650u, 0x1F024Cu, 0x1F0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0254u;
label_1f0254:
    // 0x1f0254: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1f0254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1f0258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f025c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f025cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0260: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f0260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0264: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F0264u;
    SET_GPR_U32(ctx, 31, 0x1F026Cu);
    ctx->pc = 0x1F0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0264u;
    // 0x1f0268: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F0264u, 0x1F026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F026Cu;
label_1f026c:
    // 0x1f026c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f026cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0270: 0xc09024c  jal         func_240930
    ctx->pc = 0x1F0270u;
    SET_GPR_U32(ctx, 31, 0x1F0278u);
    ctx->pc = 0x1F0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0270u;
    // 0x1f0274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240930u, 0x1F0270u, 0x1F0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0278u;
label_1f0278:
    // 0x1f0278: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1f0278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1f027c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0284: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0288: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0288u;
    // 0x1f028c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F0288u, 0x1F0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0294: 0xc0b7de6  jal         func_2DF798
    ctx->pc = 0x1F0294u;
    SET_GPR_U32(ctx, 31, 0x1F029Cu);
    ctx->pc = 0x1F0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0294u;
    // 0x1f0298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF798u, 0x1F0294u, 0x1F029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F029Cu;
label_1f029c:
    // 0x1f029c: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x1f029cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x1f02a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f02a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f02a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f02ac: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F02ACu;
    SET_GPR_U32(ctx, 31, 0x1F02B4u);
    ctx->pc = 0x1F02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02ACu;
    // 0x1f02b0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F02ACu, 0x1F02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02B4u;
label_1f02b4:
    // 0x1f02b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f02b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02b8: 0xc0b8176  jal         func_2E05D8
    ctx->pc = 0x1F02B8u;
    SET_GPR_U32(ctx, 31, 0x1F02C0u);
    ctx->pc = 0x1F02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02B8u;
    // 0x1f02bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E05D8u, 0x1F02B8u, 0x1F02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02C0u;
label_1f02c0:
    // 0x1f02c0: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1f02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x1f02c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f02c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f02cc: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1f02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_1f02d0:
    // 0x1f02d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f02d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02d4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F02D4u;
    SET_GPR_U32(ctx, 31, 0x1F02DCu);
    ctx->pc = 0x1F02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02D4u;
    // 0x1f02d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F02D4u, 0x1F02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02DCu;
label_1f02dc:
    // 0x1f02dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f02dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f02e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02e4: 0xc0b876e  jal         func_2E1DB8
    ctx->pc = 0x1F02E4u;
    SET_GPR_U32(ctx, 31, 0x1F02ECu);
    ctx->pc = 0x1F02E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02E4u;
    // 0x1f02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1DB8u, 0x1F02E4u, 0x1F02ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02ECu;
label_1f02ec:
    // 0x1f02ec: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1f02f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f02f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f02f8: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x1f02f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f02fc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f0300: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f0300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1f0304: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f0304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0308: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F0308u;
    {
        const bool branch_taken_0x1f0308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0308u;
        // 0x1f030c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0308) {
            ctx->pc = 0x1F02D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f02d0;
        }
    }
    ctx->pc = 0x1F0310u;
    // 0x1f0310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0314: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x1F0314u;
    SET_GPR_U32(ctx, 31, 0x1F031Cu);
    ctx->pc = 0x1F0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0314u;
    // 0x1f0318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x1F0314u, 0x1F031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F031Cu;
label_1f031c:
    // 0x1f031c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f032c: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1F032Cu;
    SET_GPR_U32(ctx, 31, 0x1F0334u);
    ctx->pc = 0x1F0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F032Cu;
    // 0x1f0330: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A88u, 0x1F032Cu, 0x1F0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0334u;
label_1f0334:
    // 0x1f0334: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x1f0334u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x1f0338: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f0338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f033c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F033Cu;
    {
        const bool branch_taken_0x1f033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F033Cu;
        // 0x1f0340: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f033c) {
            ctx->pc = 0x1F0360u;
            goto label_1f0360;
        }
    }
    ctx->pc = 0x1F0344u;
    // 0x1f0344: 0x0  nop
    ctx->pc = 0x1f0344u;
    // NOP
    // 0x1f0348: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f034c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1f0350: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x1f0354: 0x2484fb08  addiu       $a0, $a0, -0x4F8
    ctx->pc = 0x1f0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966024));
    // 0x1f0358: 0xc048b90  jal         func_122E40
    ctx->pc = 0x1F0358u;
    SET_GPR_U32(ctx, 31, 0x1F0360u);
    ctx->pc = 0x1F035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0358u;
    // 0x1f035c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x1F0358u, 0x1F0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0360u;
label_1f0360:
    // 0x1f0360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f036c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f036cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f0370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0374: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f0374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0378: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f0378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f037c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f0380: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0380u;
        // 0x1f0384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0388u;
}
