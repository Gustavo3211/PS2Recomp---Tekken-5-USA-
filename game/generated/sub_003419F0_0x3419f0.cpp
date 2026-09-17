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

// Function: sub_003419F0
// Address: 0x3419f0 - 0x341a48
void sub_003419F0_0x3419f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003419F0_0x3419f0");
#endif

    switch (ctx->pc) {
        case 0x341a18u: goto label_341a18;
        default: break;
    }

    ctx->pc = 0x3419f0u;

    // 0x3419f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3419f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3419f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3419f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3419f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3419f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3419fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3419fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x341a00: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x341a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x341a04: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x341a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x341a08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x341A08u;
    {
        const bool branch_taken_0x341a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A08u;
        // 0x341a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a08) {
            ctx->pc = 0x341A38u;
            goto label_341a38;
        }
    }
    ctx->pc = 0x341A10u;
    // 0x341a10: 0xc0c952e  jal         func_3254B8
    ctx->pc = 0x341A10u;
    SET_GPR_U32(ctx, 31, 0x341A18u);
    ctx->pc = 0x341A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A10u;
    // 0x341a14: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x341A10u, 0x341A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A18u;
label_341a18:
    // 0x341a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x341a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x341A1Cu;
    {
        const bool branch_taken_0x341a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A1Cu;
        // 0x341a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a1c) {
            ctx->pc = 0x341A38u;
            goto label_341a38;
        }
    }
    ctx->pc = 0x341A24u;
    // 0x341a24: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x341a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x341a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a2c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x341a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x341a30: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x341a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x341a34: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x341a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_341a38:
    // 0x341a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341a40: 0x3e00008  jr          $ra
    ctx->pc = 0x341A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A40u;
        // 0x341a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341A48u;
}
