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

// Function: sub_004E9BF0
// Address: 0x4e9bf0 - 0x4e9c80
void sub_004E9BF0_0x4e9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9BF0_0x4e9bf0");
#endif

    ctx->pc = 0x4e9bf0u;

    // 0x4e9bf0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e9bf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e9bfc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e9c00: 0x8c461208  lw          $a2, 0x1208($v0)
    ctx->pc = 0x4e9c00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4e9c04: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4e9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4e9c08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4e9c0c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4e9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9c10: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4e9c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4e9c14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4e9c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9c18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9c1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e9c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e9c20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9c24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e9c28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e9c2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e9c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e9c30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4e9c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4e9c34: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e9c38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e9c3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e9c40: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e9c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e9c44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E9C44u;
    {
        const bool branch_taken_0x4e9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C44u;
        // 0x4e9c48: 0x24c801bc  addiu       $t0, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9c44) {
            ctx->pc = 0x4E9C58u;
            goto label_4e9c58;
        }
    }
    ctx->pc = 0x4E9C4Cu;
    // 0x4e9c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9c50: 0x813a788  j           func_4E9E20
    ctx->pc = 0x4E9C50u;
    ctx->pc = 0x4E9C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9C50u;
    // 0x4e9c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E20u;
    sub_004E9E20_0x4e9e20(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9C58u;
label_4e9c58:
    // 0x4e9c58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e9c5c: 0xa4c00164  sh          $zero, 0x164($a2)
    ctx->pc = 0x4e9c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9c60: 0xa4c20162  sh          $v0, 0x162($a2)
    ctx->pc = 0x4e9c60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e9c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9c68: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e9c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e9c6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e9c70: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4e9c70u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e9c74: 0x813a720  j           func_4E9C80
    ctx->pc = 0x4E9C74u;
    ctx->pc = 0x4E9C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9C74u;
    // 0x4e9c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9C80u;
    sub_004E9C80_0x4e9c80(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9C7Cu;
    // 0x4e9c7c: 0x0  nop
    ctx->pc = 0x4e9c7cu;
    // NOP
    ctx->pc = 0x4e9c80u;
}
