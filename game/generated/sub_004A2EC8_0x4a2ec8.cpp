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

// Function: sub_004A2EC8
// Address: 0x4a2ec8 - 0x4a2ef8
void sub_004A2EC8_0x4a2ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2EC8_0x4a2ec8");
#endif

    switch (ctx->pc) {
        case 0x4a2ed8u: goto label_4a2ed8;
        case 0x4a2ee0u: goto label_4a2ee0;
        default: break;
    }

    ctx->pc = 0x4a2ec8u;

    // 0x4a2ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a2ed0: 0xc124910  jal         func_492440
    ctx->pc = 0x4A2ED0u;
    SET_GPR_U32(ctx, 31, 0x4A2ED8u);
    ctx->pc = 0x4A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2ED0u;
    // 0x4a2ed4: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A2ED0u, 0x4A2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2ED8u;
label_4a2ed8:
    // 0x4a2ed8: 0xc12925a  jal         func_4A4968
    ctx->pc = 0x4A2ED8u;
    SET_GPR_U32(ctx, 31, 0x4A2EE0u);
    ctx->pc = 0x4A2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2ED8u;
    // 0x4a2edc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4968u, 0x4A2ED8u, 0x4A2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2EE0u;
label_4a2ee0:
    // 0x4a2ee0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a2ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2ee8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a2ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a2eec: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x4A2EECu;
    ctx->pc = 0x4A2EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2EECu;
    // 0x4a2ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x4A2EF4u;
    // 0x4a2ef4: 0x0  nop
    ctx->pc = 0x4a2ef4u;
    // NOP
    ctx->pc = 0x4a2ef8u;
}
