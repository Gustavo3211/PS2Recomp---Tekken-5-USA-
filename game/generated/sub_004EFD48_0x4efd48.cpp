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

// Function: sub_004EFD48
// Address: 0x4efd48 - 0x4efdd0
void sub_004EFD48_0x4efd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFD48_0x4efd48");
#endif

    ctx->pc = 0x4efd48u;

    // 0x4efd48: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4efd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4efd4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efd4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efd54: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4efd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4efd58: 0x8c461228  lw          $a2, 0x1228($v0)
    ctx->pc = 0x4efd58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4efd5c: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x4efd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x4efd60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4efd64: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4efd64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4efd68: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4efd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4efd6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4efd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efd70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efd74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efd78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efd7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efd80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efd84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4efd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efd88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4efd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4efd8c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4efd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4efd90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efd94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4efd94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4efd98: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4efd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4efd9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EFD9Cu;
    {
        const bool branch_taken_0x4efd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFD9Cu;
        // 0x4efda0: 0x24c801bc  addiu       $t0, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efd9c) {
            ctx->pc = 0x4EFDB0u;
            goto label_4efdb0;
        }
    }
    ctx->pc = 0x4EFDA4u;
    // 0x4efda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efda8: 0x813c222  j           func_4F0888
    ctx->pc = 0x4EFDA8u;
    ctx->pc = 0x4EFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFDA8u;
    // 0x4efdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0888u;
    sub_004F0888_0x4f0888(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFDB0u;
label_4efdb0:
    // 0x4efdb0: 0x240304bd  addiu       $v1, $zero, 0x4BD
    ctx->pc = 0x4efdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
    // 0x4efdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efdb8: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x4efdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efdbc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4efdbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efdc0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4efdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4efdc4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4efdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efdc8: 0x813bf74  j           func_4EFDD0
    ctx->pc = 0x4EFDC8u;
    ctx->pc = 0x4EFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFDC8u;
    // 0x4efdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFDD0u;
    sub_004EFDD0_0x4efdd0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFDD0u;
}
