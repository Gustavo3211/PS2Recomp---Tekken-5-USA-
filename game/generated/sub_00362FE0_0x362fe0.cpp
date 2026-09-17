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

// Function: sub_00362FE0
// Address: 0x362fe0 - 0x363038
void sub_00362FE0_0x362fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362FE0_0x362fe0");
#endif

    switch (ctx->pc) {
        case 0x363008u: goto label_363008;
        case 0x363020u: goto label_363020;
        default: break;
    }

    ctx->pc = 0x362fe0u;

    // 0x362fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x362fe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x362fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x362fe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x362fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fec: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x362fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x362ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362ff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x362ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x362ff8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x362ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x362ffc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x362ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x363000: 0xc043dd8  jal         func_10F760
    ctx->pc = 0x363000u;
    SET_GPR_U32(ctx, 31, 0x363008u);
    ctx->pc = 0x363004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363000u;
    // 0x363004: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F760u, 0x363000u, 0x363008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363008u;
label_363008:
    // 0x363008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x363008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36300c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36300Cu;
    {
        const bool branch_taken_0x36300c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36300c) {
            ctx->pc = 0x363010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36300Cu;
            // 0x363010: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363024u;
            goto label_363024;
        }
    }
    ctx->pc = 0x363014u;
    // 0x363014: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363018: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363018u;
    SET_GPR_U32(ctx, 31, 0x363020u);
    ctx->pc = 0x36301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363018u;
    // 0x36301c: 0x24847750  addiu       $a0, $a0, 0x7750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363018u, 0x363020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363020u;
label_363020:
    // 0x363020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363024:
    // 0x363024: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x363024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363028: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x363028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36302c: 0x3e00008  jr          $ra
    ctx->pc = 0x36302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36302Cu;
        // 0x363030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363034u;
    // 0x363034: 0x0  nop
    ctx->pc = 0x363034u;
    // NOP
    ctx->pc = 0x363038u;
}
