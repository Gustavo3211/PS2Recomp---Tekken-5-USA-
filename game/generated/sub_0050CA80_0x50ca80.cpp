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

// Function: sub_0050CA80
// Address: 0x50ca80 - 0x50cb60
void sub_0050CA80_0x50ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050CA80_0x50ca80");
#endif

    switch (ctx->pc) {
        case 0x50ca98u: goto label_50ca98;
        case 0x50cae8u: goto label_50cae8;
        default: break;
    }

    ctx->pc = 0x50ca80u;

    // 0x50ca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ca84: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50ca88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50ca8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50ca90: 0xc124620  jal         func_491880
    ctx->pc = 0x50CA90u;
    SET_GPR_U32(ctx, 31, 0x50CA98u);
    ctx->pc = 0x50CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CA90u;
    // 0x50ca94: 0x2450c630  addiu       $s0, $v0, -0x39D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50CA90u, 0x50CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CA98u;
label_50ca98:
    // 0x50ca98: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50ca9c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50caa0: 0x2465c648  addiu       $a1, $v1, -0x39B8
    ctx->pc = 0x50caa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952520));
    // 0x50caa4: 0x3484003f  ori         $a0, $a0, 0x3F
    ctx->pc = 0x50caa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63);
    // 0x50caa8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC648u));
    // 0x50caac: 0x34019800  ori         $at, $zero, 0x9800
    ctx->pc = 0x50caacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x50cab0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x50cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50cab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50cab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cabc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50cabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50cac0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50cac4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50cac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50cac8: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x50CAC8u;
    {
        const bool branch_taken_0x50cac8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CAC8u;
        // 0x50cacc: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cac8) {
            ctx->pc = 0x50CB50u;
            goto label_50cb50;
        }
    }
    ctx->pc = 0x50CAD0u;
    // 0x50cad0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x50cad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cad4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x50cad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cad8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50cad8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50cadc: 0x2445c638  addiu       $a1, $v0, -0x39C8
    ctx->pc = 0x50cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952504));
    // 0x50cae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50cae4: 0x0  nop
    ctx->pc = 0x50cae4u;
    // NOP
label_50cae8:
    // 0x50cae8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50cae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50caec: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x50caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x50caf0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x50caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50caf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50caf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x50caf8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50cafc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cb00: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50cb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50cb04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50cb08: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50cb0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cb10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50cb14: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50cb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50cb18: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50cb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50cb1c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x50cb1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cb20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cb24: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x50cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50cb28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50cb2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cb30: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50cb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50cb34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cb38: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x50cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x50cb3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50cb40: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50cb44: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50cb44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cb48: 0x443ffe7  bgezl       $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x50CB48u;
    {
        const bool branch_taken_0x50cb48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50cb48) {
            ctx->pc = 0x50CB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50CB48u;
            // 0x50cb4c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50CAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50cae8;
        }
    }
    ctx->pc = 0x50CB50u;
label_50cb50:
    // 0x50cb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50cb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50cb54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x50CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CB58u;
        // 0x50cb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50CB60u;
}
