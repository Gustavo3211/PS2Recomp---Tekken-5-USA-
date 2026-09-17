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

// Function: sub_0049AF18
// Address: 0x49af18 - 0x49af68
void sub_0049AF18_0x49af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AF18_0x49af18");
#endif

    switch (ctx->pc) {
        case 0x49af2cu: goto label_49af2c;
        case 0x49af38u: goto label_49af38;
        case 0x49af48u: goto label_49af48;
        case 0x49af50u: goto label_49af50;
        case 0x49af58u: goto label_49af58;
        default: break;
    }

    ctx->pc = 0x49af18u;

    // 0x49af18: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x49af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
    // 0x49af1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49af1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49af20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49af24: 0xc124910  jal         func_492440
    ctx->pc = 0x49AF24u;
    SET_GPR_U32(ctx, 31, 0x49AF2Cu);
    ctx->pc = 0x49AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF24u;
    // 0x49af28: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49AF24u, 0x49AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF2Cu;
label_49af2c:
    // 0x49af2c: 0x3c04000b  lui         $a0, 0xB
    ctx->pc = 0x49af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)11 << 16));
    // 0x49af30: 0xc124910  jal         func_492440
    ctx->pc = 0x49AF30u;
    SET_GPR_U32(ctx, 31, 0x49AF38u);
    ctx->pc = 0x49AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF30u;
    // 0x49af34: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49AF30u, 0x49AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF38u;
label_49af38:
    // 0x49af38: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49af3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49af40: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x49AF40u;
    SET_GPR_U32(ctx, 31, 0x49AF48u);
    ctx->pc = 0x49AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF40u;
    // 0x49af44: 0xa462d68a  sh          $v0, -0x2976($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294956682), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x49AF40u, 0x49AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF48u;
label_49af48:
    // 0x49af48: 0xc122ce4  jal         func_48B390
    ctx->pc = 0x49AF48u;
    SET_GPR_U32(ctx, 31, 0x49AF50u);
    ctx->pc = 0x48B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B390u, 0x49AF48u, 0x49AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF50u;
label_49af50:
    // 0x49af50: 0xc123c54  jal         func_48F150
    ctx->pc = 0x49AF50u;
    SET_GPR_U32(ctx, 31, 0x49AF58u);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x49AF50u, 0x49AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF58u;
label_49af58:
    // 0x49af58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49af58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49af5c: 0x8123b50  j           func_48ED40
    ctx->pc = 0x49AF5Cu;
    ctx->pc = 0x49AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AF5Cu;
    // 0x49af60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ED40u, 0x49AF5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49AF64u;
    // 0x49af64: 0x0  nop
    ctx->pc = 0x49af64u;
    // NOP
    ctx->pc = 0x49af68u;
}
