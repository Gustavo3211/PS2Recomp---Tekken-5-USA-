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

// Function: sub_00499F30
// Address: 0x499f30 - 0x499f80
void sub_00499F30_0x499f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499F30_0x499f30");
#endif

    ctx->pc = 0x499f30u;

    // 0x499f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499f34: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x499f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x499f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499f3c: 0x24a50b60  addiu       $a1, $a1, 0xB60
    ctx->pc = 0x499f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2912));
    // 0x499f40: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x499f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x499f44: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x499f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x499f48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B60u));
    // 0x499f4c: 0x24c60b48  addiu       $a2, $a2, 0xB48
    ctx->pc = 0x499f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2888));
    // 0x499f50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x499f50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B48u));
    // 0x499f54: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x499f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499f58: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499f5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499f60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x499f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x499f64: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x499f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x499f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499f6c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x499f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x499f70: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x499f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x499f74: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x499f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x499f78: 0x812413e  j           func_4904F8
    ctx->pc = 0x499F78u;
    ctx->pc = 0x499F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F78u;
    // 0x499f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x499F80u;
}
