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

// Function: sub_004DAF28
// Address: 0x4daf28 - 0x4daf80
void sub_004DAF28_0x4daf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAF28_0x4daf28");
#endif

    ctx->pc = 0x4daf28u;

    // 0x4daf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4daf2c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4daf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4daf30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daf34: 0x24e71100  addiu       $a3, $a3, 0x1100
    ctx->pc = 0x4daf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4352));
    // 0x4daf38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4daf38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4daf3c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4daf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4daf40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4daf40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1100u));
    // 0x4daf44: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4daf44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4daf48: 0x3c02600b  lui         $v0, 0x600B
    ctx->pc = 0x4daf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24587 << 16));
    // 0x4daf4c: 0x24841108  addiu       $a0, $a0, 0x1108
    ctx->pc = 0x4daf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4360));
    // 0x4daf50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4daf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4daf54: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4daf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4daf58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4daf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4daf5c: 0x2405600b  addiu       $a1, $zero, 0x600B
    ctx->pc = 0x4daf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24587));
    // 0x4daf60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4daf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4daf64: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4daf64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4daf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daf6c: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4daf6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4daf70: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4daf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4daf74: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4DAF74u;
    ctx->pc = 0x4DAF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAF74u;
    // 0x4daf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DAF7Cu;
    // 0x4daf7c: 0x0  nop
    ctx->pc = 0x4daf7cu;
    // NOP
    ctx->pc = 0x4daf80u;
}
