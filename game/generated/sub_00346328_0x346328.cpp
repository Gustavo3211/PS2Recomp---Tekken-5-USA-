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

// Function: sub_00346328
// Address: 0x346328 - 0x3463d8
void sub_00346328_0x346328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346328_0x346328");
#endif

    switch (ctx->pc) {
        case 0x346360u: goto label_346360;
        case 0x3463a8u: goto label_3463a8;
        case 0x3463c0u: goto label_3463c0;
        default: break;
    }

    ctx->pc = 0x346328u;

    // 0x346328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34632c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x346330: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x346330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x346334: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x346334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346338: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34633c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x34633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x346340: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x346340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x346344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346348: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x346348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34634c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34634cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x346354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346358: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x346358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34635c: 0x0  nop
    ctx->pc = 0x34635cu;
    // NOP
label_346360:
    // 0x346360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346364: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346364u;
    {
        const bool branch_taken_0x346364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346364u;
        // 0x346368: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346364) {
            ctx->pc = 0x346378u;
            goto label_346378;
        }
    }
    ctx->pc = 0x34636Cu;
    // 0x34636c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x34636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x346370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346370u;
    {
        const bool branch_taken_0x346370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346370u;
        // 0x346374: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346370) {
            ctx->pc = 0x346390u;
            goto label_346390;
        }
    }
    ctx->pc = 0x346378u;
label_346378:
    // 0x346378: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x346378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x34637c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x34637cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x346380: 0x0  nop
    ctx->pc = 0x346380u;
    // NOP
    // 0x346384: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x346384u;
    {
        const bool branch_taken_0x346384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346384u;
        // 0x346388: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346384) {
            ctx->pc = 0x346360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346360;
        }
    }
    ctx->pc = 0x34638Cu;
    // 0x34638c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34638cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346390:
    // 0x346390: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346394: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x346394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34639c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463a0: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x3463A0u;
    SET_GPR_U32(ctx, 31, 0x3463A8u);
    ctx->pc = 0x3463A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463A0u;
    // 0x3463a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x3463A0u, 0x3463A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463A8u;
label_3463a8:
    // 0x3463a8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3463a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3463ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3463acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3463b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3463b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463b8: 0xc0d2a7a  jal         func_34A9E8
    ctx->pc = 0x3463B8u;
    SET_GPR_U32(ctx, 31, 0x3463C0u);
    ctx->pc = 0x3463BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463B8u;
    // 0x3463bc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A9E8u, 0x3463B8u, 0x3463C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463C0u;
label_3463c0:
    // 0x3463c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3463c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3463c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3463c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3463c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3463c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3463cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3463ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3463d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3463D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3463D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463D0u;
        // 0x3463d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3463D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3463D8u;
}
