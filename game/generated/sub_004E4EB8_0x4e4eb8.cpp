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

// Function: sub_004E4EB8
// Address: 0x4e4eb8 - 0x4e4f00
void sub_004E4EB8_0x4e4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4EB8_0x4e4eb8");
#endif

    ctx->pc = 0x4e4eb8u;

    // 0x4e4eb8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4e4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4e4ebc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4e4ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4ec0: 0x24a57e28  addiu       $a1, $a1, 0x7E28
    ctx->pc = 0x4e4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32296));
    // 0x4e4ec4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4ec8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4e4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4e4ecc: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x4e4eccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4e4ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4ed4: 0x246701bc  addiu       $a3, $v1, 0x1BC
    ctx->pc = 0x4e4ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4e4ed8: 0xa462014a  sh          $v0, 0x14A($v1)
    ctx->pc = 0x4e4ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4edc: 0xa466015e  sh          $a2, 0x15E($v1)
    ctx->pc = 0x4e4edcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e4ee0: 0xa4650160  sh          $a1, 0x160($v1)
    ctx->pc = 0x4e4ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e4ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4ee8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e4ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e4eec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e4ef0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e4ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4ef4: 0x81393d0  j           func_4E4F40
    ctx->pc = 0x4E4EF4u;
    ctx->pc = 0x4E4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4EF4u;
    // 0x4e4ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4F40u;
    sub_004E4F40_0x4e4f40(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4EFCu;
    // 0x4e4efc: 0x0  nop
    ctx->pc = 0x4e4efcu;
    // NOP
    ctx->pc = 0x4e4f00u;
}
