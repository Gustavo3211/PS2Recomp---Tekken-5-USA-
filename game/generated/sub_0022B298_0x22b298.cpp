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

// Function: sub_0022B298
// Address: 0x22b298 - 0x22b318
void sub_0022B298_0x22b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B298_0x22b298");
#endif

    switch (ctx->pc) {
        case 0x22b2c0u: goto label_22b2c0;
        case 0x22b300u: goto label_22b300;
        default: break;
    }

    ctx->pc = 0x22b298u;

    // 0x22b298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b29c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b2a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b2ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b2b8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B2B8u;
    SET_GPR_U32(ctx, 31, 0x22B2C0u);
    ctx->pc = 0x22B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2B8u;
    // 0x22b2bc: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B2B8u, 0x22B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2C0u;
label_22b2c0:
    // 0x22b2c0: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b2c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b2c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b2cc: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b2d0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b2d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B2D4u;
    {
        const bool branch_taken_0x22b2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D4u;
        // 0x22b2d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2d4) {
            ctx->pc = 0x22B2ECu;
            goto label_22b2ec;
        }
    }
    ctx->pc = 0x22B2DCu;
    // 0x22b2dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b2e0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b2e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B2E4u;
    {
        const bool branch_taken_0x22b2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b2e4) {
            ctx->pc = 0x22B2F8u;
            goto label_22b2f8;
        }
    }
    ctx->pc = 0x22B2ECu;
label_22b2ec:
    // 0x22b2ec: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b2f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2f4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b2f8:
    // 0x22b2f8: 0xc0b893c  jal         func_2E24F0
    ctx->pc = 0x22B2F8u;
    SET_GPR_U32(ctx, 31, 0x22B300u);
    ctx->pc = 0x2E24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E24F0u, 0x22B2F8u, 0x22B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B300u;
label_22b300:
    // 0x22b300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B30Cu;
        // 0x22b310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B314u;
    // 0x22b314: 0x0  nop
    ctx->pc = 0x22b314u;
    // NOP
    ctx->pc = 0x22b318u;
}
