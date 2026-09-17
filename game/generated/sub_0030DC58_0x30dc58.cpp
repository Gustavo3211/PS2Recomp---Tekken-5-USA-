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

// Function: sub_0030DC58
// Address: 0x30dc58 - 0x30dd48
void sub_0030DC58_0x30dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DC58_0x30dc58");
#endif

    switch (ctx->pc) {
        case 0x30dca0u: goto label_30dca0;
        case 0x30dd10u: goto label_30dd10;
        default: break;
    }

    ctx->pc = 0x30dc58u;

    // 0x30dc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30dc5c: 0x3c0510ab  lui         $a1, 0x10AB
    ctx->pc = 0x30dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4267 << 16));
    // 0x30dc60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30dc64: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x30dc64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dc68: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x30dc68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x30dc6c: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x30dc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dc70: 0x2418003f  addiu       $t8, $zero, 0x3F
    ctx->pc = 0x30dc70u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30dc74: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x30dc74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dc78: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x30dc78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc7c: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x30dc7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30dc80: 0x240c004c  addiu       $t4, $zero, 0x4C
    ctx->pc = 0x30dc80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30dc84: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x30dc84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30dc88: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x30dc88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30dc8c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x30dc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30dc90: 0x3c082400  lui         $t0, 0x2400
    ctx->pc = 0x30dc90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9216 << 16));
    // 0x30dc94: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x30dc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30dc98: 0x24864580  addiu       $a2, $a0, 0x4580
    ctx->pc = 0x30dc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30dc9c: 0x24820d50  addiu       $v0, $a0, 0xD50
    ctx->pc = 0x30dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
label_30dca0:
    // 0x30dca0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30dca4: 0xfc590008  sd          $t9, 0x8($v0)
    ctx->pc = 0x30dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 25));
    // 0x30dca8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x30dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x30dcac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x30dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x30dcb0: 0x24820d60  addiu       $v0, $a0, 0xD60
    ctx->pc = 0x30dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
    // 0x30dcb4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dcb8: 0xfc580008  sd          $t8, 0x8($v0)
    ctx->pc = 0x30dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 24));
    // 0x30dcbc: 0x24820d70  addiu       $v0, $a0, 0xD70
    ctx->pc = 0x30dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x30dcc0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dcc4: 0xfc4f0008  sd          $t7, 0x8($v0)
    ctx->pc = 0x30dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 15));
    // 0x30dcc8: 0x24820d80  addiu       $v0, $a0, 0xD80
    ctx->pc = 0x30dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3456));
    // 0x30dccc: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dcd0: 0xfc4e0008  sd          $t6, 0x8($v0)
    ctx->pc = 0x30dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 14));
    // 0x30dcd4: 0x24820d90  addiu       $v0, $a0, 0xD90
    ctx->pc = 0x30dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3472));
    // 0x30dcd8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dcdc: 0xfc4d0008  sd          $t5, 0x8($v0)
    ctx->pc = 0x30dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 13));
    // 0x30dce0: 0x24820da0  addiu       $v0, $a0, 0xDA0
    ctx->pc = 0x30dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    // 0x30dce4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dce8: 0xfc4c0008  sd          $t4, 0x8($v0)
    ctx->pc = 0x30dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 12));
    // 0x30dcec: 0x24820db0  addiu       $v0, $a0, 0xDB0
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3504));
    // 0x30dcf0: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x30dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x30dcf4: 0xfc4b0008  sd          $t3, 0x8($v0)
    ctx->pc = 0x30dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 11));
    // 0x30dcf8: 0x24820dc0  addiu       $v0, $a0, 0xDC0
    ctx->pc = 0x30dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3520));
    // 0x30dcfc: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x30dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x30dd00: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x30dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x30dd04: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x30dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x30dd08: 0x24820dd0  addiu       $v0, $a0, 0xDD0
    ctx->pc = 0x30dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3536));
    // 0x30dd0c: 0x0  nop
    ctx->pc = 0x30dd0cu;
    // NOP
label_30dd10:
    // 0x30dd10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30dd14: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x30dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x30dd18: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30dd1c: 0x0  nop
    ctx->pc = 0x30dd1cu;
    // NOP
    // 0x30dd20: 0x0  nop
    ctx->pc = 0x30dd20u;
    // NOP
    // 0x30dd24: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DD24u;
    {
        const bool branch_taken_0x30dd24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD24u;
        // 0x30dd28: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd24) {
            ctx->pc = 0x30DD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dd10;
        }
    }
    ctx->pc = 0x30DD2Cu;
    // 0x30dd2c: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30dd30: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30dd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30dd34: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x30DD34u;
    {
        const bool branch_taken_0x30dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dd34) {
            ctx->pc = 0x30DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DD34u;
            // 0x30dd38: 0x24820d50  addiu       $v0, $a0, 0xD50 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DD3Cu;
    // 0x30dd3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30dd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD40u;
        // 0x30dd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD48u;
}
