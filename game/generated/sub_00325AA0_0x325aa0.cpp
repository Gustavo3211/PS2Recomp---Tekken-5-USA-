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

// Function: sub_00325AA0
// Address: 0x325aa0 - 0x325b50
void sub_00325AA0_0x325aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325AA0_0x325aa0");
#endif

    switch (ctx->pc) {
        case 0x325ad8u: goto label_325ad8;
        default: break;
    }

    ctx->pc = 0x325aa0u;

    // 0x325aa0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x325aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x325aa4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x325aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x325aa8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x325aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325aac: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x325aacu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x325ab0: 0x948c2  srl         $t1, $t1, 3
    ctx->pc = 0x325ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
    // 0x325ab4: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x325AB4u;
    {
        const bool branch_taken_0x325ab4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x325ab4) {
            ctx->pc = 0x325B44u;
            goto label_325b44;
        }
    }
    ctx->pc = 0x325ABCu;
    // 0x325abc: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x325abcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x325ac0: 0x24180100  addiu       $t8, $zero, 0x100
    ctx->pc = 0x325ac0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x325ac4: 0x3c0f3000  lui         $t7, 0x3000
    ctx->pc = 0x325ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12288 << 16));
    // 0x325ac8: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x325acc: 0x3c0ef000  lui         $t6, 0xF000
    ctx->pc = 0x325accu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61440 << 16));
    // 0x325ad0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x325ad0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x325ad4: 0x3c0d4a00  lui         $t5, 0x4A00
    ctx->pc = 0x325ad4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)18944 << 16));
label_325ad8:
    // 0x325ad8: 0x2d220101  sltiu       $v0, $t1, 0x101
    ctx->pc = 0x325ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x325adc: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x325adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ae0: 0x122380b  movn        $a3, $t1, $v0
    ctx->pc = 0x325ae0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x325ae4: 0x14b2024  and         $a0, $t2, $t3
    ctx->pc = 0x325ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x325ae8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x325ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x325aec: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x325aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x325af0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x325af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x325af4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x325af4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x325af8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x325af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x325afc: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x325afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x325b00: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x325b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x325b04: 0x148b0004  bne         $a0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x325B04u;
    {
        const bool branch_taken_0x325b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x325B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B04u;
        // 0x325b08: 0x2403c  dsll32      $t0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b04) {
            ctx->pc = 0x325B18u;
            goto label_325b18;
        }
    }
    ctx->pc = 0x325B0Cu;
    // 0x325b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325B0Cu;
    {
        const bool branch_taken_0x325b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B0Cu;
        // 0x325b10: 0x14e1025  or          $v0, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b0c) {
            ctx->pc = 0x325B1Cu;
            goto label_325b1c;
        }
    }
    ctx->pc = 0x325B14u;
    // 0x325b14: 0x0  nop
    ctx->pc = 0x325b14u;
    // NOP
label_325b18:
    // 0x325b18: 0x14c1024  and         $v0, $t2, $t4
    ctx->pc = 0x325b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
label_325b1c:
    // 0x325b1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x325b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x325b20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325b24: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x325b24u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x325b28: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x325b28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x325b2c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x325b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x325b30: 0x1274823  subu        $t1, $t1, $a3
    ctx->pc = 0x325b30u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x325b34: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x325b34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x325b38: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x325b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x325b3c: 0x1520ffe6  bnez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x325B3Cu;
    {
        const bool branch_taken_0x325b3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x325B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B3Cu;
        // 0x325b40: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b3c) {
            ctx->pc = 0x325AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325ad8;
        }
    }
    ctx->pc = 0x325B44u;
label_325b44:
    // 0x325b44: 0x3e00008  jr          $ra
    ctx->pc = 0x325B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B44u;
        // 0x325b48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325B4Cu;
    // 0x325b4c: 0x0  nop
    ctx->pc = 0x325b4cu;
    // NOP
    ctx->pc = 0x325b50u;
}
