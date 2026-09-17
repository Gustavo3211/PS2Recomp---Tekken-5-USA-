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

// Function: sub_004DB598
// Address: 0x4db598 - 0x4db5d0
void sub_004DB598_0x4db598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB598_0x4db598");
#endif

    ctx->pc = 0x4db598u;

    // 0x4db598: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4db598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db59c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db5a0: 0x24020443  addiu       $v0, $zero, 0x443
    ctx->pc = 0x4db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1091));
    // 0x4db5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db5a8: 0xa4620164  sh          $v0, 0x164($v1)
    ctx->pc = 0x4db5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db5ac: 0x246501bc  addiu       $a1, $v1, 0x1BC
    ctx->pc = 0x4db5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4db5b0: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x4db5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db5b8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4db5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db5bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4db5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4db5c0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4db5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db5c4: 0x8136d74  j           func_4DB5D0
    ctx->pc = 0x4DB5C4u;
    ctx->pc = 0x4DB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB5C4u;
    // 0x4db5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5D0u;
    sub_004DB5D0_0x4db5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB5CCu;
    // 0x4db5cc: 0x0  nop
    ctx->pc = 0x4db5ccu;
    // NOP
    ctx->pc = 0x4db5d0u;
}
