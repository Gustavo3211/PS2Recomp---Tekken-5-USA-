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

// Function: sub_002EB070
// Address: 0x2eb070 - 0x2eb120
void sub_002EB070_0x2eb070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB070_0x2eb070");
#endif

    switch (ctx->pc) {
        case 0x2eb098u: goto label_2eb098;
        case 0x2eb0ccu: goto label_2eb0cc;
        case 0x2eb104u: goto label_2eb104;
        default: break;
    }

    ctx->pc = 0x2eb070u;

    // 0x2eb070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb074: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb07c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eb07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb084: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2eb084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2eb088: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2eb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2eb08c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eb08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eb090: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2EB090u;
    SET_GPR_U32(ctx, 31, 0x2EB098u);
    ctx->pc = 0x2EB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB090u;
    // 0x2eb094: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2EB090u, 0x2EB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB098u;
label_2eb098:
    // 0x2eb098: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eb098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eb09c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb0a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB0A0u;
    {
        const bool branch_taken_0x2eb0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0A0u;
        // 0x2eb0a4: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0a0) {
            ctx->pc = 0x2EB0B8u;
            goto label_2eb0b8;
        }
    }
    ctx->pc = 0x2EB0A8u;
    // 0x2eb0a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb0ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eb0b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB0B0u;
    {
        const bool branch_taken_0x2eb0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb0b0) {
            ctx->pc = 0x2EB0C4u;
            goto label_2eb0c4;
        }
    }
    ctx->pc = 0x2EB0B8u;
label_2eb0b8:
    // 0x2eb0b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eb0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2eb0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eb0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eb0c4:
    // 0x2eb0c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EB0C4u;
    SET_GPR_U32(ctx, 31, 0x2EB0CCu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EB0C4u, 0x2EB0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0CCu;
label_2eb0cc:
    // 0x2eb0cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb0d0: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2eb0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2eb0d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eb0d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB0D8u;
    {
        const bool branch_taken_0x2eb0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0D8u;
        // 0x2eb0dc: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0d8) {
            ctx->pc = 0x2EB0F0u;
            goto label_2eb0f0;
        }
    }
    ctx->pc = 0x2EB0E0u;
    // 0x2eb0e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb0e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eb0e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB0E8u;
    {
        const bool branch_taken_0x2eb0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb0e8) {
            ctx->pc = 0x2EB0FCu;
            goto label_2eb0fc;
        }
    }
    ctx->pc = 0x2EB0F0u;
label_2eb0f0:
    // 0x2eb0f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2eb0f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eb0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eb0fc:
    // 0x2eb0fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EB0FCu;
    SET_GPR_U32(ctx, 31, 0x2EB104u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EB0FCu, 0x2EB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB104u;
label_2eb104:
    // 0x2eb104: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2eb104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2eb108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eb110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb114: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB114u;
        // 0x2eb118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB11Cu;
    // 0x2eb11c: 0x0  nop
    ctx->pc = 0x2eb11cu;
    // NOP
    ctx->pc = 0x2eb120u;
}
