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

// Function: sub_0033DAB0
// Address: 0x33dab0 - 0x33db48
void sub_0033DAB0_0x33dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DAB0_0x33dab0");
#endif

    switch (ctx->pc) {
        case 0x33dae0u: goto label_33dae0;
        case 0x33db3cu: goto label_33db3c;
        default: break;
    }

    ctx->pc = 0x33dab0u;

    // 0x33dab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33dab4: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x33dab4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    // 0x33dab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33dabc: 0x240f7fff  addiu       $t7, $zero, 0x7FFF
    ctx->pc = 0x33dabcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x33dac0: 0x3c0e3000  lui         $t6, 0x3000
    ctx->pc = 0x33dac0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12288 << 16));
    // 0x33dac4: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x33dac4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x33dac8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x33dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33dacc: 0x3c0df000  lui         $t5, 0xF000
    ctx->pc = 0x33daccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61440 << 16));
    // 0x33dad0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33dad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33dad4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x33dad4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x33dad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33dad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dadc: 0x3c0c6000  lui         $t4, 0x6000
    ctx->pc = 0x33dadcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)24576 << 16));
label_33dae0:
    // 0x33dae0: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x33dae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x33dae4: 0xea1824  and         $v1, $a3, $t2
    ctx->pc = 0x33dae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x33dae8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x33dae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x33daec: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x33daecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33daf0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x33daf0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x33daf4: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DAF4u;
    {
        const bool branch_taken_0x33daf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x33DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAF4u;
        // 0x33daf8: 0x10e3025  or          $a2, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33daf4) {
            ctx->pc = 0x33DB08u;
            goto label_33db08;
        }
    }
    ctx->pc = 0x33DAFCu;
    // 0x33dafc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DAFCu;
    {
        const bool branch_taken_0x33dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAFCu;
        // 0x33db00: 0xed1025  or          $v0, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dafc) {
            ctx->pc = 0x33DB0Cu;
            goto label_33db0c;
        }
    }
    ctx->pc = 0x33DB04u;
    // 0x33db04: 0x0  nop
    ctx->pc = 0x33db04u;
    // NOP
label_33db08:
    // 0x33db08: 0xeb1024  and         $v0, $a3, $t3
    ctx->pc = 0x33db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_33db0c:
    // 0x33db0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33db0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33db10: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x33db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33db14: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x33db14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x33db18: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x33db18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x33db1c: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x33db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x33db20: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x33db20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x33db24: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x33db24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x33db28: 0x146cffed  bne         $v1, $t4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33DB28u;
    {
        const bool branch_taken_0x33db28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x33DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB28u;
        // 0x33db2c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db28) {
            ctx->pc = 0x33DAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dae0;
        }
    }
    ctx->pc = 0x33DB30u;
    // 0x33db30: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x33db30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33db34: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33DB34u;
    SET_GPR_U32(ctx, 31, 0x33DB3Cu);
    ctx->pc = 0x33DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DB34u;
    // 0x33db38: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33DB34u, 0x33DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB3Cu;
label_33db3c:
    // 0x33db3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33db40: 0x3e00008  jr          $ra
    ctx->pc = 0x33DB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB40u;
        // 0x33db44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DB48u;
}
