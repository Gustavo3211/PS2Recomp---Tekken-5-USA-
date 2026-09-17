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

// Function: sub_00249CA0
// Address: 0x249ca0 - 0x249cc0
void sub_00249CA0_0x249ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249CA0_0x249ca0");
#endif

    ctx->pc = 0x249ca0u;

    // 0x249ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249cb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249cb4: 0x80926e0  j           func_249B80
    ctx->pc = 0x249CB4u;
    ctx->pc = 0x249CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CB4u;
    // 0x249cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B80u;
    sub_00249B80_0x249b80(rdram, ctx, runtime); return;
    ctx->pc = 0x249CBCu;
    // 0x249cbc: 0x0  nop
    ctx->pc = 0x249cbcu;
    // NOP
    ctx->pc = 0x249cc0u;
}
