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

// Function: sub_00358F00
// Address: 0x358f00 - 0x358f58
void sub_00358F00_0x358f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F00_0x358f00");
#endif

    ctx->pc = 0x358f00u;

    // 0x358f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f0c: 0x80d8622  j           func_361888
    ctx->pc = 0x358F0Cu;
    ctx->pc = 0x358F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F0Cu;
    // 0x358f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361888u, 0x358F0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F14u;
    // 0x358f14: 0x0  nop
    ctx->pc = 0x358f14u;
    // NOP
    // 0x358f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f1c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x358f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x358f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f24: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x358f24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x358f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f2c: 0x80d865e  j           func_361978
    ctx->pc = 0x358F2Cu;
    ctx->pc = 0x358F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F2Cu;
    // 0x358f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361978u, 0x358F2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F34u;
    // 0x358f34: 0x0  nop
    ctx->pc = 0x358f34u;
    // NOP
    // 0x358f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358f3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x358f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x358f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f44: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x358f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358f4c: 0x80d869a  j           func_361A68
    ctx->pc = 0x358F4Cu;
    ctx->pc = 0x358F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F4Cu;
    // 0x358f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361A68u, 0x358F4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358F54u;
    // 0x358f54: 0x0  nop
    ctx->pc = 0x358f54u;
    // NOP
    ctx->pc = 0x358f58u;
}
