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

// Function: sub_00249C80
// Address: 0x249c80 - 0x249ca0
void sub_00249C80_0x249c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C80_0x249c80");
#endif

    ctx->pc = 0x249c80u;

    // 0x249c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249c8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249c90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249c94: 0x80926d6  j           func_249B58
    ctx->pc = 0x249C94u;
    ctx->pc = 0x249C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C94u;
    // 0x249c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    sub_00249B58_0x249b58(rdram, ctx, runtime); return;
    ctx->pc = 0x249C9Cu;
    // 0x249c9c: 0x0  nop
    ctx->pc = 0x249c9cu;
    // NOP
    ctx->pc = 0x249ca0u;
}
