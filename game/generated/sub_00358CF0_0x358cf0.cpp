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

// Function: sub_00358CF0
// Address: 0x358cf0 - 0x358d40
void sub_00358CF0_0x358cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358CF0_0x358cf0");
#endif

    ctx->pc = 0x358cf0u;

    // 0x358cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358cf4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x358cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x358cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358cfc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x358cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x358d00: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x358d00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x358d04: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x358d04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x358d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358d0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358d10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358d14: 0x80d835c  j           func_360D70
    ctx->pc = 0x358D14u;
    ctx->pc = 0x358D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D14u;
    // 0x358d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D70u, 0x358D14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358D1Cu;
    // 0x358d1c: 0x0  nop
    ctx->pc = 0x358d1cu;
    // NOP
    // 0x358d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358d24: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358d2c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358d34: 0x80d834e  j           func_360D38
    ctx->pc = 0x358D34u;
    ctx->pc = 0x358D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D34u;
    // 0x358d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D38u, 0x358D34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358D3Cu;
    // 0x358d3c: 0x0  nop
    ctx->pc = 0x358d3cu;
    // NOP
    ctx->pc = 0x358d40u;
}
