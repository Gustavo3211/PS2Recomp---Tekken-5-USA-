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

// Function: sub_00249C60
// Address: 0x249c60 - 0x249c80
void sub_00249C60_0x249c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C60_0x249c60");
#endif

    ctx->pc = 0x249c60u;

    // 0x249c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249c70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249c74: 0x80926c2  j           func_249B08
    ctx->pc = 0x249C74u;
    ctx->pc = 0x249C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C74u;
    // 0x249c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B08u;
    sub_00249B08_0x249b08(rdram, ctx, runtime); return;
    ctx->pc = 0x249C7Cu;
    // 0x249c7c: 0x0  nop
    ctx->pc = 0x249c7cu;
    // NOP
    ctx->pc = 0x249c80u;
}
