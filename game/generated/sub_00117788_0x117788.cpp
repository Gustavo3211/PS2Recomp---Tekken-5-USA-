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

// Function: sub_00117788
// Address: 0x117788 - 0x117968
void sub_00117788_0x117788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117788_0x117788");
#endif

    switch (ctx->pc) {
        case 0x1177d8u: goto label_1177d8;
        case 0x1177f8u: goto label_1177f8;
        case 0x117848u: goto label_117848;
        case 0x117868u: goto label_117868;
        case 0x1178c4u: goto label_1178c4;
        case 0x1178e8u: goto label_1178e8;
        case 0x117944u: goto label_117944;
        default: break;
    }

    ctx->pc = 0x117788u;

    // 0x117788: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x117788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11778c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11778cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117790: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x117790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1311ACu));
    // 0x117794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117798: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117798u;
    {
        const bool branch_taken_0x117798 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117798u;
        // 0x11779c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117798) {
            ctx->pc = 0x1177A8u;
            goto label_1177a8;
        }
    }
    ctx->pc = 0x1177A0u;
    // 0x1177a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1177A0u;
    {
        const bool branch_taken_0x1177a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177A0u;
        // 0x1177a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177a0) {
            ctx->pc = 0x1177E8u;
            goto label_1177e8;
        }
    }
    ctx->pc = 0x1177A8u;
label_1177a8:
    // 0x1177a8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1177a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1177ac: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1177acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x1177b0: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x1177b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x1177b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1177b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1177b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1177b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1177bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1177bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1177c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1177c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c8: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x1177cc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1177ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1177d0: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1177D0u;
    SET_GPR_U32(ctx, 31, 0x1177D8u);
    ctx->pc = 0x1177D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177D0u;
    // 0x1177d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1177D0u, 0x1177D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177D8u;
label_1177d8:
    // 0x1177d8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1177D8u;
    {
        const bool branch_taken_0x1177d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1177d8) {
            ctx->pc = 0x1177DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1177D8u;
            // 0x1177dc: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1177E8u;
            goto label_1177e8;
        }
    }
    ctx->pc = 0x1177E0u;
    // 0x1177e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1177e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1177e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1177e8:
    // 0x1177e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1177e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1177ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1177F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1177fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117800: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1311ACu));
    // 0x117804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117808: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117808u;
    {
        const bool branch_taken_0x117808 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117808u;
        // 0x11780c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117808) {
            ctx->pc = 0x117818u;
            goto label_117818;
        }
    }
    ctx->pc = 0x117810u;
    // 0x117810: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x117810u;
    {
        const bool branch_taken_0x117810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117810u;
        // 0x117814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117810) {
            ctx->pc = 0x117858u;
            goto label_117858;
        }
    }
    ctx->pc = 0x117818u;
label_117818:
    // 0x117818: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11781c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x117820: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x117820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x117824: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117828: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11782c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11782cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117838: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x117838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x11783c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117840: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x117840u;
    SET_GPR_U32(ctx, 31, 0x117848u);
    ctx->pc = 0x117844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117840u;
    // 0x117844: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x117840u, 0x117848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117848u;
label_117848:
    // 0x117848: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117848u;
    {
        const bool branch_taken_0x117848 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117848) {
            ctx->pc = 0x11784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117848u;
            // 0x11784c: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117858u;
            goto label_117858;
        }
    }
    ctx->pc = 0x117850u;
    // 0x117850: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117854: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_117858:
    // 0x117858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11785c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11785cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117860: 0x3e00008  jr          $ra
    ctx->pc = 0x117860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117860u;
        // 0x117864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117868u;
label_117868:
    // 0x117868: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x117868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11786c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11786cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117870: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x117870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1311ACu));
    // 0x117874: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11787c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11787Cu;
    {
        const bool branch_taken_0x11787c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11787Cu;
        // 0x117880: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11787c) {
            ctx->pc = 0x11788Cu;
            goto label_11788c;
        }
    }
    ctx->pc = 0x117884u;
    // 0x117884: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x117884u;
    {
        const bool branch_taken_0x117884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117884u;
        // 0x117888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117884) {
            ctx->pc = 0x1178D4u;
            goto label_1178d4;
        }
    }
    ctx->pc = 0x11788Cu;
label_11788c:
    // 0x11788c: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x11788cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x117890: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117894: 0xace5bbc0  sw          $a1, -0x4440($a3)
    ctx->pc = 0x117894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EBBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBBC0u, _value); } while (0);
    // 0x117898: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x117898u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11789c: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x11789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x1178a0: 0x24e7bbc0  addiu       $a3, $a3, -0x4440
    ctx->pc = 0x1178a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949824));
    // 0x1178a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1178a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1178a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1178ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1178acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1178b4: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x1178b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1178bc: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1178BCu;
    SET_GPR_U32(ctx, 31, 0x1178C4u);
    ctx->pc = 0x1178C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178BCu;
    // 0x1178c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1178BCu, 0x1178C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178C4u;
label_1178c4:
    // 0x1178c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1178C4u;
    {
        const bool branch_taken_0x1178c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1178c4) {
            ctx->pc = 0x1178C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1178C4u;
            // 0x1178c8: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1178D4u;
            goto label_1178d4;
        }
    }
    ctx->pc = 0x1178CCu;
    // 0x1178cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1178d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1178d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1178d4:
    // 0x1178d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1178d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1178d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1178d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1178dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1178DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1178E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178DCu;
        // 0x1178e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1178E4u;
    // 0x1178e4: 0x0  nop
    ctx->pc = 0x1178e4u;
    // NOP
label_1178e8:
    // 0x1178e8: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1178e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1178ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1178ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1178f0: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x1178f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1311ACu));
    // 0x1178f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1178f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1178fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1178FCu;
    {
        const bool branch_taken_0x1178fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178FCu;
        // 0x117900: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178fc) {
            ctx->pc = 0x11790Cu;
            goto label_11790c;
        }
    }
    ctx->pc = 0x117904u;
    // 0x117904: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x117904u;
    {
        const bool branch_taken_0x117904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117904u;
        // 0x117908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117904) {
            ctx->pc = 0x117954u;
            goto label_117954;
        }
    }
    ctx->pc = 0x11790Cu;
label_11790c:
    // 0x11790c: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x11790cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x117910: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117914: 0xace5bbc0  sw          $a1, -0x4440($a3)
    ctx->pc = 0x117914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1EBBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EBBC0u, _value); } while (0);
    // 0x117918: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11791c: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x117920: 0x24e7bbc0  addiu       $a3, $a3, -0x4440
    ctx->pc = 0x117920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949824));
    // 0x117924: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117928: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x117928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11792c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11792cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117930: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117934: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x117934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x117938: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11793c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11793Cu;
    SET_GPR_U32(ctx, 31, 0x117944u);
    ctx->pc = 0x117940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11793Cu;
    // 0x117940: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x11793Cu, 0x117944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117944u;
label_117944:
    // 0x117944: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117944u;
    {
        const bool branch_taken_0x117944 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117944) {
            ctx->pc = 0x117948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117944u;
            // 0x117948: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117954u;
            goto label_117954;
        }
    }
    ctx->pc = 0x11794Cu;
    // 0x11794c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_117954:
    // 0x117954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11795c: 0x3e00008  jr          $ra
    ctx->pc = 0x11795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11795Cu;
        // 0x117960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11795Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117964u;
    // 0x117964: 0x0  nop
    ctx->pc = 0x117964u;
    // NOP
    ctx->pc = 0x117968u;
}
