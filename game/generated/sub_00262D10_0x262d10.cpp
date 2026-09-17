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

// Function: sub_00262D10
// Address: 0x262d10 - 0x262d80
void sub_00262D10_0x262d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D10_0x262d10");
#endif

    switch (ctx->pc) {
        case 0x262d30u: goto label_262d30;
        case 0x262d40u: goto label_262d40;
        case 0x262d48u: goto label_262d48;
        default: break;
    }

    ctx->pc = 0x262d10u;

    // 0x262d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262d14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x262d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x262d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262d28: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x262D28u;
    SET_GPR_U32(ctx, 31, 0x262D30u);
    ctx->pc = 0x262D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D28u;
    // 0x262d2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x262D28u, 0x262D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D30u;
label_262d30:
    // 0x262d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d38: 0xc098ac6  jal         func_262B18
    ctx->pc = 0x262D38u;
    SET_GPR_U32(ctx, 31, 0x262D40u);
    ctx->pc = 0x262D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D38u;
    // 0x262d3c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B18u, 0x262D38u, 0x262D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D40u;
label_262d40:
    // 0x262d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d44: 0x0  nop
    ctx->pc = 0x262d44u;
    // NOP
label_262d48:
    // 0x262d48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x262d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x262d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x262d50: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x262d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262d54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x262d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x262d58: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x262d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d5c: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x262d5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x262d60: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x262D60u;
    {
        const bool branch_taken_0x262d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D60u;
        // 0x262d64: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d60) {
            ctx->pc = 0x262D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262d48;
        }
    }
    ctx->pc = 0x262D68u;
    // 0x262d68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x262d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262d74: 0x3e00008  jr          $ra
    ctx->pc = 0x262D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D74u;
        // 0x262d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262D7Cu;
    // 0x262d7c: 0x0  nop
    ctx->pc = 0x262d7cu;
    // NOP
    ctx->pc = 0x262d80u;
}
