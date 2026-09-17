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

// Function: sub_002FE5D0
// Address: 0x2fe5d0 - 0x2fe618
void sub_002FE5D0_0x2fe5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE5D0_0x2fe5d0");
#endif

    switch (ctx->pc) {
        case 0x2fe5fcu: goto label_2fe5fc;
        default: break;
    }

    ctx->pc = 0x2fe5d0u;

    // 0x2fe5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe5d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2fe5d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fe5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fe5e4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x2fe5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2fe5e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2fe5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5ec: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE5ECu;
    {
        const bool branch_taken_0x2fe5ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5ECu;
        // 0x2fe5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5ec) {
            ctx->pc = 0x2FE604u;
            goto label_2fe604;
        }
    }
    ctx->pc = 0x2FE5F4u;
    // 0x2fe5f4: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x2FE5F4u;
    SET_GPR_U32(ctx, 31, 0x2FE5FCu);
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FE5F4u, 0x2FE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE5FCu;
label_2fe5fc:
    // 0x2fe5fc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2fe5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2fe600: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fe600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fe604:
    // 0x2fe604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe60c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE60Cu;
        // 0x2fe610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE614u;
    // 0x2fe614: 0x0  nop
    ctx->pc = 0x2fe614u;
    // NOP
    ctx->pc = 0x2fe618u;
}
