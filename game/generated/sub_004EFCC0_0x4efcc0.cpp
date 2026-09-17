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

// Function: sub_004EFCC0
// Address: 0x4efcc0 - 0x4efd48
void sub_004EFCC0_0x4efcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFCC0_0x4efcc0");
#endif

    ctx->pc = 0x4efcc0u;

    // 0x4efcc0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4efcc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efcc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efccc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4efcccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4efcd0: 0x8c47122c  lw          $a3, 0x122C($v0)
    ctx->pc = 0x4efcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F122Cu));
    // 0x4efcd4: 0x24c61210  addiu       $a2, $a2, 0x1210
    ctx->pc = 0x4efcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4624));
    // 0x4efcd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4efcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4efcdc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4efcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4efce0: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x4efce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x4efce4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4efce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4efce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4efce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4efcec: 0x8ca71228  lw          $a3, 0x1228($a1)
    ctx->pc = 0x4efcecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4efcf0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4efcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4efcf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4efcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efcf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4efcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4efcfc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4efcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4efd00: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x4efd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4efd04: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4efd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4efd08: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4efd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4efd0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4efd0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4efd10: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4efd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4efd14: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EFD14u;
    {
        const bool branch_taken_0x4efd14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4EFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFD14u;
        // 0x4efd18: 0x24a901bc  addiu       $t1, $a1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efd14) {
            ctx->pc = 0x4EFD28u;
            goto label_4efd28;
        }
    }
    ctx->pc = 0x4EFD1Cu;
    // 0x4efd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efd20: 0x813c222  j           func_4F0888
    ctx->pc = 0x4EFD20u;
    ctx->pc = 0x4EFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFD20u;
    // 0x4efd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0888u;
    sub_004F0888_0x4f0888(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFD28u;
label_4efd28:
    // 0x4efd28: 0x240304c8  addiu       $v1, $zero, 0x4C8
    ctx->pc = 0x4efd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x4efd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efd30: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x4efd30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4efd34: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4efd34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4efd38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4efd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4efd3c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4efd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efd40: 0x813bf52  j           func_4EFD48
    ctx->pc = 0x4EFD40u;
    ctx->pc = 0x4EFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFD40u;
    // 0x4efd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFD48u;
    sub_004EFD48_0x4efd48(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFD48u;
}
