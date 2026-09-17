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

// Function: sub_002B7C10
// Address: 0x2b7c10 - 0x2b7c80
void sub_002B7C10_0x2b7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C10_0x2b7c10");
#endif

    switch (ctx->pc) {
        case 0x2b7c3cu: goto label_2b7c3c;
        case 0x2b7c44u: goto label_2b7c44;
        case 0x2b7c54u: goto label_2b7c54;
        default: break;
    }

    ctx->pc = 0x2b7c10u;

    // 0x2b7c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7c18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b7c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b7c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7c24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b7c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b7c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b7c34: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2B7C34u;
    SET_GPR_U32(ctx, 31, 0x2B7C3Cu);
    ctx->pc = 0x2B7C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C34u;
    // 0x2b7c38: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2B7C34u, 0x2B7C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C3Cu;
label_2b7c3c:
    // 0x2b7c3c: 0xc049a5c  jal         func_126970
    ctx->pc = 0x2B7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B7C44u);
    ctx->pc = 0x2B7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C3Cu;
    // 0x2b7c40: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126970u, 0x2B7C3Cu, 0x2B7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C44u;
label_2b7c44:
    // 0x2b7c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b7c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c4c: 0xc04a48c  jal         func_129230
    ctx->pc = 0x2B7C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7C54u);
    ctx->pc = 0x2B7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C4Cu;
    // 0x2b7c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x2B7C4Cu, 0x2B7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C54u;
label_2b7c54:
    // 0x2b7c54: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2b7c58: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x2b7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x2b7c5c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2b7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2b7c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b7c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b7c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C74u;
        // 0x2b7c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C7Cu;
    // 0x2b7c7c: 0x0  nop
    ctx->pc = 0x2b7c7cu;
    // NOP
    ctx->pc = 0x2b7c80u;
}
