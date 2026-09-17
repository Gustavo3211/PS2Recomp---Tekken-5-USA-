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

// Function: sub_0022E140
// Address: 0x22e140 - 0x22e1c8
void sub_0022E140_0x22e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E140_0x22e140");
#endif

    switch (ctx->pc) {
        case 0x22e170u: goto label_22e170;
        default: break;
    }

    ctx->pc = 0x22e140u;

    // 0x22e140: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22e144: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22e144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22e148: 0x2442974c  addiu       $v0, $v0, -0x68B4
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940492));
    // 0x22e14c: 0x2468dc54  addiu       $t0, $v1, -0x23AC
    ctx->pc = 0x22e14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958164));
    // 0x22e150: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x22e150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159768u, _value); } while (0);
    // 0x22e154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e158: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159750u, _value); } while (0);
    // 0x22e15c: 0x250a0014  addiu       $t2, $t0, 0x14
    ctx->pc = 0x22e15cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x22e160: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x22e160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15975Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15975Cu, _value); } while (0);
    // 0x22e164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22e164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e168: 0x25090024  addiu       $t1, $t0, 0x24
    ctx->pc = 0x22e168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x22e16c: 0x0  nop
    ctx->pc = 0x22e16cu;
    // NOP
label_22e170:
    // 0x22e170: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x22e170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x22e174: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x22e174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22e178: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22e178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22e17c: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22e180: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22e184: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x22e184u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22e188: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x22e18c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x22e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x22e190: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22e190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x22e194: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x22e194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x22e198: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x22e198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x22e19c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x22E19Cu;
    {
        const bool branch_taken_0x22e19c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E19Cu;
        // 0x22e1a0: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e19c) {
            ctx->pc = 0x22E170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e170;
        }
    }
    ctx->pc = 0x22E1A4u;
    // 0x22e1a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22e1a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e1ac: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
    // 0x22e1b0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x22e1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3ADC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ADC60u, _value); } while (0);
    // 0x22e1b4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x22e1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3ADC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ADC64u, _value); } while (0);
    // 0x22e1b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x22e1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3ADC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ADC5Cu, _value); } while (0);
    // 0x22e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1BCu;
        // 0x22e1c0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E1C4u;
    // 0x22e1c4: 0x0  nop
    ctx->pc = 0x22e1c4u;
    // NOP
    ctx->pc = 0x22e1c8u;
}
