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

// Function: sub_0023D150
// Address: 0x23d150 - 0x23d1f8
void sub_0023D150_0x23d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D150_0x23d150");
#endif

    switch (ctx->pc) {
        case 0x23d1b0u: goto label_23d1b0;
        default: break;
    }

    ctx->pc = 0x23d150u;

    // 0x23d150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d164: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23d164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d16c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23D16Cu;
    {
        const bool branch_taken_0x23d16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D16Cu;
        // 0x23d170: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d16c) {
            ctx->pc = 0x23D1B8u;
            goto label_23d1b8;
        }
    }
    ctx->pc = 0x23D174u;
    // 0x23d174: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x23d174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23d178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D178u;
    {
        const bool branch_taken_0x23d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D178u;
        // 0x23d17c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d178) {
            ctx->pc = 0x23D198u;
            goto label_23d198;
        }
    }
    ctx->pc = 0x23D180u;
    // 0x23d180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d184: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D184u;
    {
        const bool branch_taken_0x23d184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D184u;
        // 0x23d188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d184) {
            ctx->pc = 0x23D1A8u;
            goto label_23d1a8;
        }
    }
    ctx->pc = 0x23D18Cu;
    // 0x23d18c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23D18Cu;
    {
        const bool branch_taken_0x23d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d18c) {
            ctx->pc = 0x23D1C8u;
            goto label_23d1c8;
        }
    }
    ctx->pc = 0x23D194u;
    // 0x23d194: 0x0  nop
    ctx->pc = 0x23d194u;
    // NOP
label_23d198:
    // 0x23d198: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D198u;
    {
        const bool branch_taken_0x23d198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D198u;
        // 0x23d19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d198) {
            ctx->pc = 0x23D1C0u;
            goto label_23d1c0;
        }
    }
    ctx->pc = 0x23D1A0u;
    // 0x23d1a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23D1A0u;
    {
        const bool branch_taken_0x23d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1a0) {
            ctx->pc = 0x23D1C8u;
            goto label_23d1c8;
        }
    }
    ctx->pc = 0x23D1A8u;
label_23d1a8:
    // 0x23d1a8: 0xc04053c  jal         func_1014F0
    ctx->pc = 0x23D1A8u;
    SET_GPR_U32(ctx, 31, 0x23D1B0u);
    ctx->pc = 0x1014F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014F0u, 0x23D1A8u, 0x23D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1B0u;
label_23d1b0:
    // 0x23d1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23D1B0u;
    {
        const bool branch_taken_0x23d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1B0u;
        // 0x23d1b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1b0) {
            ctx->pc = 0x23D1C4u;
            goto label_23d1c4;
        }
    }
    ctx->pc = 0x23D1B8u;
label_23d1b8:
    // 0x23d1b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23D1B8u;
    {
        const bool branch_taken_0x23d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1B8u;
        // 0x23d1bc: 0x8f83a968  lw          $v1, -0x5698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1b8) {
            ctx->pc = 0x23D1C4u;
            goto label_23d1c4;
        }
    }
    ctx->pc = 0x23D1C0u;
label_23d1c0:
    // 0x23d1c0: 0x8f83a96c  lw          $v1, -0x5694($gp)
    ctx->pc = 0x23d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945132)));
label_23d1c4:
    // 0x23d1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23d1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d1c8:
    // 0x23d1c8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D1C8u;
    {
        const bool branch_taken_0x23d1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1c8) {
            ctx->pc = 0x23D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1C8u;
            // 0x23d1cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1E4u;
            goto label_23d1e4;
        }
    }
    ctx->pc = 0x23D1D0u;
    // 0x23d1d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23d1d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23d1d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23d1dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d1e4:
    // 0x23d1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1ECu;
        // 0x23d1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D1F4u;
    // 0x23d1f4: 0x0  nop
    ctx->pc = 0x23d1f4u;
    // NOP
    ctx->pc = 0x23d1f8u;
}
