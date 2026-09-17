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

// Function: sub_002458C0
// Address: 0x2458c0 - 0x245960
void sub_002458C0_0x2458c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002458C0_0x2458c0");
#endif

    switch (ctx->pc) {
        case 0x2458e4u: goto label_2458e4;
        default: break;
    }

    ctx->pc = 0x2458c0u;

    // 0x2458c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2458c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2458c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2458c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2458c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2458c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2458cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2458ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2458d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2458d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2458d4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2458D4u;
    {
        const bool branch_taken_0x2458d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458D4u;
        // 0x2458d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458d4) {
            ctx->pc = 0x245948u;
            goto label_245948;
        }
    }
    ctx->pc = 0x2458DCu;
    // 0x2458dc: 0xc091626  jal         func_245898
    ctx->pc = 0x2458DCu;
    SET_GPR_U32(ctx, 31, 0x2458E4u);
    ctx->pc = 0x245898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245898u, 0x2458DCu, 0x2458E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458E4u;
label_2458e4:
    // 0x2458e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2458E4u;
    {
        const bool branch_taken_0x2458e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E4u;
        // 0x2458e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458e4) {
            ctx->pc = 0x245938u;
            goto label_245938;
        }
    }
    ctx->pc = 0x2458ECu;
    // 0x2458ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2458ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2458f0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x2458f4: 0xac62f0d8  sw          $v0, -0xF28($v1)
    ctx->pc = 0x2458f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3AF0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0D8u, _value); } while (0);
    // 0x2458f8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2458F8u;
    {
        const bool branch_taken_0x2458f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2458FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458F8u;
        // 0x2458fc: 0xac806900  sw          $zero, 0x6900($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 26880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458f8) {
            ctx->pc = 0x245920u;
            goto label_245920;
        }
    }
    ctx->pc = 0x245900u;
    // 0x245900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24590c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245914: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x245914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x245918: 0x808b004  j           func_22C010
    ctx->pc = 0x245918u;
    ctx->pc = 0x24591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245918u;
    // 0x24591c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C010u;
    sub_0022C010_0x22c010(rdram, ctx, runtime); return;
    ctx->pc = 0x245920u;
label_245920:
    // 0x245920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245924: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24592c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24592cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245930: 0x808aff2  j           func_22BFC8
    ctx->pc = 0x245930u;
    ctx->pc = 0x245934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245930u;
    // 0x245934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFC8u;
    sub_0022BFC8_0x22bfc8(rdram, ctx, runtime); return;
    ctx->pc = 0x245938u;
label_245938:
    // 0x245938: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x245938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24593c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245940: 0xac506900  sw          $s0, 0x6900($v0)
    ctx->pc = 0x245940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x166900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166900u, _value); } while (0);
    // 0x245944: 0xac60f0d8  sw          $zero, -0xF28($v1)
    ctx->pc = 0x245944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AF0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0D8u, _value); } while (0);
label_245948:
    // 0x245948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24594c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24594cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245954: 0x3e00008  jr          $ra
    ctx->pc = 0x245954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245954u;
        // 0x245958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24595Cu;
    // 0x24595c: 0x0  nop
    ctx->pc = 0x24595cu;
    // NOP
    ctx->pc = 0x245960u;
}
