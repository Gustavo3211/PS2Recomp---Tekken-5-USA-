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

// Function: sub_004A3678
// Address: 0x4a3678 - 0x4a36b0
void sub_004A3678_0x4a3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3678_0x4a3678");
#endif

    switch (ctx->pc) {
        case 0x4a368cu: goto label_4a368c;
        case 0x4a3694u: goto label_4a3694;
        case 0x4a369cu: goto label_4a369c;
        default: break;
    }

    ctx->pc = 0x4a3678u;

    // 0x4a3678: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x4a3678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x4a367c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a367cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3684: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3684u;
    SET_GPR_U32(ctx, 31, 0x4A368Cu);
    ctx->pc = 0x4A3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3684u;
    // 0x4a3688: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3684u, 0x4A368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A368Cu;
label_4a368c:
    // 0x4a368c: 0xc124910  jal         func_492440
    ctx->pc = 0x4A368Cu;
    SET_GPR_U32(ctx, 31, 0x4A3694u);
    ctx->pc = 0x4A3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A368Cu;
    // 0x4a3690: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A368Cu, 0x4A3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3694u;
label_4a3694:
    // 0x4a3694: 0xc12925a  jal         func_4A4968
    ctx->pc = 0x4A3694u;
    SET_GPR_U32(ctx, 31, 0x4A369Cu);
    ctx->pc = 0x4A3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3694u;
    // 0x4a3698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4968u, 0x4A3694u, 0x4A369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A369Cu;
label_4a369c:
    // 0x4a369c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a36a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a36a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a36a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a36a8: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x4A36A8u;
    ctx->pc = 0x4A36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A36A8u;
    // 0x4a36ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x4A36B0u;
}
