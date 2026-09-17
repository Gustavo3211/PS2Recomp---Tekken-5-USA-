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

// Function: sub_00370818
// Address: 0x370818 - 0x3708b0
void sub_00370818_0x370818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370818_0x370818");
#endif

    switch (ctx->pc) {
        case 0x37083cu: goto label_37083c;
        case 0x370854u: goto label_370854;
        default: break;
    }

    ctx->pc = 0x370818u;

    // 0x370818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37081c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370824: 0x24507370  addiu       $s0, $v0, 0x7370
    ctx->pc = 0x370824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
    // 0x370828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7370u));
    // 0x37082c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37082Cu;
    {
        const bool branch_taken_0x37082c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37082Cu;
        // 0x370830: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37082c) {
            ctx->pc = 0x370854u;
            goto label_370854;
        }
    }
    ctx->pc = 0x370834u;
    // 0x370834: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x370834u;
    SET_GPR_U32(ctx, 31, 0x37083Cu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x370834u, 0x37083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37083Cu;
label_37083c:
    // 0x37083c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37083cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370840: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370844: 0x24a50ae8  addiu       $a1, $a1, 0xAE8
    ctx->pc = 0x370844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x370848: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x37084c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37084Cu;
    SET_GPR_U32(ctx, 31, 0x370854u);
    ctx->pc = 0x370850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37084Cu;
    // 0x370850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37084Cu, 0x370854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370854u;
label_370854:
    // 0x370854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37085c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37085cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370860: 0x3e00008  jr          $ra
    ctx->pc = 0x370860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370860u;
        // 0x370864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370868u;
    // 0x370868: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37086c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370870: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370874: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370878: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x37087c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370880: 0x24c6f598  addiu       $a2, $a2, -0xA68
    ctx->pc = 0x370880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964632));
    // 0x370884: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370888: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37088c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x37088cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370890: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370894: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370898: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x37089c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x37089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3708a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3708a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3708a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3708a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3708a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3708A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708A8u;
        // 0x3708ac: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3708A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3708B0u;
}
