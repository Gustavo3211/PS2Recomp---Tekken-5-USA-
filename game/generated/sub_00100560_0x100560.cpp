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

// Function: sub_00100560
// Address: 0x100560 - 0x100590
void sub_00100560_0x100560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100560_0x100560");
#endif

    switch (ctx->pc) {
        case 0x10057cu: goto label_10057c;
        case 0x100588u: goto label_100588;
        default: break;
    }

    ctx->pc = 0x100560u;

    // 0x100560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100564: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100568: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x100568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10056c: 0x8c5083c0  lw          $s0, -0x7C40($v0)
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100570: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x100570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x100574: 0xc089a00  jal         func_226800
    ctx->pc = 0x100574u;
    SET_GPR_U32(ctx, 31, 0x10057Cu);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x100574u, 0x10057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10057Cu;
label_10057c:
    // 0x10057c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100580: 0xc0400d4  jal         func_100350
    ctx->pc = 0x100580u;
    SET_GPR_U32(ctx, 31, 0x100588u);
    ctx->pc = 0x100584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100580u;
    // 0x100584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100350u, 0x100580u, 0x100588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100588u;
label_100588:
    // 0x100588: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x100588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10058c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x100590u;
}
