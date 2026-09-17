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

// Function: sub_003426B0
// Address: 0x3426b0 - 0x342728
void sub_003426B0_0x3426b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003426B0_0x3426b0");
#endif

    switch (ctx->pc) {
        case 0x3426f0u: goto label_3426f0;
        default: break;
    }

    ctx->pc = 0x3426b0u;

    // 0x3426b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3426b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3426b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3426b8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3426b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3426bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3426bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3426c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3426c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3426c8: 0x3463c0cd  ori         $v1, $v1, 0xC0CD
    ctx->pc = 0x3426c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49357);
    // 0x3426cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3426ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3426d0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3426d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3426d4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3426d8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x3426d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x3426dc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3426dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3426e0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3426e4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3426E4u;
    {
        const bool branch_taken_0x3426e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3426E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426E4u;
        // 0x3426e8: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3426e4) {
            ctx->pc = 0x342710u;
            goto label_342710;
        }
    }
    ctx->pc = 0x3426ECu;
    // 0x3426ec: 0x0  nop
    ctx->pc = 0x3426ecu;
    // NOP
label_3426f0:
    // 0x3426f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3426f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3426f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3426f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3426f8: 0x106202b  sltu        $a0, $t0, $a2
    ctx->pc = 0x3426f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3426fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3426fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x342700: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x342700u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342704: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x342704u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x342708: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x342708u;
    {
        const bool branch_taken_0x342708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342708u;
        // 0x34270c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342708) {
            ctx->pc = 0x3426F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3426f0;
        }
    }
    ctx->pc = 0x342710u;
label_342710:
    // 0x342710: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x342710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x342714: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x342714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x342718: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34271c: 0x3e00008  jr          $ra
    ctx->pc = 0x34271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34271Cu;
        // 0x342720: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342724u;
    // 0x342724: 0x0  nop
    ctx->pc = 0x342724u;
    // NOP
    ctx->pc = 0x342728u;
}
