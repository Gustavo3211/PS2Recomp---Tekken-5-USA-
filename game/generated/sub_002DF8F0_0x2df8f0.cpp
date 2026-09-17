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

// Function: sub_002DF8F0
// Address: 0x2df8f0 - 0x2df968
void sub_002DF8F0_0x2df8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF8F0_0x2df8f0");
#endif

    switch (ctx->pc) {
        case 0x2df940u: goto label_2df940;
        default: break;
    }

    ctx->pc = 0x2df8f0u;

    // 0x2df8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df8f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2df8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df8fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2df8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df904: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2df904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df90c: 0x24470050  addiu       $a3, $v0, 0x50
    ctx->pc = 0x2df90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2df910: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2df910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2df914: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2df914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2df918: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF918u;
    {
        const bool branch_taken_0x2df918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF918u;
        // 0x2df91c: 0x24480052  addiu       $t0, $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df918) {
            ctx->pc = 0x2DF928u;
            goto label_2df928;
        }
    }
    ctx->pc = 0x2DF920u;
    // 0x2df920: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df924: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2df924u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_2df928:
    // 0x2df928: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2df928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2df92c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF92Cu;
    {
        const bool branch_taken_0x2df92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF92Cu;
        // 0x2df930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df92c) {
            ctx->pc = 0x2DF938u;
            goto label_2df938;
        }
    }
    ctx->pc = 0x2DF934u;
    // 0x2df934: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2df934u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_2df938:
    // 0x2df938: 0xc0b7e24  jal         func_2DF890
    ctx->pc = 0x2DF938u;
    SET_GPR_U32(ctx, 31, 0x2DF940u);
    ctx->pc = 0x2DF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF890u, 0x2DF938u, 0x2DF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF940u;
label_2df940:
    // 0x2df940: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2df940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2df944: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x2df944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2df948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df94c: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x2df94cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x2df950: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2df950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A8860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8860u, _value); } while (0);
    // 0x2df954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df95c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF95Cu;
        // 0x2df960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF964u;
    // 0x2df964: 0x0  nop
    ctx->pc = 0x2df964u;
    // NOP
    ctx->pc = 0x2df968u;
}
