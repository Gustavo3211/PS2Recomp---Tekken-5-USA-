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

// Function: sub_004E3BF8
// Address: 0x4e3bf8 - 0x4e3c40
void sub_004E3BF8_0x4e3bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3BF8_0x4e3bf8");
#endif

    ctx->pc = 0x4e3bf8u;

    // 0x4e3bf8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4e3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4e3bfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4e3bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3c00: 0x24a57db0  addiu       $a1, $a1, 0x7DB0
    ctx->pc = 0x4e3c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32176));
    // 0x4e3c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e3c08: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4e3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4e3c0c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x4e3c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4e3c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3c14: 0x246701bc  addiu       $a3, $v1, 0x1BC
    ctx->pc = 0x4e3c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4e3c18: 0xa462014a  sh          $v0, 0x14A($v1)
    ctx->pc = 0x4e3c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3c1c: 0xa466015e  sh          $a2, 0x15E($v1)
    ctx->pc = 0x4e3c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e3c20: 0xa4650160  sh          $a1, 0x160($v1)
    ctx->pc = 0x4e3c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e3c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3c28: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e3c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e3c2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e3c30: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e3c30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3c34: 0x8138f32  j           func_4E3CC8
    ctx->pc = 0x4E3C34u;
    ctx->pc = 0x4E3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3C34u;
    // 0x4e3c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3CC8u;
    sub_004E3CC8_0x4e3cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E3C3Cu;
    // 0x4e3c3c: 0x0  nop
    ctx->pc = 0x4e3c3cu;
    // NOP
    ctx->pc = 0x4e3c40u;
}
