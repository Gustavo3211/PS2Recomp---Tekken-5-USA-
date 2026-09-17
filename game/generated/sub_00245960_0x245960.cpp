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

// Function: sub_00245960
// Address: 0x245960 - 0x245a00
void sub_00245960_0x245960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245960_0x245960");
#endif

    switch (ctx->pc) {
        case 0x245984u: goto label_245984;
        default: break;
    }

    ctx->pc = 0x245960u;

    // 0x245960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24596c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245970: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245974: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x245974u;
    {
        const bool branch_taken_0x245974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245974u;
        // 0x245978: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245974) {
            ctx->pc = 0x2459E8u;
            goto label_2459e8;
        }
    }
    ctx->pc = 0x24597Cu;
    // 0x24597c: 0xc091626  jal         func_245898
    ctx->pc = 0x24597Cu;
    SET_GPR_U32(ctx, 31, 0x245984u);
    ctx->pc = 0x245898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245898u, 0x24597Cu, 0x245984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245984u;
label_245984:
    // 0x245984: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x245984u;
    {
        const bool branch_taken_0x245984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245984u;
        // 0x245988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245984) {
            ctx->pc = 0x2459D8u;
            goto label_2459d8;
        }
    }
    ctx->pc = 0x24598Cu;
    // 0x24598c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245990: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x245994: 0xac62f0dc  sw          $v0, -0xF24($v1)
    ctx->pc = 0x245994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3AF0DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0DCu, _value); } while (0);
    // 0x245998: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x245998u;
    {
        const bool branch_taken_0x245998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245998u;
        // 0x24599c: 0xac806904  sw          $zero, 0x6904($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 26884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245998) {
            ctx->pc = 0x2459C0u;
            goto label_2459c0;
        }
    }
    ctx->pc = 0x2459A0u;
    // 0x2459a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2459a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2459a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2459a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2459a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2459ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2459b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2459b4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2459b8: 0x808b004  j           func_22C010
    ctx->pc = 0x2459B8u;
    ctx->pc = 0x2459BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459B8u;
    // 0x2459bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C010u;
    sub_0022C010_0x22c010(rdram, ctx, runtime); return;
    ctx->pc = 0x2459C0u;
label_2459c0:
    // 0x2459c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2459c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2459c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2459c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2459c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2459cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2459ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2459d0: 0x808aff2  j           func_22BFC8
    ctx->pc = 0x2459D0u;
    ctx->pc = 0x2459D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459D0u;
    // 0x2459d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFC8u;
    sub_0022BFC8_0x22bfc8(rdram, ctx, runtime); return;
    ctx->pc = 0x2459D8u;
label_2459d8:
    // 0x2459d8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2459d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2459dc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2459dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2459e0: 0xac506904  sw          $s0, 0x6904($v0)
    ctx->pc = 0x2459e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x166904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166904u, _value); } while (0);
    // 0x2459e4: 0xac60f0dc  sw          $zero, -0xF24($v1)
    ctx->pc = 0x2459e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AF0DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0DCu, _value); } while (0);
label_2459e8:
    // 0x2459e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2459e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2459ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2459ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2459f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2459f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2459f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2459F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2459F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F4u;
        // 0x2459f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2459F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2459FCu;
    // 0x2459fc: 0x0  nop
    ctx->pc = 0x2459fcu;
    // NOP
    ctx->pc = 0x245a00u;
}
