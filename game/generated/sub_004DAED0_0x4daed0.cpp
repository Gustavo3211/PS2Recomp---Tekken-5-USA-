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

// Function: sub_004DAED0
// Address: 0x4daed0 - 0x4daf28
void sub_004DAED0_0x4daed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAED0_0x4daed0");
#endif

    ctx->pc = 0x4daed0u;

    // 0x4daed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4daed4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4daed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4daed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daedc: 0x24e71100  addiu       $a3, $a3, 0x1100
    ctx->pc = 0x4daedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4352));
    // 0x4daee0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4daee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4daee4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4daee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4daee8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4daee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1100u));
    // 0x4daeec: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4daeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4daef0: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x4daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x4daef4: 0x24841108  addiu       $a0, $a0, 0x1108
    ctx->pc = 0x4daef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4360));
    // 0x4daef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4daef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4daefc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4daefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4daf00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4daf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4daf04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4daf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4daf08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4daf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4daf0c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4daf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4daf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daf14: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4daf14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4daf18: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4daf18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4daf1c: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4DAF1Cu;
    ctx->pc = 0x4DAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAF1Cu;
    // 0x4daf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DAF24u;
    // 0x4daf24: 0x0  nop
    ctx->pc = 0x4daf24u;
    // NOP
    ctx->pc = 0x4daf28u;
}
