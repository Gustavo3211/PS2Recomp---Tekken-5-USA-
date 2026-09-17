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

// Function: sub_004DB400
// Address: 0x4db400 - 0x4db450
void sub_004DB400_0x4db400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB400_0x4db400");
#endif

    ctx->pc = 0x4db400u;

    // 0x4db400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db404: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4db404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db40c: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4db40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4db410: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4db410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4db414: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4db414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4db418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4db418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4db41c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4db41cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4db420: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DB420u;
    {
        const bool branch_taken_0x4db420 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB420u;
        // 0x4db424: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db420) {
            ctx->pc = 0x4DB438u;
            goto label_4db438;
        }
    }
    ctx->pc = 0x4DB428u;
    // 0x4db428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db42c: 0x8136dae  j           func_4DB6B8
    ctx->pc = 0x4DB42Cu;
    ctx->pc = 0x4DB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB42Cu;
    // 0x4db430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB6B8u, 0x4DB42Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB434u;
    // 0x4db434: 0x0  nop
    ctx->pc = 0x4db434u;
    // NOP
label_4db438:
    // 0x4db438: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4db438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db440: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4db440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4db444: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4db444u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db448: 0x8136dae  j           func_4DB6B8
    ctx->pc = 0x4DB448u;
    ctx->pc = 0x4DB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB448u;
    // 0x4db44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB6B8u, 0x4DB448u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB450u;
}
