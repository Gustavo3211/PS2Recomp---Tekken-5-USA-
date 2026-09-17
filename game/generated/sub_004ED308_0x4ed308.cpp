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

// Function: sub_004ED308
// Address: 0x4ed308 - 0x4ed330
void sub_004ED308_0x4ed308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED308_0x4ed308");
#endif

    ctx->pc = 0x4ed308u;

    // 0x4ed308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed30c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ed30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ed310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed314: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ed314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ed318: 0xa482014a  sh          $v0, 0x14A($a0)
    ctx->pc = 0x4ed318u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed320: 0xac601200  sw          $zero, 0x1200($v1)
    ctx->pc = 0x4ed320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F1200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1200u, _value); } while (0);
    // 0x4ed324: 0x813b504  j           func_4ED410
    ctx->pc = 0x4ED324u;
    ctx->pc = 0x4ED328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED324u;
    // 0x4ed328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED410u, 0x4ED324u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4ED32Cu;
    // 0x4ed32c: 0x0  nop
    ctx->pc = 0x4ed32cu;
    // NOP
    ctx->pc = 0x4ed330u;
}
