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

// Function: sub_004EEA28
// Address: 0x4eea28 - 0x4eea80
void sub_004EEA28_0x4eea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEA28_0x4eea28");
#endif

    ctx->pc = 0x4eea28u;

    // 0x4eea28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eea2c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4eea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4eea30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eea34: 0x24e711ec  addiu       $a3, $a3, 0x11EC
    ctx->pc = 0x4eea34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
    // 0x4eea38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4eea38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4eea3c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4eea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4eea40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4eea40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eea44: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4eea44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4eea48: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x4eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x4eea4c: 0x248411f4  addiu       $a0, $a0, 0x11F4
    ctx->pc = 0x4eea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4eea50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eea54: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4eea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4eea58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4eea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4eea5c: 0x24052020  addiu       $a1, $zero, 0x2020
    ctx->pc = 0x4eea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
    // 0x4eea60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4eea60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4eea64: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4eea64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4eea68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eea68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eea6c: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4eea6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4eea70: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4eea70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eea74: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4EEA74u;
    ctx->pc = 0x4EEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEA74u;
    // 0x4eea78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EEA7Cu;
    // 0x4eea7c: 0x0  nop
    ctx->pc = 0x4eea7cu;
    // NOP
    ctx->pc = 0x4eea80u;
}
