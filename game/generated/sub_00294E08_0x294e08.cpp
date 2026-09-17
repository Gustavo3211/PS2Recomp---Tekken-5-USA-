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

// Function: sub_00294E08
// Address: 0x294e08 - 0x294e90
void sub_00294E08_0x294e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E08_0x294e08");
#endif

    switch (ctx->pc) {
        case 0x294e60u: goto label_294e60;
        case 0x294e78u: goto label_294e78;
        default: break;
    }

    ctx->pc = 0x294e08u;

    // 0x294e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294e0c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294e10: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294e10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294e1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294e20: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x294E20u;
    {
        const bool branch_taken_0x294e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E20u;
        // 0x294e24: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e20) {
            ctx->pc = 0x294E78u;
            goto label_294e78;
        }
    }
    ctx->pc = 0x294E28u;
    // 0x294e28: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x294e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x294e2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x294e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294e30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x294E30u;
    {
        const bool branch_taken_0x294e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e30) {
            ctx->pc = 0x294E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294E30u;
            // 0x294e34: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294E4Cu;
            goto label_294e4c;
        }
    }
    ctx->pc = 0x294E38u;
    // 0x294e38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x294e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294e3c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x294e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294e40: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x294e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x294e44: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x294e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x294e48: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x294e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_294e4c:
    // 0x294e4c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x294E4Cu;
    {
        const bool branch_taken_0x294e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e4c) {
            ctx->pc = 0x294E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294E4Cu;
            // 0x294e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294E7Cu;
            goto label_294e7c;
        }
    }
    ctx->pc = 0x294E54u;
    // 0x294e54: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x294e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294e58: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x294E58u;
    SET_GPR_U32(ctx, 31, 0x294E60u);
    ctx->pc = 0x294E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E58u;
    // 0x294e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x294E58u, 0x294E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E60u;
label_294e60:
    // 0x294e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294e68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294E68u;
    {
        const bool branch_taken_0x294e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E68u;
        // 0x294e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e68) {
            ctx->pc = 0x294E78u;
            goto label_294e78;
        }
    }
    ctx->pc = 0x294E70u;
    // 0x294e70: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x294E70u;
    SET_GPR_U32(ctx, 31, 0x294E78u);
    ctx->pc = 0x294E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E70u;
    // 0x294e74: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x294E70u, 0x294E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E78u;
label_294e78:
    // 0x294e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294e7c:
    // 0x294e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294e84: 0x3e00008  jr          $ra
    ctx->pc = 0x294E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E84u;
        // 0x294e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E8Cu;
    // 0x294e8c: 0x0  nop
    ctx->pc = 0x294e8cu;
    // NOP
    ctx->pc = 0x294e90u;
}
