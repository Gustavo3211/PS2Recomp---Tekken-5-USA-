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

// Function: sub_00346068
// Address: 0x346068 - 0x346128
void sub_00346068_0x346068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346068_0x346068");
#endif

    switch (ctx->pc) {
        case 0x3460a8u: goto label_3460a8;
        case 0x3460f0u: goto label_3460f0;
        case 0x34610cu: goto label_34610c;
        default: break;
    }

    ctx->pc = 0x346068u;

    // 0x346068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34606c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x346070: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x346070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x346074: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x346074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346078: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34607c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x34607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x346080: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x346080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x346084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x346088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34608c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34608cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346090: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x346090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x346094: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x346094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x346098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34609c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34609cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3460a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3460a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3460a4: 0x0  nop
    ctx->pc = 0x3460a4u;
    // NOP
label_3460a8:
    // 0x3460a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3460a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3460ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3460ACu;
    {
        const bool branch_taken_0x3460ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3460B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460ACu;
        // 0x3460b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460ac) {
            ctx->pc = 0x3460C0u;
            goto label_3460c0;
        }
    }
    ctx->pc = 0x3460B4u;
    // 0x3460b4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3460b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3460b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3460B8u;
    {
        const bool branch_taken_0x3460b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460B8u;
        // 0x3460bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460b8) {
            ctx->pc = 0x3460D8u;
            goto label_3460d8;
        }
    }
    ctx->pc = 0x3460C0u;
label_3460c0:
    // 0x3460c0: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x3460c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x3460c4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3460c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3460c8: 0x0  nop
    ctx->pc = 0x3460c8u;
    // NOP
    // 0x3460cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3460CCu;
    {
        const bool branch_taken_0x3460cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3460D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460CCu;
        // 0x3460d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460cc) {
            ctx->pc = 0x3460A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3460a8;
        }
    }
    ctx->pc = 0x3460D4u;
    // 0x3460d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3460d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3460d8:
    // 0x3460d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3460d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3460dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3460e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3460e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460e8: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x3460E8u;
    SET_GPR_U32(ctx, 31, 0x3460F0u);
    ctx->pc = 0x3460ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460E8u;
    // 0x3460ec: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x3460E8u, 0x3460F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460F0u;
label_3460f0:
    // 0x3460f0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3460f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3460f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3460f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3460f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3460fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346100: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x346100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346104: 0xc0d2d28  jal         func_34B4A0
    ctx->pc = 0x346104u;
    SET_GPR_U32(ctx, 31, 0x34610Cu);
    ctx->pc = 0x346108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346104u;
    // 0x346108: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B4A0u, 0x346104u, 0x34610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34610Cu;
label_34610c:
    // 0x34610c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34610cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346110: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x346110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x346114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346118: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x346118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34611c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346120: 0x3e00008  jr          $ra
    ctx->pc = 0x346120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346120u;
        // 0x346124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346128u;
}
