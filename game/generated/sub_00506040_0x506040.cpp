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

// Function: sub_00506040
// Address: 0x506040 - 0x5061f8
void sub_00506040_0x506040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506040_0x506040");
#endif

    switch (ctx->pc) {
        case 0x5060b0u: goto label_5060b0;
        case 0x5060b4u: goto label_5060b4;
        case 0x5060e8u: goto label_5060e8;
        case 0x506134u: goto label_506134;
        default: break;
    }

    ctx->pc = 0x506040u;

    // 0x506040: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x506040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x506044: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x506044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x506048: 0x24423d64  addiu       $v0, $v0, 0x3D64
    ctx->pc = 0x506048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15716));
    // 0x50604c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x506050: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x506050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x506054: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x506054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x506058: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x506058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50605c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50605cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x506060: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x506060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506064: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x506064u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x506068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50606c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x50606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x506070: 0xaca2c550  sw          $v0, -0x3AB0($a1)
    ctx->pc = 0x506070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC550u, _value); } while (0);
    // 0x506074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x506074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x506078: 0x2491c534  addiu       $s1, $a0, -0x3ACC
    ctx->pc = 0x506078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952244));
    // 0x50607c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x506080: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x506080u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x506084: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x506084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x506088: 0x24d3c540  addiu       $s3, $a2, -0x3AC0
    ctx->pc = 0x506088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952256));
    // 0x50608c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x506090: 0x2474c52c  addiu       $s4, $v1, -0x3AD4
    ctx->pc = 0x506090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952236));
    // 0x506094: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x506094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x506098: 0x26d5c548  addiu       $s5, $s6, -0x3AB8
    ctx->pc = 0x506098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952264));
    // 0x50609c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x5060a0: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x5060a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x5060a4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x5060a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5060a8: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x5060a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x5060ac: 0x0  nop
    ctx->pc = 0x5060acu;
    // NOP
label_5060b0:
    // 0x5060b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x5060b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5060b4:
    // 0x5060b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5060b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5060b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x5060b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5060bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5060bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5060c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5060c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5060c4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x5060c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x5060c8: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x5060c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x5060cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5060ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5060d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5060d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5060d4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x5060d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5060d8: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x5060D8u;
    {
        const bool branch_taken_0x5060d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x5060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5060D8u;
        // 0x5060dc: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5060d8) {
            ctx->pc = 0x506120u;
            goto label_506120;
        }
    }
    ctx->pc = 0x5060E0u;
    // 0x5060e0: 0xc141756  jal         func_505D58
    ctx->pc = 0x5060E0u;
    SET_GPR_U32(ctx, 31, 0x5060E8u);
    ctx->pc = 0x505D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505D58u, 0x5060E0u, 0x5060E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5060E8u;
label_5060e8:
    // 0x5060e8: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x5060E8u;
    {
        const bool branch_taken_0x5060e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5060e8) {
            ctx->pc = 0x5060ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5060E8u;
            // 0x5060ec: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5060B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5060b4;
        }
    }
    ctx->pc = 0x5060F0u;
    // 0x5060f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5060f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5060f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5060f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5060f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5060f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5060fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5060fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506100: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x506100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506104: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x506104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506108: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x506108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50610c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x50610cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x506110: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x506110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x506114: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x506114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x506118: 0x3e00008  jr          $ra
    ctx->pc = 0x506118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506118u;
        // 0x50611c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506120u;
label_506120:
    // 0x506120: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x506120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506124: 0x2450c530  addiu       $s0, $v0, -0x3AD0
    ctx->pc = 0x506124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x506128: 0x2464c528  addiu       $a0, $v1, -0x3AD8
    ctx->pc = 0x506128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952232));
    // 0x50612c: 0xc14481c  jal         func_512070
    ctx->pc = 0x50612Cu;
    SET_GPR_U32(ctx, 31, 0x506134u);
    ctx->pc = 0x506130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50612Cu;
    // 0x506130: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50612Cu, 0x506134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506134u;
label_506134:
    // 0x506134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x506134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x506138: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x506138u;
    {
        const bool branch_taken_0x506138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x506138) {
            ctx->pc = 0x50613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x506138u;
            // 0x50613c: 0x3c07008f  lui         $a3, 0x8F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5061CCu;
            goto label_5061cc;
        }
    }
    ctx->pc = 0x506140u;
    // 0x506140: 0x87c4c538  lh          $a0, -0x3AC8($fp)
    ctx->pc = 0x506140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294952248)));
    // 0x506144: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x506144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x506148: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x506148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50614c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x50614cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506150: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x506150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x506154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x506158: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x506158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50615c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x506160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506168: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x506168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50616c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x506170: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x506170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506174: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x506174u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x506178: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x506178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50617c: 0x9482c540  lhu         $v0, -0x3AC0($a0)
    ctx->pc = 0x50617cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294952256)));
    // 0x506180: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x506180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x506184: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x506184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506188: 0x96e3c544  lhu         $v1, -0x3ABC($s7)
    ctx->pc = 0x506188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4294952260)));
    // 0x50618c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x50618cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x506190: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x506190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x506194: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x506194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506198: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x506198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x50619c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x50619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x5061a0: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x5061a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5061a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5061a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5061a8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x5061a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x5061ac: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x5061acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x5061b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5061b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5061b4: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x5061b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x5061b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5061b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5061bc: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x5061bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x5061c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5061c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5061c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x5061c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x5061c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5061c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5061cc:
    // 0x5061cc: 0x8ce2c548  lw          $v0, -0x3AB8($a3)
    ctx->pc = 0x5061ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294952264)));
    // 0x5061d0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x5061d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5061d4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x5061d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x5061d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x5061d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5061dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x5061dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5061e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5061e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5061e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5061e8: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x5061e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x5061ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5061ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5061f0: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x5061F0u;
    {
        const bool branch_taken_0x5061f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5061F0u;
        // 0x5061f4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5061f0) {
            ctx->pc = 0x5060B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5060b0;
        }
    }
    ctx->pc = 0x5061F8u;
}
