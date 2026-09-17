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

// Function: sub_00330000
// Address: 0x330000 - 0x330048
void sub_00330000_0x330000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330000_0x330000");
#endif

    ctx->pc = 0x330000u;

    // 0x330000: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x330000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x330004: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330008: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x330008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33000c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33000cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x330010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330014: 0x3e00008  jr          $ra
    ctx->pc = 0x330014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330014u;
        // 0x330018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33001Cu;
    // 0x33001c: 0x0  nop
    ctx->pc = 0x33001cu;
    // NOP
    // 0x330020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x330024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33002c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33002cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x330030: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x330030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x330034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33003c: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x330040: 0x80c8f16  j           func_323C58
    ctx->pc = 0x330040u;
    ctx->pc = 0x330044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330040u;
    // 0x330044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C58u;
    sub_00323C58_0x323c58(rdram, ctx, runtime); return;
    ctx->pc = 0x330048u;
}
