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

// Function: sub_004E4BB8
// Address: 0x4e4bb8 - 0x4e4bf0
void sub_004E4BB8_0x4e4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BB8_0x4e4bb8");
#endif

    switch (ctx->pc) {
        case 0x4e4bd8u: goto label_4e4bd8;
        default: break;
    }

    ctx->pc = 0x4e4bb8u;

    // 0x4e4bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4bbc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e4bc0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4e4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4e4bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e4bc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e4bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e4bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4bd0: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E4BD0u;
    SET_GPR_U32(ctx, 31, 0x4E4BD8u);
    ctx->pc = 0x4E4BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BD0u;
    // 0x4e4bd4: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E4BD0u, 0x4E4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4BD8u;
label_4e4bd8:
    // 0x4e4bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e4bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4be4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E4BE4u;
    ctx->pc = 0x4E4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BE4u;
    // 0x4e4be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4BECu;
    // 0x4e4bec: 0x0  nop
    ctx->pc = 0x4e4becu;
    // NOP
    ctx->pc = 0x4e4bf0u;
}
