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

// Function: sub_0050D028
// Address: 0x50d028 - 0x50d078
void sub_0050D028_0x50d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D028_0x50d028");
#endif

    ctx->pc = 0x50d028u;

    // 0x50d028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50d02c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50d030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50d034: 0x2484c670  addiu       $a0, $a0, -0x3990
    ctx->pc = 0x50d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952560));
    // 0x50d038: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x50d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x50d03c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50d03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50d040: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50d040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC670u));
    // 0x50d044: 0x24c6c668  addiu       $a2, $a2, -0x3998
    ctx->pc = 0x50d044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952552));
    // 0x50d048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d04c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x50d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x50d050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x50d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50d054: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x50d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50d058: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x50d058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x50d05c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x50d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50d060: 0x8ca40108  lw          $a0, 0x108($a1)
    ctx->pc = 0x50d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x50d064: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50d064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x50d068: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50d068u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50d06c: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x50d06cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50d070: 0x8144c5a  j           func_513168
    ctx->pc = 0x50D070u;
    ctx->pc = 0x50D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D070u;
    // 0x50d074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50D078u;
}
