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

// Function: sub_0032CBE8
// Address: 0x32cbe8 - 0x32cc28
void sub_0032CBE8_0x32cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CBE8_0x32cbe8");
#endif

    ctx->pc = 0x32cbe8u;

    // 0x32cbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cbec: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x32cbecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cbf4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32cbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbf8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x32cbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbfc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32cbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc00: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32cc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32cc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc0c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x32cc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc10: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x32cc10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc14: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x32cc14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc18: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x32cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x32cc1c: 0x80cb370  j           func_32CDC0
    ctx->pc = 0x32CC1Cu;
    ctx->pc = 0x32CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC1Cu;
    // 0x32cc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CDC0u, 0x32CC1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32CC24u;
    // 0x32cc24: 0x0  nop
    ctx->pc = 0x32cc24u;
    // NOP
    ctx->pc = 0x32cc28u;
}
