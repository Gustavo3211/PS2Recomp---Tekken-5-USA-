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

// Function: sub_00245A00
// Address: 0x245a00 - 0x245ac0
void sub_00245A00_0x245a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245A00_0x245a00");
#endif

    switch (ctx->pc) {
        case 0x245a24u: goto label_245a24;
        case 0x245a50u: goto label_245a50;
        case 0x245a58u: goto label_245a58;
        case 0x245a78u: goto label_245a78;
        case 0x245a80u: goto label_245a80;
        default: break;
    }

    ctx->pc = 0x245a00u;

    // 0x245a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245a10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a14: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x245A14u;
    {
        const bool branch_taken_0x245a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A14u;
        // 0x245a18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a14) {
            ctx->pc = 0x245AA8u;
            goto label_245aa8;
        }
    }
    ctx->pc = 0x245A1Cu;
    // 0x245a1c: 0xc091626  jal         func_245898
    ctx->pc = 0x245A1Cu;
    SET_GPR_U32(ctx, 31, 0x245A24u);
    ctx->pc = 0x245898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245898u, 0x245A1Cu, 0x245A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A24u;
label_245a24:
    // 0x245a24: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x245A24u;
    {
        const bool branch_taken_0x245a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A24u;
        // 0x245a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a24) {
            ctx->pc = 0x245A98u;
            goto label_245a98;
        }
    }
    ctx->pc = 0x245A2Cu;
    // 0x245a2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x245a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245a30: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x245a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x245a34: 0xac62f0e0  sw          $v0, -0xF20($v1)
    ctx->pc = 0x245a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3AF0E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0E0u, _value); } while (0);
    // 0x245a38: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x245A38u;
    {
        const bool branch_taken_0x245a38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A38u;
        // 0x245a3c: 0xac806908  sw          $zero, 0x6908($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 26888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a38) {
            ctx->pc = 0x245A70u;
            goto label_245a70;
        }
    }
    ctx->pc = 0x245A40u;
    // 0x245a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245a48: 0xc08b004  jal         func_22C010
    ctx->pc = 0x245A48u;
    SET_GPR_U32(ctx, 31, 0x245A50u);
    ctx->pc = 0x245A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A48u;
    // 0x245a4c: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C010u, 0x245A48u, 0x245A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A50u;
label_245a50:
    // 0x245a50: 0xc08b134  jal         func_22C4D0
    ctx->pc = 0x245A50u;
    SET_GPR_U32(ctx, 31, 0x245A58u);
    ctx->pc = 0x22C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C4D0u, 0x245A50u, 0x245A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A58u;
label_245a58:
    // 0x245a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245a64: 0x808afca  j           func_22BF28
    ctx->pc = 0x245A64u;
    ctx->pc = 0x245A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A64u;
    // 0x245a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BF28u;
    sub_0022BF28_0x22bf28(rdram, ctx, runtime); return;
    ctx->pc = 0x245A6Cu;
    // 0x245a6c: 0x0  nop
    ctx->pc = 0x245a6cu;
    // NOP
label_245a70:
    // 0x245a70: 0xc08efd6  jal         func_23BF58
    ctx->pc = 0x245A70u;
    SET_GPR_U32(ctx, 31, 0x245A78u);
    ctx->pc = 0x23BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF58u, 0x245A70u, 0x245A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0xc08aff2  jal         func_22BFC8
    ctx->pc = 0x245A78u;
    SET_GPR_U32(ctx, 31, 0x245A80u);
    ctx->pc = 0x245A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A78u;
    // 0x245a7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFC8u, 0x245A78u, 0x245A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A80u;
label_245a80:
    // 0x245a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245a8c: 0x808b174  j           func_22C5D0
    ctx->pc = 0x245A8Cu;
    ctx->pc = 0x245A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A8Cu;
    // 0x245a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C5D0u;
    sub_0022C5D0_0x22c5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x245A94u;
    // 0x245a94: 0x0  nop
    ctx->pc = 0x245a94u;
    // NOP
label_245a98:
    // 0x245a98: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245a9c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x245a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245aa0: 0xac506908  sw          $s0, 0x6908($v0)
    ctx->pc = 0x245aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x166908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166908u, _value); } while (0);
    // 0x245aa4: 0xac60f0e0  sw          $zero, -0xF20($v1)
    ctx->pc = 0x245aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AF0E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AF0E0u, _value); } while (0);
label_245aa8:
    // 0x245aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245aac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x245AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AB4u;
        // 0x245ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245ABCu;
    // 0x245abc: 0x0  nop
    ctx->pc = 0x245abcu;
    // NOP
    ctx->pc = 0x245ac0u;
}
