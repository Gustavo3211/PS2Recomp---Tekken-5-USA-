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

// Function: sub_00249C40
// Address: 0x249c40 - 0x249c60
void sub_00249C40_0x249c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C40_0x249c40");
#endif

    ctx->pc = 0x249c40u;

    // 0x249c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249c4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249c50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249c54: 0x80926a4  j           func_249A90
    ctx->pc = 0x249C54u;
    ctx->pc = 0x249C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C54u;
    // 0x249c58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A90u;
    sub_00249A90_0x249a90(rdram, ctx, runtime); return;
    ctx->pc = 0x249C5Cu;
    // 0x249c5c: 0x0  nop
    ctx->pc = 0x249c5cu;
    // NOP
    ctx->pc = 0x249c60u;
}
