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

// Function: sub_004F9C28
// Address: 0x4f9c28 - 0x4f9c68
void sub_004F9C28_0x4f9c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9C28_0x4f9c28");
#endif

    switch (ctx->pc) {
        case 0x4f9c38u: goto label_4f9c38;
        default: break;
    }

    ctx->pc = 0x4f9c28u;

    // 0x4f9c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f9c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f9c30: 0xc13e684  jal         func_4F9A10
    ctx->pc = 0x4F9C30u;
    SET_GPR_U32(ctx, 31, 0x4F9C38u);
    ctx->pc = 0x4F9A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9A10u, 0x4F9C30u, 0x4F9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9C38u;
label_4f9c38:
    // 0x4f9c38: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f9c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f9c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9c40: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4f9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f9c44: 0x2442006a  addiu       $v0, $v0, 0x6A
    ctx->pc = 0x4f9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 106));
    // 0x4f9c48: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f9c48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D6EAu));
    // 0x4f9c4c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4f9c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x4f9c50: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4f9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f9c54: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4f9c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f9c58: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f9c58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f9c5c: 0x813e658  j           func_4F9960
    ctx->pc = 0x4F9C5Cu;
    ctx->pc = 0x4F9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9C5Cu;
    // 0x4f9c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9960u, 0x4F9C5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F9C64u;
    // 0x4f9c64: 0x0  nop
    ctx->pc = 0x4f9c64u;
    // NOP
    ctx->pc = 0x4f9c68u;
}
