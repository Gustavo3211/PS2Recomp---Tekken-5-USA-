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

// Function: sub_00325820
// Address: 0x325820 - 0x3258f8
void sub_00325820_0x325820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325820_0x325820");
#endif

    switch (ctx->pc) {
        case 0x325848u: goto label_325848;
        case 0x325868u: goto label_325868;
        case 0x325898u: goto label_325898;
        case 0x3258e8u: goto label_3258e8;
        default: break;
    }

    ctx->pc = 0x325820u;

    // 0x325820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325824: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x325824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x325828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32582c: 0x2452f8c8  addiu       $s2, $v0, -0x738
    ctx->pc = 0x32582cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
    // 0x325830: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x325830u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EF8C8u));
    // 0x325834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32583c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32583Cu;
    {
        const bool branch_taken_0x32583c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x325840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32583Cu;
        // 0x325840: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32583c) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x325844u;
    // 0x325844: 0x0  nop
    ctx->pc = 0x325844u;
    // NOP
label_325848:
    // 0x325848: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x325848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x32584c: 0x26510024  addiu       $s1, $s2, 0x24
    ctx->pc = 0x32584cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x325850: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x325850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x325854: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x325854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325858: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x325858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32585c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x32585cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325860: 0xc0c94ca  jal         func_325328
    ctx->pc = 0x325860u;
    SET_GPR_U32(ctx, 31, 0x325868u);
    ctx->pc = 0x325864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325860u;
    // 0x325864: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325328u, 0x325860u, 0x325868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325868u;
label_325868:
    // 0x325868: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x325868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32586c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x325870: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x325870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325874: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x325874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x325878: 0x3c017f00  lui         $at, 0x7F00
    ctx->pc = 0x325878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32512 << 16));
    // 0x32587c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x32587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x325880: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x325880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x325884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325884u;
    {
        const bool branch_taken_0x325884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325884u;
        // 0x325888: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325884) {
            ctx->pc = 0x325898u;
            goto label_325898;
        }
    }
    ctx->pc = 0x32588Cu;
    // 0x32588c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x32588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x325890: 0xc0c94ca  jal         func_325328
    ctx->pc = 0x325890u;
    SET_GPR_U32(ctx, 31, 0x325898u);
    ctx->pc = 0x325894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325890u;
    // 0x325894: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325328u, 0x325890u, 0x325898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325898u;
label_325898:
    // 0x325898: 0x2652003c  addiu       $s2, $s2, 0x3C
    ctx->pc = 0x325898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x32589c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3258a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3258A0u;
    {
        const bool branch_taken_0x3258a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3258A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258A0u;
        // 0x3258a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258a0) {
            ctx->pc = 0x325848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325848;
        }
    }
    ctx->pc = 0x3258A8u;
label_3258a8:
    // 0x3258a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3258a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3258ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3258acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3258b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3258b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3258b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3258b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3258b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3258B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258B8u;
        // 0x3258bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258C0u;
    // 0x3258c0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3258c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3258c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3258c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3258c8: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x3258c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x3258cc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3258d0: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x3258d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3258d4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3258d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3258d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3258d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3258dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3258e0: 0xc0c9660  jal         func_325980
    ctx->pc = 0x3258E0u;
    SET_GPR_U32(ctx, 31, 0x3258E8u);
    ctx->pc = 0x3258E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3258E0u;
    // 0x3258e4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325980u, 0x3258E0u, 0x3258E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258E8u;
label_3258e8:
    // 0x3258e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3258e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3258ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3258ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258ECu;
        // 0x3258f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258F4u;
    // 0x3258f4: 0x0  nop
    ctx->pc = 0x3258f4u;
    // NOP
    ctx->pc = 0x3258f8u;
}
