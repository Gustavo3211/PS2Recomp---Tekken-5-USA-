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

// Function: sub_0031F968
// Address: 0x31f968 - 0x31f998
void sub_0031F968_0x31f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F968_0x31f968");
#endif

    ctx->pc = 0x31f968u;

    // 0x31f968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f96c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x31f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31f970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f974: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x31f974u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x31f978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f97c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x31f980: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x31f984: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31f984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31f988: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31f988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31f98c: 0x80c9604  j           func_325810
    ctx->pc = 0x31F98Cu;
    ctx->pc = 0x31F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F98Cu;
    // 0x31f990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325810u;
    sub_00325810_0x325810(rdram, ctx, runtime); return;
    ctx->pc = 0x31F994u;
    // 0x31f994: 0x0  nop
    ctx->pc = 0x31f994u;
    // NOP
    ctx->pc = 0x31f998u;
}
