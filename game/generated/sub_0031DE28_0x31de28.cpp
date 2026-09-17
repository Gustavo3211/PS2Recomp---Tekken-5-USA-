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

// Function: sub_0031DE28
// Address: 0x31de28 - 0x31de68
void sub_0031DE28_0x31de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DE28_0x31de28");
#endif

    switch (ctx->pc) {
        case 0x31de3cu: goto label_31de3c;
        default: break;
    }

    ctx->pc = 0x31de28u;

    // 0x31de28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31de2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31de30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31de34: 0xc0c78f8  jal         func_31E3E0
    ctx->pc = 0x31DE34u;
    SET_GPR_U32(ctx, 31, 0x31DE3Cu);
    ctx->pc = 0x31DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE34u;
    // 0x31de38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3E0u, 0x31DE34u, 0x31DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE3Cu;
label_31de3c:
    // 0x31de3c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31de40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31de44: 0x24631960  addiu       $v1, $v1, 0x1960
    ctx->pc = 0x31de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x31de48: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x31de4c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x31de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x31de50: 0x8f82ccdc  lw          $v0, -0x3324($gp)
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954204)));
    // 0x31de54: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x31de54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    // 0x31de58: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x31de58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x31de5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31de5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31de60: 0x80c7e5a  j           func_31F968
    ctx->pc = 0x31DE60u;
    ctx->pc = 0x31DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE60u;
    // 0x31de64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F968u;
    sub_0031F968_0x31f968(rdram, ctx, runtime); return;
    ctx->pc = 0x31DE68u;
}
